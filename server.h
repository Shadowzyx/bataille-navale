#include "error.h"

#ifndef CONNECTION_H
#define CONNECTION_H

int connexion(char* hostname, int portno)
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


void* communiquer(int sockfd, char *buffer)
{
	int n;
    
    n = write(sockfd,buffer,strlen(buffer));
    if (n < 0) {
		client_error(5);
	}

	bzero(buffer,256);
    
    n = read(sockfd,buffer,255);
    printf("Resultat de read %d\n",n);
    if (n < 0) {
         client_error(6);
	}
	
	printf("%s\n",buffer);
	return buffer;
}

#endif