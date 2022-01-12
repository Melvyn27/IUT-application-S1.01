#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"



int rechercheprenom(struct abonne client[], char prenom[]){
    int i;
    for (i=1; i<3; i++){
        printf("%s, %s\n", client[i].prenom, prenom);
        if(strcmp(client[i].prenom, prenom) == 0){
            affiche_client(client, i);
            return i;
        }
    }
    return -1;
}
int recherchenom(struct abonne client[], char nom[]){
    int i;
    for (i=1; i<3; i++){
        printf("%s, %s\n", client[i].nom, nom);
        if(strcmp(client[i].nom, nom) == 0){
            affiche_client(client, i);
            return i;
        }
    }
    return -1;
}
int recherchenum(struct abonne client[], char num[]){
    int i;
    for (i=1; i<3; i++){
        printf("%s, %s\n", client[i].numTel, num);
        if(strcmp(client[i].numTel, num) == 0){
            affiche_client(client, i);
            return i;
        }
    }
    return -1;
}
int recherchemail(struct abonne client[], char adresseMail[]){
    int i;
    for (i=1; i<3; i++){
        printf("%s, %s\n", client[i].adresseMail, adresseMail);
        if(strcmp(client[i].adresseMail, adresseMail) == 0){
            affiche_client(client, i);
            return i;
        }
    }
    return -1;
}
