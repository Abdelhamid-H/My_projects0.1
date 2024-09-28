#include <stdio.h>

int main() {
  int i, t_value, tie, min;
    printf("Saisire la taille de tableau: ");
    scanf("%d", &tie);

  int t_tab[tie];
  for( i = 0 ; i < tie ; i++){
      printf("Elément %d : ", i+1);
      scanf("%d",&t_tab[i]);
  }
   min = t_tab[0];
            for(int i = 0; i < tie; i++){
                if (t_tab[i]<min){
                min = t_tab[i];    
                }

            }
            printf("Le plus petit nombre c'est : %d ", min);
    return 0;
}