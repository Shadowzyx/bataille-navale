
#include "serveur.h"
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

int tabValeur[17][17];

void EnregistrerPositionTab(char position,int touche)
{
	tabValeur[(int)position[0]][(int)position[1]] = touche;
} 

void AfficherTab()
{
	char ligne;
	char valeurAff = " ";

	for (i = 0 ; i < 17 ; i++)
	{
		ligne = "";
		for (j = 0 ; j < 17 ; j++)
        	{
			if(tabValeur[i][j] == 1)
			{
				valeurAff = "x";
			}
			else
			{
				valeurAff = " ";
			}

			ligne = ligne + valeurAff + "|";
		}

		printf("%d/n", ligne);
	}
}

#endif
