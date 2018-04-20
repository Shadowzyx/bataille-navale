#include "server.h"
#include "jeu.h"

int tabValeur[17][17];

/*
int main(int argc, char const *argv[])
*/
int main()
{
<<<<<<< HEAD
	/*connexion("localhost", 82);*/
	printf("test");
	EnregistrerPositionTab(1,1,0,tabValeur);
	AfficherTab(tabValeur);
=======
	if (argc < 3) {
		client_error(1);
	}

	int connect = connexion(argv[1], atoi(argv[2]));
>>>>>>> e6df2f17a2dcd8dcaa0e01093fc53abcf81c9e67
}
