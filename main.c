#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define chemin "annuaire_numerique.csv"

typedef struct abonne
{
    char prenom[20];
    char adresse[30];
    char nom[20];
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
int main()
{
    struct abonne test = {"Melvyn", "Delpree", "Villes, 01200", "06 00 00 00 00", "melvyn2701@gmail.com", "etudiant"};
    affiche();
    add_client("nom", "prenom", "", )

    return 0;
}
