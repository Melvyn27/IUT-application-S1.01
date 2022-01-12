#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// void supprimer(char chemin[], char prenom[], char nom[], char adresseMail[]) {

//int main(){

int main(){


    FILE*add_abonnee = NULL;
    add_abonnee=fopen("annuaire_numerique.csv","a");

    char nom[20];
    char prenom[30];
    char ville[30];
    char codePostal[5];
    char numTel[20];
    char adresseMail[50];
    char profession[20];

    char rep;

    printf("Ajout de client\n\n");

    do{
        fflush(stdin);
        printf("Entrer le nom :\n");
        scanf("%s", nom);
        fgets(nom, 20, add_abonnee);
        printf("Entrer le prenom :\n");
        scanf("%s", prenom);
        fgets(prenom, 30, add_abonnee);
        printf("Entrer la ville :\n");
        scanf("%s", ville);
        fgets(ville, 30, add_abonnee);
        printf("Entrer le code postale :\n");
        scanf("%s", &codePostal);
        fgets(codePostal, 5, add_abonnee);
        printf("Entrer le numero de telephone :\n");
        scanf("%s", numTel);
        fgets(numTel, 20, add_abonnee);
        printf("Entrer l'adresse mail :\n");
        scanf("%s", adresseMail);
        fgets(adresseMail, 50, add_abonnee);
        printf("Entrer la profession :\n");
        scanf("%s", profession);
        fgets(profession, 20, add_abonnee);


        fprintf(add_abonnee,"%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, codePostal, numTel, adresseMail, profession);
        fclose(add_abonnee);

        printf("\n Voulez-vous effectuer d'autre enregistrement ? Oui(O) / Non(N)\n");
        scanf("%s", &rep);
        printf("\n");
    } while (rep=='O'||rep=='o'||rep=='Oui'||rep=='oui');

    printf("Fin de l'ajout client\n");

}
