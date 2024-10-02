#include <stdio.h>
#include <string.h>

int main()
{

    char chn1[20];
    char chn2[20];

    printf("Entrez le première nombre: ");
    scanf("%d", &chn1);

    printf("Entrez le deuxiéme nombre: ");
    scanf("%d", &chn2);

    if (strcmp(chn1, chn2) == 0)
    {
        printf("les deux chaînes sont égales.");
    }

    else
    {
        printf("les deux chaînes sont différentes.");
    }
    return 0;
}