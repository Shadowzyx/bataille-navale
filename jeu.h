#include <error.h>

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
