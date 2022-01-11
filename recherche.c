#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


int recherche_dico(struct abonne client[], char prenom[]){
    return -1;
}


int recherche(struct abonne client[], char prenom[]){
    /*
    if (strcmp(client[0].prenom, "sorted") == 0){
        return recherche_dico(client, prenom);
    }*/
    int i;
    for (i=1; i<3; i++){
        printf("%s, %s\n", client[i].prenom, prenom);
        if(strcmp(client[i].prenom, prenom) == 0){
            affiche_client(client, i);
            return i;
        }
    }
    return -1;
}

/*if (client[0].prenom == "trie"){
int inf = 1;
int milieu = (size-1)/2
sup = size-1
while (prenom != client[milieu].prenom){
}
}*/
