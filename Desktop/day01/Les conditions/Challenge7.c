#include <stdio.h>

int main()
{
  char alph;
  printf("Veuillez entrer un caractère : ");
  scanf("%c", &alph);

  if (65 <= alph && alph <= 90)
  {
    printf("le caractère donné est un alphabet majuscule.");
  }

  else
  {
    printf("le caractère donné est un alphabet non majuscule.");
  }

  return 0;
}