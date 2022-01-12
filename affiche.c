#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

void affiche_all(struct abonne client[], int sorted){
    printf("\n\n");
    if (sorted == 1){
        triprenom(client);
    }
    if (sorted == 2){
        trinom(client);
    }
    if (sorted == 3){
        triadresse(client);
    }
    if (sorted == 4){
        trinum(client);
    }
    if (sorted == 5){
        trimail(client);
    }
    if (sorted == 6){
        tripro(client);
    }
    int i;
    for (i=0; i<size; i++){
        printf("%s, ", client[i].prenom);
        printf("%s, ", client[i].nom);
        printf("%s, ", client[i].adresse);
        printf("%s, ", client[i].numTel);
        printf("%s, ", client[i].adresseMail);
        printf("%s,  %d\n", client[i].profession, i);
    }
}

void affiche_client(struct abonne client[], int n){
    printf("\n%s, %s, %s, %s, %s, %s\n", client[n].prenom, client[n].nom, client[n].adresse, client[n].numTel, client[n].adresseMail, client[n].profession);
}