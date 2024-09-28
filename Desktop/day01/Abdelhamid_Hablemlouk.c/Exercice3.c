
#include <stdio.h>

int main() {
    int n , i;
    printf("Saisire un nombre: ");
    scanf("%d", &n);
    
     for ( i=2 ; i < n-1 ; i+=2 );{
          
          if (n % i == 0){
          printf("Ce n'est pas un nombre premier.");
      }  

          else if (n % i != 0){
          printf("C'est un nombre premier.");
      }
}
    return 0;
}