#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

void affiche(struct abonne client[]){
int i;
for (i=0; i<sizeof*(client); i++){
printf("%s, ", client[i].prenom);
printf("%s, ", client[i].nom);
printf("%s, ", client[i].adresse);
printf("%s, ", client[i].numTel);
printf("%s, ", client[i].adresseMail);
printf("%s\n", client[i].profession);
}
}