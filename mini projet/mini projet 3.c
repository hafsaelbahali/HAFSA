#include <stdio.h>
#include <string.h>
int main() {

    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    char date[20]; // Format DD-MM-YYYY
    int patient = 0;
    int choix;
    int choix_statut;
    char statut[20];





    do{
   printf("\n***Gestion des Réservations de Rendez-vous Dentaires ***\n");

    printf("1. Ajouter une réservation :\n");
    printf("2.Modifier une réservation :\n");
    printf("3. Supprimer une réservation :\n");
    printf("4. Afficher les détails d'une réservation :\n");
    printf("5. Tri des réservation :\n");
    printf("6. Recherche des réservation :\n");
    printf("7. Statistique :\n");
    printf("8. Quitter :\n");
    printf("Entrer votre choix :");
    scanf("%d", &choix);

   switch(choix){

        case 1:

        printf("veuillez entrer le nom \n");
        scanf("%s",&nom[patient]);
        printf("veuillez entrer le prenom \n");
        scanf("%s",&prenom[patient]);
        printf("veuillez entrer le telephone \n");
        scanf("%s",&telephone[patient]);
        printf("veuillez entrer l'age \n");
        scanf("%s",&age);
        printf("veuillez entrer le statut (1 Valide, 2 Reporte, 3 Annule, 4 Traite \n");
        scanf("%d", &choix_statut);

        switch(choix_statut){
            case 1:
                printf("Valide");
            break;
            case 2: printf("Reporte");
            break;
            case 3:printf("Annule");
            break;
            case 4:printf("Traite");
            break;
            default:
            printf("le numero invalide\n");
            break;
        }

   }
}

while(choix!=0);
    return 0;
}

