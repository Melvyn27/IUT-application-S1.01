#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

void add_client(struct abonne client[]){

    char nom[50], prenom[50], ville[50], codePostal[50], numTel[50], adresseMail[50], profession[50], rep[10];
    int n;
    do{
        fflush(stdin);
        printf("\nEntrer l'indice du client :\n");
        scanf("%d", &n);
        printf("\nEntrer le nom :\n");
        scanf("%s", nom);
        printf("Entrer le prenom :\n");
        scanf("%s", prenom);
        printf("Entrer la ville :\n");
        scanf("%s", ville);
        printf("Entrer le code postale :\n");
        scanf("%s", codePostal);
        printf("Entrer le numero de telephone :\n");
        scanf("%s", numTel);
        printf("Entrer l'adresse mail :\n");
        scanf("%s", adresseMail);
        printf("Entrer la profession :\n");
        scanf("%s", profession);

        strcat(ville, codePostal);
        remplirClient(nom, prenom, ville, numTel, adresseMail, profession, client, n);

        printf("\n Voulez-vous effectuer d'autre enregistrement ? Oui(O) / Non(N)\n");
        scanf("%s", rep);
        printf("\n");
    } while (strcmp(rep, "O")==0 ||strcmp(rep, "o")==0||strcmp(rep, "oui")==0||strcmp(rep, "Oui")==0);

    printf("Fin de l'ajout client\n");
}