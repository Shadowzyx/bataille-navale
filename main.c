#include "server.h"
#include "jeu.h"

int tabValeur[17][17];

/*
int main(int argc, char const *argv[])
*/
int main()
{
	/*connexion("localhost", 82);*/
	ViderTab(tabValeur);
	EnregistrerPositionTab(14,2,1,tabValeur);
	EnregistrerPositionTab(15,4,0,tabValeur);
	EnregistrerPositionTab(0,9,0,tabValeur);
	EnregistrerPositionTab(1,1,1,tabValeur);
	AfficherTab(tabValeur);
}
