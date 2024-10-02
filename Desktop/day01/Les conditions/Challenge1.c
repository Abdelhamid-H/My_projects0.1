#include <stdio.h>

int main()
{
    int N;
    printf("Veuillez entrer un nombre : ");
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        printf("nombre est un nombre pair.");
    }
    else
    {
        printf("nombre est un nombre impair.");
    }

    return 0;
}
