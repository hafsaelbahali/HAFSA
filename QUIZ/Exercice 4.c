#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0, moyenne, n;
    printf("entrer la taille:\n");
    scanf("%d",&n);
    int tab[5];
    printf("entrer les elements du tableau:\n");

    for(int i=0; i<n; i++) {
    printf("l'element %d", i+1);
    scanf("%d",&tab[i]);

        somme+=tab[i];

    }
    moyenne= somme/5;
    printf("la moyenne est %d\n", moyenne);
    return 0;
}
