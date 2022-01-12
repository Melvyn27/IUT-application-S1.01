#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"



int rechercheprenom(struct abonne client[], char prenom[]){
    int i;
    for (i=1; i<size; i++){
        if(strcmp(client[i-1].prenom, prenom) == 0){
            printf("%d -->  ", (i-1));
            affiche_client(client, i-1);
        }
    }
    return -1;
}
int recherchenom(struct abonne client[], char nom[]){
    int i;
    for (i=1; i<size; i++){
        if(strcmp(client[i-1].nom, nom) == 0){
            printf("%d -->  ", (i-1));
            affiche_client(client, i-1);
        }
    }
    return -1;
}
int recherchenum(struct abonne client[], char numtel[]){
     int i;
     for (i=1; i<size; i++){
         if(strcmp(client[i-1].numTel, numtel) == 0){
             printf("%d -->  ", (i-1));
             affiche_client(client, i-1);
         }
     }
     return -1;
 }
int recherchemail(struct abonne client[], char mail[]){
    int i;
    for (i=1; i<size; i++){
        if(strcmp(client[i-1].adresseMail, mail) == 0){
            printf("%d -->  ", (i-1));
            affiche_client(client, i-1);
        }
    }
    return -1;
}