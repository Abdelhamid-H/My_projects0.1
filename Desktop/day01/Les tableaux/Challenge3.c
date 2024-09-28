#include <stdio.h>

int main() {
 int i, t_value, tie, sum=0 ;
    printf("Saisire la taille de tableau: ");
    scanf("%d", &tie);
    
int t_tab[tie];
    for( i = 0 ; i < tie ; i++){
        printf("Elément %d : ", i+1);
        scanf("%d",&t_tab[i]);
         sum = sum + t_tab[i];
    }
   
    printf("la somme des éléments de tableau est %d",sum);
    return 0;
}
