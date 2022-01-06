#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define chemin "annuaire_numerique.csv"

typedef struct abonne
{
    char prenom[20];
    char nom[20];
    char adresse[40];
    char numTel[20];
    char adresseMail[50];
    char profession[20];
} ABONNE;
/*
int function()
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
*/

void affiche(struct abonne client[]){
int i;
for (i=0; i<2; i++){
printf("%s, ", client[i].prenom);
printf("%s, ", client[i].nom);
printf("%s, ", client[i].adresse);
printf("%s, ", client[i].numTel);
printf("%s, ", client[i].adresseMail);
printf("%s\n", client[i].profession);
}
}


void remplirClient(char prenom[20], char nom[20], char adresse[20], char numTel[20], char adresseMail[20], char profession[20], struct abonne client){
    int mot = 0;
    int i;
    mot = 0;
        while(prenom[mot]!='\0'){
        client.prenom[mot] = prenom[mot];
        mot = mot+1;}
        mot=0;

        while(nom[mot]!='\0'){
        client.nom[mot] = nom[mot];
        mot = mot+1;}
        mot=0;

        while(adresse[mot]!='\0'){
        client.adresse[mot] = adresse[mot];
        mot = mot+1;}
        mot=0;

        while(numTel[mot]!='\0'){
        client.numTel[mot] = numTel[mot];
        mot = mot+1;}
        mot=0;

        while(adresseMail[mot]!='\0'){
        client.adresseMail[mot] = adresseMail[mot];
        mot = mot+1;}
        mot=0;

        while(profession[mot]!='\0'){
        client.profession[mot] = profession[mot];
        mot = mot+1;}
        mot=0;
    }

int main()
{
struct abonne client[1];
client[0].prenom[0] = 'M';
client[0].prenom[1] = 'e';
client[0].prenom[2] = 'l';
client[0].prenom[3] = 'v';
client[0].prenom[4] = 'y';
client[0].prenom[5] = 'n';
remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client[1]);
affiche(client);
return 0;
}
