 - Challenge 1 :


#include <stdio.h>

int main() {
    char nom[20] ;
    char prenom[20] ;
    char sexe[20] ;
    int age ;
    char email[40] ;
    
    printf ("Saisire vos informations personnelles\n Nom :\n Prenom :\n Sexe :\n Age :\n Email :");
      scanf("%s\n : %s\n  %s\n  %d\n  %s\n" ,&nom ,&prenom ,&sexe ,&age ,&email);
    
    return 0;
}
