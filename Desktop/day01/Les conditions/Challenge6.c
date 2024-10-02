#include <stdio.h>

int main()
{
    int n;
    printf("Veuillez entrer un nombre :");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("le nombre donné est negatif");
    }
    else if (n > 0)
    {
        printf("le nombre donné est positif");
    }
    else
    {
        printf("le nombre donné est nul");
    }
    return 0;
}
