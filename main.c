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
remplirClient("none","none","none","none","none","none", client, 0);
remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 1);
affiche_all(client, 0);
remplirClient("Liam", "Luka", "Lyon", "0000000000", "liamlucas@wanadoo.fr", "éleveur de pommes de terre", client, 2);
affiche_all(client, 1);
modifieClient("Lucas", 1, client, 2);
affiche_all(client, 1);
if (recherche(client, "Melvyn") == 0){
affiche_client(client, recherche(client, "Melvyn"));
}
return 0;
}
