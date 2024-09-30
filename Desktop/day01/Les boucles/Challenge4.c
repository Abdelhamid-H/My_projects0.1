#include <stdio.h>

int main() {
    int n, i;
    printf("Saisire un nombre: ");
    scanf("%d",&n);
    for(i=1 ; i<=n+n ; i+=2){
        printf("%d, ",i);
    }
    return 0;
}
