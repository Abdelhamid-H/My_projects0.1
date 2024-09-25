#include <stdio.h>

int main() {
  float ms, kmh;
 printf("Entrer la vitesse en kilomètres est :");
 scanf("%f",&kmh);
  ms = kmh * 0.27778;
 printf("La vitesse mètres par seconde est :%.2f\n",ms);
    return 0;
}