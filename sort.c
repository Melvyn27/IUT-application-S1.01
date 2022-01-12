#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

void echange(struct abonne client[], int a, int b){
    char temp[50];
    strcpy(temp, client[a].prenom);
    strcpy(client[a].prenom, client[b].prenom);
    strcpy(client[b].prenom, temp);

    strcpy(temp, client[a].nom);
    strcpy(client[a].nom, client[b].nom);
    strcpy(client[b].nom, temp);

    strcpy(temp, client[a].adresse);
    strcpy(client[a].adresse, client[b].adresse);
    strcpy(client[b].adresse, temp);

    strcpy(temp, client[a].numTel);
    strcpy(client[a].numTel, client[b].numTel);
    strcpy(client[b].numTel, temp);

    strcpy(temp, client[a].adresseMail);
    strcpy(client[a].adresseMail, client[b].adresseMail);
    strcpy(client[b].adresseMail, temp);

    strcpy(temp, client[a].profession);
    strcpy(client[a].profession, client[b].profession);
    strcpy(client[b].profession, temp);

}

void triprenom(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].prenom, client[j+1].prenom) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
void trinom(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].nom, client[j+1].nom) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
void triadresse(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].adresse, client[j+1].adresse) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
void trinum(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].numTel, client[j+1].numTel) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
void trimail(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].adresseMail, client[j+1].adresseMail) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
void tripro(struct abonne client[]){
    int i, j;
    char temp[20];
    for (i=0 ; i < size-1; i++){
        for (j=0 ; j < size-i-1; j++){
            if (strcmp(client[j].profession, client[j+1].profession) > 0){
                echange(client, j+1, j);
            }
        }
    }

}
