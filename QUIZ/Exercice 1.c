#include <stdio.h>
#include <stdlib.h>

int main()
{

    float longueur,largeur,aire,perimetre;
          printf("veuillez entrer la longueur :");
          scanf("%f" ,largeur);
          printf("veuillez entrer  la largeur :");
          scanf("%f" ,longueur);

       aire = (longueur * largeur);
       perimetre = 2 * (longueur + largeur);

          printf("l'aire est :%.2f", aire);
          printf("le perimetre est :%.2f", perimetre);


    return 0;
    }
