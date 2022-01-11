#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


void triFusion(int i, int j, struct abonne client[], char tmp[][]) {
    if(j <= i){ return;}
    int m = (i + j) / 2;
    triFusion(i, m, client, tmp);     //trier la moitié gauche récursivement
    triFusion(m + 1, j, client, tmp); //trier la moitié droite récursivement
    int pg = i;     //pg pointe au début du sous-tableau de gauche
    int pd = m + 1; //pd pointe au début du sous-tableau de droite
    int c;          //compteur
// on boucle de i à j pour remplir chaque élément du tableau final fusionné
    for(c = i; c <= j; c++) {
        if(pg == m + 1) { //le pointeur du sous-tableau de gauche a atteint la limite
            tmp[c] = client[pd].prenom;
            pd++;
        }else if (pd == j + 1) { //le pointeur du sous-tableau de droite a atteint la limite
            tmp[c] = client[pg].prenom;
            pg++;
        }else if (strcmp(client[pg].prenom, client[pd].prenom) < 0) { //le pointeur du sous-tableau de gauche pointe vers un élément plus petit
            tmp[c] = client[pg].prenom;
            pg++;
        }else {  //le pointeur du sous-tableau de droite pointe vers un élément plus petit
            tmp[c] = client[pd].prenom;
            pd++;
        }
    }
    for(c = i; c <= j; c++) {  //copier les éléments de tmp[] à tab[]
        client[c] = tmp[c];
    }
}