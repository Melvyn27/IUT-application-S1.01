#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "header.h"


int openFile(char chemin[])
{
    FILE* fichier = fopen(chemin, "r");
    if (fichier == NULL){
        printf("\nFichier introuvable\n");
        int fclose(FILE *flux);
        return 0;}
    printf(fichier);
        int fclose(FILE *flux);
    return 1;
}

