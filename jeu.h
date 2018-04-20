
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


int positionbateau1;
int positionbateau2;

int positiondesbateaux[2];

int positionBateau()
{
	printf("Saisir la position du premier bateau");
	positionbateaux[0] = scanf("%s",positionbateau1);
	
	printf("Saisir la position du deuxième bateau");
	positionbateaux[1] = scanf("%s",positionbateau2);

	struct Strike positions;

	positions.x = positionbateaux[0];
	positions.y = positionbateaux[1];

	envoi(sockfd, &positions);

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
