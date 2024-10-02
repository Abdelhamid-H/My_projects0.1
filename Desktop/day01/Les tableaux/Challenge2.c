#include <stdio.h>

int main()
{
  int i, t_value, tie;
  printf("Saisire la taille de tableau: ");
  scanf("%d", &tie);

  int t_tab[tie];
  for (i = 0; i < tie; i++)
  {
    printf("Elément %d : ", i + 1);
    scanf("%d", &t_tab[i]);
  }
  for (i = 0; i < tie; i++)
  {
    printf("%d ", t_tab[i]);
  }

  return 0;
}