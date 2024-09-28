#include <stdio.h>
#include <stdlib.h>

int main()

{


    float celsius,kelvin;
    printf("veuillez entrer la temperature c:");
    scanf("%f", & celsius);
    kelvin = celsius + 273.15;
    printf("la temperature k est: %.2f",kelvin);

    float kilometres,yards;
    printf("veuillez entrer la distance k :");
    scanf("%f", & kilometres);
    yards = kilometres * 1093.61;
    printf("la distance en k est : %.2f",yards);



    return 0;
}
