#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"

int recherche(struct abonne client[], char prenom[]){
    int i;
/*if (client[0].prenom == "trie"){
int inf = 1;
int milieu = (size-1)/2
sup = size-1
while (prenom != client[milieu].prenom){
}
}*/

    for (i=1; i<size; i++){
        printf("%s, %s ",prenom, client[i].prenom);
        if(prenom == client[i].prenom){
            affiche_client(client, i);
            return i;
        }
    }
    return 0;
}