#include <stdio.h>

int main()
{
  int i, t_value, tie, max;
  printf("Saisire la taille de tableau: ");
  scanf("%d", &tie);

  int t_tab[tie];
  for (i = 0; i < tie; i++)
  {
    printf("Elément %d : ", i + 1);
    scanf("%d", &t_tab[i]);
  }
  max = t_tab[0];

  for (int i = 0; i < tie; i++)
  {
    if (t_tab[i] > max)
    {
      max = t_tab[i];
    }
  }
  printf("Le plus grand nombre c'est : %d ", max);

  return 0;
}
