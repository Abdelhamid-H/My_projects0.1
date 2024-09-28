#include <stdio.h>

int main() {
 int i, t_value, tie, mu=1, fm;
    printf("Saisire la taille de tableau: ");
    scanf("%d", &tie);
    
    printf("Saisire le facteure de multiplication :");
    scanf("%d", &fm);
 int t_tab[tie];
    for( i = 0 ; i < tie ; i++){
        printf("Elément %d : ", i+1);
        scanf("%d",&t_tab[i]);
        
         mu = fm * t_tab[i];
         printf("multiplication %d X %d = %d\n",t_tab[i], fm, mu);
    }
     return 0;
}