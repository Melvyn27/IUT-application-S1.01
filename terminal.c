#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "header.h"

void requete(char arg1[], char arg2[], char arg3[], struct abonne client[]){
    float temps;
    clock_t t1, t2;
    t2 = clock();
    if (strcmp(arg1, "affiche") == 0){
        if (strcmp(arg2, "client") == 0){
            affiche_client(client, atoi(arg3));
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        if (strcmp(arg2, "sortby") == 0){
            if (strcmp(arg3, "prenom") == 0){
                affiche_all(client, 1);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
            if (strcmp(arg3, "nom") == 0){
                affiche_all(client, 2);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
            if (strcmp(arg3, "adresse") == 0){
                affiche_all(client, 1);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
            if (strcmp(arg3, "numTel") == 0){
                affiche_all(client, 1);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
            if (strcmp(arg3, "mail") == 0){
                affiche_all(client, 1);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
            if (strcmp(arg3, "profession") == 0){
                affiche_all(client, 1);
                t2 = clock();
                temps = (float)(t2-t1)/CLOCKS_PER_SEC;
                printf("temps = %f\n", temps);
            }
        }
        else affiche_all(client, 0);
    }
    if (strcmp(arg1, "recherche") == 0){
        if (strcmp(arg2, "prenom") == 0){
            rechercheprenom(client, arg3);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        if (strcmp(arg2, "nom") == 0){
            recherchenom(client, arg3);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        if (strcmp(arg2, "numtel") == 0){
            recherchenum(client, arg3);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
        if (strcmp(arg2, "mail") == 0){
            recherchemail(client, arg3);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
        }
    }
    if (strcmp(arg1, "file") == 0){
        printf("%d", openFile(arg2, client));
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
    }
    if (strcmp(arg1, "add") == 0){
        add_client(client);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
            printf("temps = %f\n", temps);
    }
}

/*fprintf(add_abonnee,"%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, codePostal, numTel, adresseMail, profession);
          fclose(add_abonnee);*/