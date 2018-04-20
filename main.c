#include "server.h"
#include "jeu.h"

int tabValeur[17][17];

/*
int main(int argc, char const *argv[])
*/
int main()
{
	/*connexion("localhost", 82);*/
	printf("test");
	EnregistrerPositionTab(1,1,1,tabValeur);
	AfficherTab(tabValeur);
}
