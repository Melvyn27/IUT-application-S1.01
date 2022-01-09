#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


void triListe (struct abonne client[]){
printf("\nliste trié");}

void affiche(struct abonne client[], int tri){
if (tri == 1) triListe(client);
int i;
printf("\n\n");
for (i=0; i<size; i++){
printf("%s, ", client[i].prenom);
printf("%s, ", client[i].nom);
printf("%s, ", client[i].adresse);
printf("%s, ", client[i].numTel);
printf("%s, ", client[i].adresseMail);
printf("%s\n", client[i].profession);
}
}