#ifndef IUT_APPLICATION_S1_01_HEADER_H
#define IUT_APPLICATION_S1_01_HEADER_H
#define size 2
#endif //IUT_APPLICATION_S1_01_HEADER_H


typedef struct abonne
{
    char prenom[20];
    char nom[20];
    char adresse[40];
    char numTel[20];
    char adresseMail[50];
    char profession[20];
} ABONNE;

void affiche(struct abonne client[], int tri);
void setDonnee(char donnee[], int type, struct abonne client[], int n);
void remplirClient(char prenom[20], char nom[20], char adresse[40], char numTel[20], char adresseMail[50], char profession[20], struct abonne client[], int n);
void modifieClient(char donnee[], int type, struct abonne client[], int n);