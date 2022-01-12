#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "header.h"

void requete(char arg1[], char arg2[], char arg3[], struct abonne client[]){
    if (strcmp(arg1, "affiche") == 0){
        if (strcmp(arg2, "client") == 0){
            affiche_client(client, atoi(arg3));
        }
        else if (strcmp(arg2, "sortby") == 0){
            if (strcmp(arg3, "prenom") == 0){
                affiche_all(client, 1);
            }
            if (strcmp(arg3, "nom") == 0){
                affiche_all(client, 2);
            }
            if (strcmp(arg3, "adresse") == 0){
                affiche_all(client, 1);
            }
            if (strcmp(arg3, "numTel") == 0){
                affiche_all(client, 1);
            }
            if (strcmp(arg3, "mail") == 0){
                affiche_all(client, 1);
            }
            if (strcmp(arg3, "profession") == 0){
                affiche_all(client, 1);
            }
        }
        else affiche_all(client, 0);
    }
    else if (strcmp(arg1, "modifieNom")==0){
        setDonnee(arg2, 1, client, atoi(arg3));
        }
    else if (strcmp(arg1, "modifiePrenom")==0){
        setDonnee(arg2, 0, client, atoi(arg3));
        }
    else if (strcmp(arg1, "modifieAdresse")==0){
        setDonnee(arg2, 2, client, atoi(arg3));
        }
    else if (strcmp(arg1, "modifienum")==0){
        setDonnee(arg2, 3, client, atoi(arg3));
        }
    else if (strcmp(arg1, "modifieMail")==0){
        setDonnee(arg2, 4, client, atoi(arg3));
        }
    else if (strcmp(arg1, "modifieProfession")==0){
        setDonnee(arg2, 5, client, atoi(arg3));
        }


    else if (strcmp(arg1, "recherche") == 0){
        if (strcmp(arg2, "prenom") == 0){
            rechercheprenom(client, arg3);
        }
        if (strcmp(arg2, "nom") == 0){
            recherchenom(client, arg3);
        }
        if (strcmp(arg2, "numtel") == 0){
            recherchenum(client, arg3);
        }
        if (strcmp(arg2, "mail") == 0){
            recherchemail(client, arg3);
        }
    }
    else if (strcmp(arg1, "file") == 0){
        printf("%d\n", openFile(arg2, client));
    }
    else if (strcmp(arg1, "add") == 0){
        add_client(client);
    }
    else printf("Commande inconnue");
}

/*fprintf(add_abonnee,"%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, codePostal, numTel, adresseMail, profession);
          fclose(add_abonnee);*/