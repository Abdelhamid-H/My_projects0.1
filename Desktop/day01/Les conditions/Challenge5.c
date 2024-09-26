#include <stdio.h>

int main() {
   float secondes, minutes, heures, mois, nombre_annee;
   int menu;
   
   printf("Entrer le nombre d'années :");
   scanf("%f", &nombre_annee);
   printf("épouiller 1 pour choisire le transformer en secondes.\n");
   printf("épouiller 2 pour choisire le transformer en minutes.\n");
   printf("épouiller 3 pour choisire le transformer en heures.\n");
   printf("épouiller 4 pour choisire le transformer en jours.\n");
   printf("épouiller 5 pour choisire le transformer en  mois.\n");
   scanf("%d", &menu);
   
   switch(menu){
      
       case 1:
            printf("%.0f",nombre_annee * 31536000);
            break;
       case 2:
             printf("%.0f",nombre_annee * 525600);
             break;
       case 3:
             printf("%.0f",nombre_annee * 8760);
             break;
       case 4:
             printf("%.0f",nombre_annee * 365);
             break;
       default:
             printf("%.0f",nombre_annee * 12);
   }
   
    return 0;
}
