#include "base.h"

#ifndef ERROR_H
#define ERROR_H

void client_error(const int codeErreur)
{
	switch (codeErreur)
	{

		case 1:
		  printf("Argument manquant dans l'appel de la fonction");
		  break;

		case 2:
		  printf("Erreur lors de l'ouverture du socket");
		  break;

		case 3:
		  printf("Impossible de se connecter à l'hôte OU hôte inexistant");
		  break;

		case 4:
		  printf("Salut ado !");
		  break;

		case 5:
		  printf("Salut adulte !");
		  break;

		case 6:
		  printf("Salut papy !");
		  break;

		default:
		  printf("Code erreur %d non reconnu", codeErreur);
		  break;

	}
	exit(codeErreur);
}


#endif