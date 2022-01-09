#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

void setDonnee(char donnee[], int type, struct abonne client[], int n){
    int mot = 0;
    if (type == 0){
        while(donnee[mot]!='\0'){
            client[n].prenom[mot] = donnee[mot];
            mot = mot+1;
        }client[n].prenom[mot] = '\0';
    }
    if (type == 1){
        while(donnee[mot]!='\0'){
            client[n].nom[mot] = donnee[mot];
            mot = mot+1;
        }client[n].nom[mot] = '\0';
    }
    if (type == 2){
        while(donnee[mot]!='\0'){
            client[n].adresse[mot] = donnee[mot];
            mot = mot+1;
        }client[n].adresse[mot] = '\0';
    }
    if (type == 3){
        while(donnee[mot]!='\0'){
            client[n].numTel[mot] = donnee[mot];
            mot = mot+1;
        }client[n].numTel[mot] = '\0';
    }
    if (type == 4){
        while(donnee[mot]!='\0'){
            client[n].adresseMail[mot] = donnee[mot];
            mot = mot+1;
        }client[n].adresseMail[mot] = '\0';
    }
    if (type == 5){
        while(donnee[mot]!='\0'){
            client[n].profession[mot] = donnee[mot];
            mot = mot+1;
        }client[n].profession[mot] = '\0';
    }
}

void remplirClient(char prenom[20], char nom[20], char adresse[40], char numTel[20], char adresseMail[50], char profession[20], struct abonne client[], int n){
    setDonnee(prenom, 0, client, n);
    setDonnee(nom, 1, client, n);
    setDonnee(adresse, 2, client, n);
    setDonnee(numTel, 3, client, n);
    setDonnee(adresseMail, 4, client, n);
    setDonnee(profession, 5, client, n);
}

void modifieClient(char donnee[], int type, struct abonne client[], int n){
    setDonnee(donnee, type, client, n);
}