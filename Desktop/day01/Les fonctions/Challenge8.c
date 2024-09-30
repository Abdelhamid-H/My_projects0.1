#include <stdio.h>
int pair( int a){
  if(a%2==0){
    return 1;
  }
  else {
    return 0;
  }
}

int main() {
  int nbr;
    printf("Sausire un nombre: ");
    scanf("%d", &nbr);
    nbr = pair(nbr);
    printf ("%d", nbr);

    return 0;
}