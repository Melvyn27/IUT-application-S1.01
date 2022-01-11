#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "header.h"
#define chemin "../annuaire_numerique.csv"

int main(){
    struct abonne client[size];
    char commande[100];
    float temps;
    clock_t t1, t2;
    remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 0);
    remplirClient("Liam", "Luka", "Lyon", "0000000000", "liamlucas@wanadoo.fr", "eleveur de pommes de terre", client, 1);
    remplirClient("Thierry","Le Delattre","LYON,69006","04.37.71.31.94","thierry.le-delattre@server.fr","architecte", client, 2);
    remplirClient("Zoe-Alexandria","Ribeiro","PARIS,75004","01.73.14.59.22","zoe-alexandria.ribeiro@server.fr","acteur", client, 3);
    printf("Quelle est votre requette");
    while (0<4){
        scanf("%s", commande);
        t1 = clock();
        char *p = strtok(commande, " ");
        if (strcmp(commande,"affiche") == 0){
            affiche_all(client, 0);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        else if (strcmp(p, "affiche_client") == 0){
            affiche_client(client, 1);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        else if (strcmp(p, "tri") == 0){
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            tri(client);
            printf("temps = %f\n", temps);
        }
        else if (strcmp(p, "recherche") == 0){
            printf("%d", recherche(client, "Liam"));
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        else if (strcmp(p, "file") == 0){
            openFile(chemin);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        else if (strcmp(commande, "exit") == 0 || strcmp(commande, "close") == 0 || strcmp(commande, "end") == 0){
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
