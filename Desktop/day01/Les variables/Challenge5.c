#include <stdio.h>

int main() {
    float c;
    printf(" Entrer la température en Celsius :");
    scanf("%f" ,&c);
    if (c < 0)
    printf("Solide");
    if (0 <= c < 100)
    printf("Liquide");
    if (c >= 100)
    printf("Gaz");
    return 0;
}
