#include <stdio.h>

int main() {
    char chai[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chai, sizeof(chai), stdin);
    
    printf("Vous avez saisi : %s", chai);

    return 0;
}