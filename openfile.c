#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


int openFile(char chemin[], struct abonne client[]){
    char prenom[50], nom[50], ville[50], codePostal[50], numTel[50], mail[50], profession[50];
    int i = -1;
    FILE* fichier = fopen(chemin, "r");
    if (fichier == NULL){
        printf("\nFichier introuvable\n");
        int fclose(FILE *flux);
        return 0;
    }
    char temp[1000];
    while(!feof(fichier)){
        i=i+1;
        fgets(temp, 1000, fichier);
        char * champ = strtok ( temp, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(prenom, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(nom, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(ville, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(codePostal, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(numTel, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(mail, champ);
        champ = strtok ( NULL, ",");
        if (champ == NULL){
            strcpy(prenom, "null");
        }
        strcpy(profession, champ);
        strcat(ville, codePostal);
        remplirClient(prenom, nom, ville, numTel, mail, profession, client, i);
    }
    int fclose(FILE *flux);
    return 1;
}