#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee,mois,jour,heure,minute,seconde;
    int choix;
    printf("Menu de convertion \n");
    prinft("1.convertire l'annee en mois.\n");
    prinft("2.convertire l'annee en jours.\n");
    prinft("3.convertire l'annee en heures.\n");
    prinft("4.convertire l'annee en minutes.\n");
    prinft("5.convertire l'annee en secondes.\n");
    printf("entrer votre choix \n:");
    scanf("%d, & choix ");
}
{
    switch (choix)
case 1:
      printf ("entrer l'annee que vous voulez couvertire :\n");
      scanf("%d, & annee");

    mois = 12*annee;
    printf("le nombre des mois est %d :\n" ,mois);
    break;
case 2:
    jour =365*annee;
    printf("le nombre des jours est %d :\n" ,jour);
case 3:
    heure = 365*24*annee;
    printf("le nombre des heures est %d :\n" ,heure);



    return 0;
}
