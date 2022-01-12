#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void supprimer(char annuaire_numerique[], char nom[], char prenom[], char adresseMail[]) {
    FILE *fp = fopen(annuaire_numerique, "r");
    FILE *temp_file = ("temp.csv", "w");
    char tmp[7][150];
    char *token;

    while (!feof(annuaire_numerique)) {
        fscanf(annuaire_numerique,"%s,%s,%s,%s,%s,%s,%s\n",
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

    fp = (annuaire_numerique, "w");
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
                fprintf(annuaire_numerique,"%s,%s,%s,%s,%s,%s,%s\n",
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

    printf("Supprimer un client\n");
    supprimer();

}
