#ifndef IUT_APPLICATION_S1_01_HEADER_H
#define IUT_APPLICATION_S1_01_HEADER_H
#define size 3
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

void affiche_all(struct abonne client[], int tri);
void affiche_client(struct abonne client[], int n);
void setDonnee(char donnee[], int type, struct abonne client[], int n);
void remplirClient(char prenom[20], char nom[20], char adresse[40], char numTel[20], char adresseMail[50], char profession[20], struct abonne client[], int n);
void modifieClient(char donnee[], int type, struct abonne client[], int n);
int recherche(struct abonne client[], char prenom[]);