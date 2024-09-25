#include <stdio.h>

int main() {
    int nombre, unite, dizaine, centaine, millier;


    printf("Entrez un nombre entier de quatre chiffres : ");
    scanf("%d", &nombre);
  

    millier = nombre / 1000;       
    centaine = (nombre / 100) % 10; 
    dizaine = (nombre / 10) % 10;   
    unite = nombre % 10;           

    
    printf("L'inverse de nombre %d c'est le nombre %d%d%d%d\n", nombre, unite, dizaine, centaine, millier);

    return 0;
}
