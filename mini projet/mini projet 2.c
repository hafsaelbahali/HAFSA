#include <stdio.h>
#include <stdlib.h>

int main() {

  int n,i,choix;
  float note[100];
  float moyenne,somme;

    printf("Entrer Nombre des etudiants :");
    scanf("%d",&n);

    for (i=0; i<5; i++)
    {
       printf("entrer la note de l'etudiant %d :", i+1);
       scanf("%d",&note[i]);
    }
    do{
       printf("******************\n");
       printf("Que sohaitez-vous faire ?\n");
       printf("1.Caculer la moyenne des notes \n");
       printf("2.Trouver la note la plus élevée et la plus basse \n");
       printf("3.Afficher les notes supérieures à la moyenne \n");
       printf("4.Compter le nombre d'étudiants ayant validé \n");
       printf("5.Compter le nombre d'étudiants en rattrappage \n");
       printf("6.Quitter \n");

      printf("Entrer votre choix :");
      scanf("%d", &choix);
       switch(choix){
           case 1: printf("*******la moyenne******\n");
           somme=0;
           for(i=0; i<n; i++){
           somme+= note[i];
       }
       moyenne = somme/n;
       printf("la moyenne des notes est : %.2\n",moyenne);
       break;
       default
       *******************************************

       }
    }while(choix!=6);

#include <file.h>
    }
    return 0;
}
