#include <stdio.h>
#include <stdlib.h>

int main()
{
 float largeur,longeur,s;
   printf("veuillez entrer la largeur du rectangle :");
   scanf("%f",&largeur);
   printf("veuillez entrer la longeur du rectangle :");
   scanf("%f",&longeur);
   s = (largeur*longeur);
   printf("la surface du rectangle est : %.2f", s);


    return 0;
}
