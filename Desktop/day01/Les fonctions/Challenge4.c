#include <stdio.h>
int min(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
int main()
{
  int petit;
  petit = min(100, 150);
  printf("%d", petit);

  return 0;
}