#include <stdio.h>

int main() {
  int n , f = 1 , i;
  
  do {
    printf("Entrer un nombre: ");
    scanf("%d", &n);
  }while(n < 1);
  
  for(i=1 ; i<=n ; i++){
  f = f * i;
  }
    printf("%d! = %d\n", n, f);
    
    return 0;
}
