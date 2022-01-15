#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){

    FILE *Fic, *FicResult;

    char nom[20];
    char prenom[30];
    char ville[30];
    char codePostal[5];
    char numTel[20];
    char adresseMail[50];
    char profession[20];
    char mailSup[50];


    if(NULL == (Fic = fopen ("annuaire5000", "r")))
    return -1;
    if(NULL == (FicResult = fopen ("annuaire5000_resultat", "w")))
    return -1;

    printf ("Suppression de client\n");
    printf ("\nSaississez l'adresse mail du client à supprimer\n");
    scanf ("%s", mailSup);

    while(fscanf (Fic, "%s %s %s %s %s %s %s", nom, prenom, ville, codePostal, numTel, adresseMail, profession) == 7)
        if(strcmp (adresseMail, mailSup) != 0)
          fprintf(FicResult, "%s %s %s %s %s %s %s", nom, prenom, ville, codePostal, numTel, adresseMail, profession);
    fclose(Fic);
    fclose(FicResult);
    return 0;
}
