#include <stdio.h>
#include <stdlib.h>

int main() {


    char titre[100][20];
    char auteur[100][20];
    float prix[100];
    int quantite[100];
    int choix,x;

    do{
printf (" Gestion de Stock dans une Librairie:\n");

    printf ("1. Ajouter un Livre au Stock :\n");
    printf ("2. Afficher Tous les Livres Disponibles :\n");
    printf ("3. Mettre à Jour la Quantité d'un Livre :\n");
    printf ("4. Supprimer un Livre du Stock :\n");
    printf ("5. Afficher le Nombre Total de Livres en Stock :\n");
    printf ("6. Afficher le nombre total de livres en stock :\n");
    printf ("7. quitter :\n");

    printf ("entrer votre choix :");
    scanf ("%d",&choix);

    //*************************************************************
    switch (choix)
    {//////////////////////////////////////////////////////////////
        case 1:
        printf ("entrer le titre de livre %d:",x+1);
        scanf ("%s",&titre[x]);
        printf ("entrer l'auteur de livre :");
        scanf ("%s",&auteur[x]);
        printf ("entrer le prix de livre :");
        scanf ("%f",&prix[x]);
        printf ("entrer la quantite de livre :");
        scanf ("%d",&quantite[x]);
        x++;
        break;
       /////////////////////////////////////////////////////////////
    case 2:
    int i;
    for (i=0; i < x; i++){
       printf ("************************\n");
       printf ("%s \n" ,titre[i]);
       printf ("%s \n" ,auteur[i]);
       printf ("%f \n" ,prix[i]);
       printf ("%d \n" ,quantite[i]);
    }
    break;

    ///////////////////////^^^^correct
    case 3:
    char nom[50];
    found = 0;
    printf ("entrer le nom de livre a mise a jour :");
    scanf ("%s" ,&nom);
    for (i=0; i < x; i++)
    {
        if(strcmp(nom ,titre[i]) ==0)
    {
        printf ("entrer le stock a ajouter: ");
        scanf ("%d",&quantite[i]);
        printf ("stock a ete mise a joure");
        found++;
        break;
    }
    }

    printf ("livre non trouver\n");
    }
    break;
    ////////////////////// \^^^^ correct
    case 4:
    char sup[50];
    found=0;
    printf ("entre le titre de livre que vous voulez supprimer :\n");
    scanf ("%s",&sup[50]);
    for(i=0; i<x; i++)
    {
        if(strcmp(sup, titre[i]) == 0)
    }
    strcpy(titre[i], titre[x-1]);
    strcpy(auteur[i], auteur[x-1]);
    prix[i]=prix[x-1];
    quantite[i]=quantite[x-1];
    x--;
    found=1;
    printf("le livre est supprimer: \n");
    break;
    }
}
if(!found)
{
    printf("le titre non trouver :\n");
} break;
}
    ////////////////////^^^^^correct

    case 5:
    found=0;
    char Rech_a[50];
    char Rech_t[50];

    printf("entrer l'auteur :");
    scanf("%s", &Rech_a);
    printf("entrer le titre :");
    scanf("%s", &Rech_t);
    printf("%d :\n",x);

    for (int i=0; i<x; i++){
        printf("%s :  %s :\n", t[i], a[i]);
        if (strcmp(Rech_t, t[i])==0 && strcmp(Rech_a, a[i])==0){
            printf("%s\n", t[i]);
            printf("%s\n", a[i]);
            printf("%.2f\n", prix[i]);
            printf("%d\n", quantite[i]);
            found=1;
            break;
        }
    }
        if(found==0) printf("le livre n'est pas disponible");
    break;
    /////////////////correct^^^^

    case 6:
    for(i=0 ; i<x ; i++){
        f = f + quantite[i];
    }
    printf("le nombre de livres est %d \n", f);
    break;

case 7:
    printf("vous avez quittez :\n");
    return 0;


    default : printf("\n\n\n\n\n\nnumber incorrect. entrez un autre livre\n\n\n\n\n\n");

    }///////switch

    }while(choix!=7);
    return 0;
}

