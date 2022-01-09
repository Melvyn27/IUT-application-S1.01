#include <stdlib.h>
#include <string.h>
#include <stdio.h>
<<<<<<< HEAD
#include "header.h"
#define chemin "annuaire_numerique.csv"


/*
int function()
=======

typedef struct abonne
{
    char prenom[20];
    char nom[20];
    char adresse[40];
    char numTel[20];
    char adresseMail[50];
    char profession[20];
} ABONNE;


void triListe (struct abonne client[]){
printf("\nliste trié");}

int openFile(char chemin[])
>>>>>>> file
{
    FILE* fichier = fopen(chemin, "r");
    if (fichier == NULL){
        printf("\nFichier introuvable\n");
        int fclose(FILE *flux);
        return 0;}
    printf(fichier);
        int fclose(FILE *flux);
    return 1;
}

<<<<<<< HEAD
=======

void affiche(struct abonne client[], int tri){
if (tri == 1) triListe(client);
int i;
printf("\n\n");
for (i=0; i<sizeof(client); i++){
printf("%s, ", client[i].prenom);
printf("%s, ", client[i].nom);
printf("%s, ", client[i].adresse);
printf("%s, ", client[i].numTel);
printf("%s, ", client[i].adresseMail);
printf("%s\n", client[i].profession);
}
}

>>>>>>> file
void setDonnee(char donnee[], int type, struct abonne client[], int n){
    int mot = 0;
    if (type == 0){
        while(donnee[mot]!='\0'){
            client[n].prenom[mot] = donnee[mot];
            mot = mot+1;
        }
    }
    if (type == 1){
        while(donnee[mot]!='\0'){
            client[n].nom[mot] = donnee[mot];
            mot = mot+1;
        }
    }
    if (type == 2){
        while(donnee[mot]!='\0'){
            client[n].adresse[mot] = donnee[mot];
            mot = mot+1;
        }
    }
    if (type == 3){
        while(donnee[mot]!='\0'){
            client[n].numTel[mot] = donnee[mot];
            mot = mot+1;
        }
    }
    if (type == 4){
        while(donnee[mot]!='\0'){
            client[n].adresseMail[mot] = donnee[mot];
            mot = mot+1;
        }
    }
    if (type == 5){
        while(donnee[mot]!='\0'){
            client[n].profession[mot] = donnee[mot];
            mot = mot+1;
        }
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

int main()
{
struct abonne client[5];
remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 0);
affiche(client, 0);
modifieClient("Luka", 0, client, 0);
affiche(client, 1);
printf("%d",openFile("annuaire_numerique.csv"));
return 0;
}
