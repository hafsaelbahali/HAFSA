#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  nombre,resultat;
    printf("veuillez entrer un nombre :");
    scanf("%d",&nombre);
    resultat = nombre%2;
    if (resultat ==0)
    {
        printf("le nombre %d est :paire", nombre);
    }
    else
    {
        printf("le nombre %d est : impaire", nombre);
    }
    return 0;
}
