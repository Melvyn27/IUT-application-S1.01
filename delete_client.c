#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void supprimer(char chemin[], char nom[], char prenom[], char adresseMail[]) {
    FILE *fp = fopen(chemin, "r");
    FILE *temp_file = ("temp.csv", "w");
    char tmp[7][150];
    char *token;

    while (!feof(chemin)) // end of file
        {
        fscanf(chemin,"%s,%s,%s,%s,%s,%s,%s\n",
               tmp[0],
               tmp[1],
               tmp[2],
               tmp[3],
               tmp[4],
               tmp[5],
               tmp[6]);
        if (strcmp(tmp[0], nom) != 0 && strcmp(tmp[1], prenom) != 0 && strcmp(tmp[5], adresseMail) != 0) {
                fprintf(temp_file,"%s,%s,%s,%s,%s,%s,%s\n",
               tmp[0],
               tmp[1],
               tmp[2],
               tmp[3],
               tmp[4],
               tmp[5],
               tmp[6]);
            }
    }

    fclose(fp);
    fclose(temp_file);

    fp = (chemin, "w");
    temp_file = ("temp.csv", "r");

    while (!feof(temp_file)) {
        fscanf(temp_file,"%s,%s,%s,%s,%s,%s,%s\n",
               tmp[0],
               tmp[1],
               tmp[2],
               tmp[3],
               tmp[4],
               tmp[5],
               tmp[6]);
        if (strcmp(tmp[0], nom) != 0 && strcmp(tmp[1], prenom) != 0 && strcmp(tmp[5], adresseMail) != 0) {
                fprintf(chemin,"%s,%s,%s,%s,%s,%s,%s\n",
               tmp[0],
               tmp[1],
               tmp[2],
               tmp[3],
               tmp[4],
               tmp[5],
               tmp[6]);
            }
    }
}

int main (){

    char nom[20];
    char prenom[30];
    char ville[30];
    char codePostal[5];
    char numTel[20];
    char adresseMail[50];
    char profession[20];

    printf("Supprimer un client\n");
    printf("\nNom :\n");
    scanf("%s", nom);
    fgets(nom, 20, stdin);
    printf("\nPrenom :\n");
    scanf("%s", prenom);
    fgets(prenom, 20, stdin);
    printf("\nAdresse mail :\n");
    scanf("%s", adresseMail);
    fgets(adresseMail, 20, stdin);

    supprimer("annuaire_numerique", "jin","vanessa","vanessa@gmail.com");




    //printf ("Client %s %s supprimer", nom, prenom);

}
