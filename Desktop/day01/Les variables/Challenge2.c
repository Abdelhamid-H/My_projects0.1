#include <stdio.h>

int main() {
  float k, c;
 printf("Entrer la température en Celsius :");
 scanf("%2.f",&c);
  k = c + 273.15;
 printf("la température en Kelvin est : %.2f\n",k);
    return 0;
}
