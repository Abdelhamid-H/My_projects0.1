#include <stdio.h>

int main() {
    char car;

    printf("Saisire un caractère : ");
    scanf(" %c", &car);  

    
    if ((car >= 'a' && car <= 'z') || (car >= 'A' && car <= 'Z')) {
        
        if (car >= 'a' && car <= 'z') {
            printf("'%c' est une lettre minuscule.\n", car);
        } else {
            printf("'%c' est une lettre majuscule.\n", car);
        }
    } else {
        printf("'%c' n'est pas une lettre de l'alphabet.\n", car);
    }

    return 0;
}
