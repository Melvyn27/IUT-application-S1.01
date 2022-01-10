#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"
#define chemin "annuaire_numerique.csv"

int main(){
    struct abonne client[size];
    char commande[100];
    remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 1);
    remplirClient("Liam", "Luka", "Lyon", "0000000000", "liamlucas@wanadoo.fr", "éleveur de pommes de terre", client, 2);
    printf("Quelle est votre requette");
    while (0<4){
        scanf("%s", commande);
        char *p = strtok(commande, " ");
        if (strcmp(commande,"affiche") == 0){
            affiche_all(client, 0);
        }
        else if (strcmp(p, "affiche_client") == 0){
            affiche_client(client, 1);
        }
        else if (strcmp(commande, "exit") == 0){
            return 0;
        }
        else printf("commande inconue\n\n");
    }
}

/*
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
*/