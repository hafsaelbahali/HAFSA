#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1 ,x2 ,y1 ,y2 ;
    float xp ,yp ;
    float R1 ,R2 ;
    printf("enter 1ere coordonnee x1 et y1");
    scanf("%f%f",&x1 ,&y1);

    printf("enter 2eme coordonnee x2 et y2 ");
    scanf("%f%f",&x2 ,&y2);

        printf("enter 3eme coordonnee xp et yp ");
    scanf("%f %f", &xp ,&yp);

    R1=(yp-y1) / (xp-x1);
    R2=(y2-y1) / (x2-x1);

    if (x1<=xp && xp<=x2 &&y1<=yp && yp<=y2 && R1==R2){
            printf("yes");



    return 0;
}}
