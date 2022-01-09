#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"
#define chemin "annuaire_numerique.csv"

int main(){
    struct abonne client[size];
    remplirClient("none","none","none","none","none","none", client, 0);
    remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 1);
    affiche_all(client, 0);
    remplirClient("Liam", "Luka", "Lyon", "0000000000", "liamlucas@wanadoo.fr", "éleveur de pommes de terre", client, 2);
    affiche_all(client, 1);
    modifieClient("Lucas", 1, client, 2);
    affiche_all(client, 1);
    printf("%d", recherche(client, "Melvyn"));
    affiche_all(client, 0);
    openFile(chemin);
    return 0;
}
