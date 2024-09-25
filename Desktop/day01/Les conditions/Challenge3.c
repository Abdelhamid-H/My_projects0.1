#include <stdio.h>
#include <math.h>

int main() {
  int a, b, sum;
printf("Veuillez entrer une valeure de a :");
scanf("%d" ,&a);
printf("Veuillez entrer une valeure de b :");
scanf("%d" ,&b);
if( a != b){
    sum = a + b;
printf(" la somme  de deux valeurs est :%d", sum);
}
else if( a == b){
     sum = a+b * 3;
      printf("le triple de leur somme est :%d", sum);

 }

    return 0;
}


