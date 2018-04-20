void client_error(const int codeErreur)
{
	switch (codeErreur)
	{

		case 1:
		  printf("Salut bebe !");
		  break;

		case 2:
		  printf("Salut gamin !");
		  break;

		case 3:
		  printf("Salut jeune !");
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
		  printf("Code erreur %s non reconnu", codeErreur);
		  break;

	}
}