#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define chemin "annuaire_numerique.csv"

typedef struct abonne
{
    char prenom[20];
    char nom[30];
    char adresse[20];
    char numTel[20];
    char adresseMail[20];
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
for (i=0; i<sizeof(client); i++){
printf("%s, ", client[i].prenom);
printf("%s, ", client[i].nom);
printf("%s, ", client[i].adresse);
printf("%s, ", client[i].numTel);
printf("%s, ", client[i].adresseMail);
printf("%s\n", client[i].profession);
}

void remplirClient(char prenom, char nom, char adresse, char numTel, char adresseMail, char profession, struct abonne client){
    int mot = 0;
    int champ;
    for (champ=0; i<6; i++){
    mot = 0;
    if (champ == 0) {
        client[j]->prenom[mot] = sortie[i];
    } else if (champ == 1) {
        client[j]->nom[mot] = sortie[i];
    } else if (champ == 2) {
        client[j]->ville[mot] = sortie[i];
    } else if (champ == 3) {
        client[j]->codePostal[mot] = sortie[i];
    } else if (champ == 4) {
        client[j]->telephone[mot] = sortie[i];
    } else if (champ == 5) {
        client[j]->email[mot] = sortie[i];
    } else if (champ == 6) {
        client[j]->metier[mot] = sortie[i];
    }
    mot++;
}

}
int main()
{
struct abonne client[5];
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
