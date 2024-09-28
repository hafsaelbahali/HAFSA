#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,M;
    printf("veuillez entrer les trois nombres :\n");
    scanf("%d%d%d",&a,b,c);
    M = (a*b*c)^(1/3);
    printf("la moyenne geometrique des trois valeurs est: %f", M);


    return 0;
}
