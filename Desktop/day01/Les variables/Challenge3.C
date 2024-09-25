#include <stdio.h>

int main() {
  float Yards, Km;
 printf("Entrer la distance en kilomètres :");
 scanf("%f",&Km);
  Yards = Km * 1093.61;
 printf("en yards est :%.2f\n",Yards);
    return 0;
}