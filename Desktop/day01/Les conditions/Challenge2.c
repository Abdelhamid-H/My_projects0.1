#include <stdio.h>

int main() {
   char c;
printf("Veuillez entrer un caractère : ");
scanf("%c" ,&c);
switch(c){
    case'a':
    case'u':
    case'e':
    case'i':
    case'y':
    case'o':
    case'A':
    case'U':
    case'E':
    case'I':
    case'Y':
    case'O':
printf("Le caractère est voyelle");
break;
default:
printf("Le caractère est non voyelle");
}

    return 0;
}

