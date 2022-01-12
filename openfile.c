#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


int openFile(char chemin[], struct abonne client[]){
    char prenom[50], nom[50], ville[50], codePostal[50], numTel[50], mail[50], profession[50];
    int i = 0;
    FILE* fichier = fopen(chemin, "r");
    if (fichier == NULL){
        printf("\nFichier introuvable\n");
        int fclose(FILE *flux);
        return 0;
    }
    char temp[1000];
    while(!feof(fichier)){
        printf("test\n");
        fgets(temp, 200, fichier);
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
        i=i+1;
    }
    int fclose(FILE *flux);
    return 1;
}