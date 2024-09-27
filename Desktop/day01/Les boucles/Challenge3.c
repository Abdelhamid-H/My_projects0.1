#include <stdio.h>

int main() {
    int i, n, sum;
    
    printf("Saisire un nombre positif:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
      sum = sum+ i;   
         printf(" %d" sum ); 
}
    return 0;
}