#include "jeu.h"

int tabValeur[17][17];

Player me;

int main(int argc, char const *argv[])
{
	if (argc < 3) {
		client_error(1);
	}

	int sockfd = connexion(argv[1], atoi(argv[2]));

	write(sockfd, "Bonjour hahaha", 255);

	OutgoingMessage *message;

	while(1) {
		message = receive(sockfd);

		if ((*message).typeMessage == 1) {
			me = (*message).player;
			pseudo = player.nickname;

			Boat b1 = player.boat1;
			Boat b2 = player.boat2;
		}
		if ((*message).typeMessage == 3) {
			Strike *strike;
			
			printf("Entrez X");
			scanf("%i",(*strike).x);
			printf("Entrez Y");
			scanf("%i",(*strike).Y);
			
			(*strike).player = me;
			
			x_send(sockfd, Strike *strike);
		}
		
		if ((*message).typeMessage == 4){
			prntf("Joueur touché : " + (*message).nickPlayerTo)	
		}
		
		
		if ((*message).typeMessage == 6){
			printf("A joué :" + (*message).nickname);			
			EnregistrerPositionTab((*message).strike.x, (*message).stricke.y, 1,tabValeur);
		}
		
		
		if ((*message).typeMessage == 7){
			prntf("Joueur touché : " + (*message).nickPlayerTo);
			int compteur;
			for (compteur = 0 ; compteur < 15 ; compteur++){
				if((*message).eliminatedPlayers[compteur].nickname <> ''){
					prntf("Joueur eliminés : " + (*message).eliminatedPlayers[compteur].nickname);
				}
			}
		}
		
		if ((*message).typeMessage == 8){
			prntf("Vainceur : " + (*message).nickname);
		}
		
		
		
	}
}
