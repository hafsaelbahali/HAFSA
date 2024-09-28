#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre,i,x;
    printf("veuillez entrer un nombre positif");
    scanf("%d", &nombre);

    if (nombre < 2)
        printf("le nombre n'est pas premier");
    else{
        x=0;
    for(int i = 2 ; i <= nombre;i++)
        if(nombre%i != 0) x=1;
    if(x==0) printf("le nombre est premier");
    else  printf("le nombre est n'est pas premier");
    return 0;
    }
}
