#include "error.h"

#ifndef CONNECTION_H
#define CONNECTION_H

int connexion(const char* hostname, int portno)
{
	int port = portno;
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);

	if (sockfd < 0) {
		client_error(2);
	}

	struct hostent *server = gethostbyname(hostname);

	if (server == NULL) {
		client_error(3);
	}

	struct sockaddr_in serv_addr;

	bzero((char*) &serv_addr, sizeof(serv_addr));

	serv_addr.sin_family = AF_INET;

    bcopy(
    	(char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length)
    ;
    
    serv_addr.sin_port = htons(portno);
    
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) {
        client_error(4);
    }

    return sockfd;
}


bool x_send(int sockfd, Strike *buffer)
{
	int n;

    n = write(sockfd, buffer, sizeof(Strike));
    if (n < 0) {
		client_error(5);
	}

	return true;
}

OutgoingMessage* receive(int sockfd)
{
	OutgoingMessage *message= malloc(sizeof(OutgoingMessage));

	int n = read(sockfd, message, sizeof(OutgoingMessage));
	if (n < 0) {
		client_error(6);
	}

	return message;
}

#endif