#include <stdio.h>

int main() {
    int b, e, p=1, i;
    //b = la base
    //e = l'exposant
    //p = produit
    
    printf("Saisire la base: ");
    scanf("%d",&b);
    printf("Saisire l'exposant: ");
    scanf("%d",&e);
    
    for (i=0 ; i < e; i++){
        p = p * b ;
    }
      printf("%d ^ %d = %d ", b,e, p);
    return 0;
}
