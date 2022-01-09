#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

int recherche(struct abonne client[], char prenom[]){
    int i;
    for (i=1; i<3; i++){
        printf("\ntest");
        printf("%s, %s ",prenom, client[i].prenom);
        if(prenom == client[i].prenom){
            affiche_client(client, i);
            printf("\n%d", i);
            return i;
        }
    }
    return 0;
}

/*if (client[0].prenom == "trie"){
int inf = 1;
int milieu = (size-1)/2
sup = size-1
while (prenom != client[milieu].prenom){
}
}*/
