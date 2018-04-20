
#include "server.h"

#ifndef JEU_H
#define JEU_H

/*
Fonctionnalité à faire :
- Récupérer une saisie clavier
- Recevoir la réponse serveur afin d'écrire touché ou non touché
- Faire un update des valeur stocker
- client_error
*/


int *positionbateau1;
int *positionbateau2;

int positiondesbateaux[2];

int positionBateau()
{
	// Static datas, change it when including this function in main :)
	int sockfd = connexion("localhost", 82);

	printf("Saisir la position du premier bateau");
	positiondesbateaux[0] = scanf("%d",positionbateau1);
	
	printf("Saisir la position du deuxième bateau");
	positiondesbateaux[1] = scanf("%d",positionbateau2);

	struct Strike positions;

	positions.x = positiondesbateaux[0];
	positions.y = positiondesbateaux[1];

	communiquer(sockfd, (void *)&positions);

	return 0;

}

void EnregistrerPositionTab(int positionX,int positionY,int touche, int(*tab)[17])
{
	printf("Tableau enregistrer1");
	tab[positionX][positionY] = touche;
	printf("Tableau enregistrer2");
} 

void AfficherTab(int(*tab)[17])
{
	char *ligne;
	char *valeurAff;

	for (int i = 0 ; i < 17 ; i++)
	{
		ligne = "";
		for (int j = 0 ; j < 17 ; j++)
        	{
			if(tab[i][j] == 1)
			{
				valeurAff = "x";
			}
			else
			{
				valeurAff=" ";
			}

			strcat(ligne,valeurAff);
			strcat(ligne,"|");
		}

		printf("%s/n", ligne);
	}
}

#endif
