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
    char arg1[100], arg2[100], arg3[100];
    while(0==0){
        scanf("%s", commande);
        char * arg = strtok ( commande, "-");
        strcpy(arg1, arg);
        arg = strtok ( NULL, "-");
        strcpy(arg2, arg);
        arg = strtok ( NULL, "-");
        strcpy(arg3, arg);
        printf("%s, %s, %s", arg1, arg2, arg3);
        if (strcmp(arg1, "exit") == 0 || strcmp(arg1, "close") == 0 || strcmp(arg1, "end") == 0){
            return 0;
        }
        requete(arg1, arg2, arg3, client);
    }
    return 0;
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
*//*


    remplirClient("Melvyn","Delpree","Villes","0000000000","melvyn2701@gmail.com","etudiant", client, 0);
    remplirClient("Liam", "Luka", "Lyon", "0000000000", "liamlucas@wanadoo.fr", "eleveur de pommes de terre", client, 1);
    remplirClient("Thierry","Le Delattre","LYON,69006","04.37.71.31.94","thierry.le-delattre@server.fr","architecte", client, 2);
    remplirClient("Zoe-Alexandria","Ribeiro","PARIS,75004","01.73.14.59.22","zoe-alexandria.ribeiro@server.fr","acteur", client, 3);
    printf("Quelle est votre requette");



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
        else
        }
        else printf("commande inconue\n\n");

*/