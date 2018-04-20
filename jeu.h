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

int positionBateau(){

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
