#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define chemin "annuaire_numerique.csv"
/*

typedef struct abonne
{
    char nom[20];
    char prenom[20];
    char adresse[20];
    char numTel[16];
    char adresseMail[50];
    char profession[20];
} ABONNE;*/





typedef struct abonne
{
    char nom[20];
    char prenom[20];
    char adresse[30];
    char numTel[20];
    char adresseMail[20];
    char profession[20];
} ABONNE;

int function()
{
  static int count = 0;
  count++;
  return count;
}

int main()
{
  printf("%d ", function());
  printf("%d \n", function());

   char c='\0'; // or c=0; //code ASCII
    
    return 0;
}
