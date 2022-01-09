#ifndef IUT_APPLICATION_S1_01_HEADER_H
#define IUT_APPLICATION_S1_01_HEADER_H

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

void affiche(struct abonne client[]);