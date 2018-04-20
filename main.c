#include "jeu.h"

int tabValeur[17][17];

char* pseudo;

int main(int argc, char const *argv[])
{
	if (argc < 3) {
		client_error(1);
	}

	int sockfd = connexion(argv[1], atoi(argv[2]));

	s_outgoingMessage *message;

	while(1) {
		message = receive(sockfd);

		if ((*message).typeMessage == 1) {
			Player player = (*message).player;
			pseudo = player.nickname;

			Boat b1 = player.boat1;
			Boat b2 = player.boat2;
		}
	}
}
