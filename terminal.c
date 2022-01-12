#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "header.h"

void requete(char arg1[], char arg2[], char arg3[], struct abonne client[]){
    if (strcmp(arg1, "affiche") == 0){
        if (strcmp(arg2, "client") == 0){
            affiche_client(client, atoi(arg3));
        }
        if (strcmp(arg2, "sortby") == 0){
            if (strcmp(arg3, "prenom") == 0){
                affiche_all(client, 1);
            }
        }
        else affiche_all(client, 0);
    }
    if (strcmp(arg1, "recherche") == 0){
        if (strcmp(arg2, "prenom") == 0){
            rechercheprenom(client, arg3);
        }
        if (strcmp(arg2, "nom") == 0){
            recherchenom(client, arg3);
        }
        if (strcmp(arg2, "numtel") == 0){
            recherchenum(client, arg3);
        }
        if (strcmp(arg2, "mail") == 0){
            recherchemail(client, arg3);
        }
    }
    if (strcmp(arg1, "file") == 0){
        printf("%d", openFile(arg2, client));
    }
    if (strcmp(arg1, "add") == 0){
        char * arg = strtok ( temp, ",");
        strcpy(prenom, arg);
        arg = strtok ( NULL, ",");
        strcpy(nom, arg);
        arg = strtok ( NULL, ",");
        strcpy(ville, arg);
        arg = strtok ( NULL, ",");
        strcpy(codePostal, arg);
        arg = strtok ( NULL, ",");
        strcpy(numTel, arg);
        arg = strtok ( NULL, ",");
        strcpy(mail, arg);
        arg = strtok ( NULL, ",");
        strcpy(profession, arg);
        strcat(ville, codePostal);
        remplirClient(prenom, nom, ville, numTel, mail, profession, client, i);
    }
}