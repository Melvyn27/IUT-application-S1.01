#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){


    FILE *fic = fopen("annuaire_numerique.csv", "r");
    if(fic == NULL)
        exit(1);

    char nom[20];
    char prenom[30];
    char ville[30];
    char codePostal[5];
    char numTel[20];
    char adresseMail[50];
    char profession[20];

    int num_filtre = 0;
    char rep;

    printf("Filtrage");
    do{
        printf("\n\nSaisissez le numero a gauche pour effectuer le filtrage de vos choix\n\n");
        printf("    1. Nom\n");
        printf("    2. Prenom\n");
        printf("    3. Ville\n");
        printf("    4. Code postale\n");
        printf("    5. Numero de telephone\n");
        printf("    6. Adresse mail\n");
        printf("    7. Profession\n\n");
        printf("Numero de filtrage : ");
        scanf ("%d", &num_filtre);
        printf("\n");


        //if(num_filtre >=1 && num_filtre <=7){}


        switch(num_filtre){
            case 1:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Nom : %s\n", nom);
                break;
            case 2:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Prenom : %s\n", prenom);
                break;
            case 3:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Ville : %s\n", ville);
                break;
            case 4:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Code postal : %s\n", codePostal);
                break;
            case 5:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Numero de telephone : %s\n", numTel);
                break;
            case 6:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Adresse mail : %s\n", adresseMail);
                break;
            case 7:
                fscanf(fic, "%s,%s,%s,%s,%s,%s,%s\n", nom, prenom, ville, &codePostal, numTel, adresseMail, profession);
                printf("Profession : %s\n", profession);
                break;
            default :
                printf("Erreur, veuillez saisir un chiffre compris entre 1 et 7.\n");
                break;
        }

        printf("\n\nVoulez-vous effectuer un autre filtrage ? Oui(O) / Non(N)\n");
        scanf("%s", &rep);
        printf("\n");

    } while (rep=='O'||rep=='o'||rep=='Oui'||rep=='oui');


    fclose(fic);

    //return 0;


}
