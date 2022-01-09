#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"
#define chemin "annuaire_numerique.csv"

/*
int openFile(char chemin[])
{
    FILE* fichier = fopen(chemin, "r");
    if (fichier == NULL){
        printf("\nFichier introuvable\n");
        int fclose(FILE *flux);
        return 0;}
    printf(fichier);
        int fclose(FILE *flux);
    return 1;
}*/

int main()
{
struct abonne client[size];
remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 0);
affiche(client, 0);
modifieClient("Luka", 0, client, 0);
affiche(client, 1);
return 0;
}
