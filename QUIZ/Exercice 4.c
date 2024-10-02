#include <stdio.h>
#include <stdlib.h>


int main() {

    int nombres[5];
    int i;


    for(i=0; i<5; i++){
        printf("Entrez le nombre %d: ",i+1);
        scanf("%d", &nombres[i]);
    }

    int plus_grand = nombres[0];
    int plus_petit = nombres[0];

    for (i=1; i<5; i++) {
        if (nombres[i] > plus_grand){
            plus_grand = nombres[i];
        }
        if
            (nombres[i] < plus_petit);{
            plus_petit = nombres[i];
        }
    }

    printf("Le plus grand nombre est: %d\n", plus_grand);
    printf("Le plus petit nombre est: %d\n", plus_petit);
    return 0;
    }


