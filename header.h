#ifndef IUT_APPLICATION_S1_01_HEADER_H
#define IUT_APPLICATION_S1_01_HEADER_H
#define size 5100

#endif //IUT_APPLICATION_S1_01_HEADER_H


typedef struct abonne
{
    char prenom[20];
    char nom[20];
    char adresse[40];
    char numTel[20];
    char adresseMail[50];
    char profession[100];
} ABONNE;

void affiche_all(struct abonne client[], int tri);
void affiche_client(struct abonne client[], int n);
void setDonnee(char donnee[], int type, struct abonne client[], int n);
void remplirClient(char prenom[50], char nom[50], char adresse[50], char numTel[50], char adresseMail[50], char profession[50], struct abonne client[], int n);
void modifieClient(char donnee[], int type, struct abonne client[], int n);
int rechercheprenom(struct abonne client[], char prenom[]);
int recherchenom(struct abonne client[], char nom[]);
int recherchenum(struct abonne client[], char num[]);
int recherchemail(struct abonne client[], char adresseMail[]);
int openFile(char chemin[], struct abonne client[]);
void triprenom(struct abonne client[]);
void trinom(struct abonne client[]);
void triadresse(struct abonne client[]);
void trinum(struct abonne client[]);
void trimail(struct abonne client[]);
void tripro(struct abonne client[]);
void requete(char arg1[], char arg2[], char arg3[], struct abonne client[]);
void add_client(struct abonne client[]);