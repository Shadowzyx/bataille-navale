#include "server.h"

#ifndef JEU_H
#define JEU_H


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
