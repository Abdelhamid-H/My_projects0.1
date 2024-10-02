#include <stdio.h>
#include <string.h>

#define max_livre 555
#define titre_max 555
#define auteur_max 555


  char titre[max_livre][titre_max];
  char auteur[max_livre][auteur_max];
  float prix[max_livre];
  int quantite[max_livre];
  int nbrlivre = 0;
  
 
void ajouterLivre() {
    if (nbrlivre < max_livre) {
        printf("\nEntrez le titre du livre: ");
        scanf(" %[^\n]", titre[nbrlivre]);
        printf("Entrez l'auteur du livre: ");
        scanf(" %[^\n]", auteur[nbrlivre]);
        printf("Entrez le prix du livre: ");
        scanf("%f", &prix[nbrlivre]);
        printf("Entrez la quantite en stock: ");
        scanf("%d", &quantite[nbrlivre]);
        nbrlivre++;
        printf("\nLivre ajouté avec succès.\n");
    } else {
        printf("Le stock est plein.\n");
    }
}


void afficherLivres() {
    if (nbrlivre == 0) {
        printf("\nAucun livre disponible.\n");
        return;
    }
    
     printf("\nLivre(s) disponible(s) :\n\n");
    for (int i = 0; i < nbrlivre; i++) {
        printf("Titre: %s\nAuteur: %s\nPrix: %.2f\nQuantite: %d\n\n\n",
               titre[i], auteur[i], prix[i], quantite[i]);
    }
}

 
void rechercherLivre() {
    char titre_reche[titre_max];
    printf("\nEntrez le titre du livre à rechercher: ");
    scanf(" %[^\n]", titre_reche);
    for (int i = 0; i < nbrlivre; i++) {
        if (strcmp(titre[i], titre_reche) == 0) {
            printf("----------------------------------------------------------------------\n\n");
            printf("Livre trouvé: \n\nTitre: %s\nAuteur: %s\nPrix: %.2f\nQuantite: %d\n\n",
                   titre[i], auteur[i], prix[i], quantite[i]);
            printf("-----------------------------------------------------------------------\n");
            return;
        }
    }
            printf("\nLivre non trouvé.\n");

}
void mettre_jour_quantite() {
    char titre_reche[titre_max];
    printf("\nEntrez le titre du livre à mettre à jour: ");
    scanf(" %[^\n]", titre_reche);
    for (int i = 0; i < nbrlivre; i++) {
        if (strcmp(titre[i], titre_reche) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &quantite[i]);
            printf("Quantité mise à jour avec succès.\n");
            return;
        }
    }
            printf("\nLivre non trouvé.\n");
}


void    suppr_livre(char titre_suppr[])
{
    for (int i = 0; i < nbrlivre; i++) 
    {
        if (strcmp(titre_suppr, titre[i]) == 0)
        {
            strcpy(titre[i], titre[nbrlivre - 1]);
            nbrlivre--;
            
            printf("\nLivre supprime avec succès.\n\n");
           
            return;
        }
    }
    printf("Livre non trouve.\n");
}


int main() {
    
    char titre_reche[titre_max];
    int choix;
    do {
        printf("\n                ____________________________\n\n");
        
        printf("1. Ajouter un livre\n");
        printf("2. Afficher les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. affichie le totale\n");
        printf("7. Quitter\n\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                ajouterLivre();
                break;
                
            case 2:
                afficherLivres();
                break;
                
            case 3:
                rechercherLivre();
                break;
                
            case 4:
                mettre_jour_quantite();
                break;
                
            case 5:
                printf("Entrez le titre du livre à supprimer: ");
                scanf(" %[^\n]", titre_reche);
                suppr_livre(titre_reche);
                break;
                
            case 6:
                printf("\nLe totale des livres est : %d\n\n", nbrlivre);
                break;
                
            case 7:
                printf("\nAu revoir.\n");
                break;
                
            default:
                printf("\nChoix invalide.\n");
        }
    } while (choix != 7);
    
    return 0;
}