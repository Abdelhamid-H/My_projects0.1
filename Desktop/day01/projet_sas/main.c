#include <stdio.h>
#include <string.h>

#define max_reservations 11

typedef struct
{
    char nom[50];
    char prenom[50];
    char telephone[15];
    int age;
    int date;
    char statut[20];
    char ref[10];
    int tri;
} Reservation;

Reservation reservations[max_reservations];
int nbrreserv = 0;

void ajout_reser()
{
    if (nbrreserv >= max_reservations)
    {
        printf("Capacité maximale atteinte.\n");
        return;
    }

    Reservation a;
    printf("Nom: ");
    scanf("%s", a.nom);
    printf("Prénom: ");
    scanf("%s", a.prenom);
    printf("Téléphone: ");
    scanf("%s", a.telephone);
    printf("Âge: ");
    scanf("%d", &a.age);
    printf("date: ");
    scanf("%d", &a.date);
    printf("Statut (validé, reporté, annulé, traité): ");
    scanf("%s", a.statut);
    sprintf(a.ref,"REF%03d\n", nbrreserv + 1);
    printf("Référence: %s", a.ref);
    a.tri = 0;
    reservations[nbrreserv++] = a;
    printf("Réservation ajoutée avec succès!");
}

void affiche_reser()
{
    printf("\nLes réservations disponible: \n");
    for (int i = 0; i < nbrreserv; i++)
    {
        printf("Référence: %sNom: %s\nPrénom: %s\nTéléphone: %s\nÂge: %d\ndate: %d\nStatut: %s\n____________________________________\n",
               reservations[i].ref, reservations[i].nom, reservations[i].prenom,
               reservations[i].telephone, reservations[i].age, reservations[i].date, reservations[i].statut);
    }
}

void modif_reser()
{
    char ref[10];
    printf("Entrez la référence de la réservation à modifier: ");
    scanf("%s", ref);

    for (int i = 0; i < nbrreserv; i++)
    {
        if (strcmp(reservations[i].ref, ref) == 0)
        {
            printf("Nouveau Nom: ");
            scanf("%s", reservations[i].nom);
            printf("Nouveau Prénom: ");
            scanf("%s", reservations[i].prenom);
            printf("Nouveau Téléphone: ");
            scanf("%s", reservations[i].telephone);
            printf("Nouvel Âge: ");
            scanf("%d", &reservations[i].age);
            printf("Nouvel date: ");
            scanf("%d", &reservations[i].date);
            printf("Nouveau Statut (validé, reporté, annulé): ");
            scanf("%s", reservations[i].statut);
            printf("Réservation modifiée avec succès!\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void supp_reser()
{
    char ref[10];
    int i, j;
    printf("Entrez la référence de la réservation à supprimer: ");
    scanf("%s", ref);

    for (i = 0; i < nbrreserv; i++)
    {
        if (strcmp(reservations[i].ref, ref) == 0)
        {
            for (j = i; j < nbrreserv - 1; j++)
            {
                reservations[j] = reservations[j + 1];
            }
            nbrreserv--;
            printf("Réservation supprimée avec succès!\n");
            return;
        }
    }
    printf("Réservation non trouvée.\n");
}

void affiche_statistiques()
{
    if (nbrreserv == 0)
    {
        printf("Aucune réservation à afficher.\n");
        return;
    }

    int totalAge = 0;
    int count0_18 = 0, count19_35 = 0, count36_plus = 0;
    int countValid = 0, countAnnule = 0, countReport = 0, counttraite = 0;

    for (int i = 0; i < nbrreserv; i++)
    {
        totalAge += reservations[i].age;

        // Compter par tranche d'âge
        if (reservations[i].age <= 18)
        {
            count0_18++;
        }
        else if (reservations[i].age <= 35)
        {
            count19_35++;
        }
        else
        {
            count36_plus++;
        }

        // Compter par statut
        if (strcmp(reservations[i].statut, "validé") == 0)
        {
            countValid++;
        }
        else if (strcmp(reservations[i].statut, "annulé") == 0)
        {
            countAnnule++;
        }
        else if (strcmp(reservations[i].statut, "reporté") == 0)
        {
            countReport++;
        }
        else if (strcmp(reservations[i].statut, "traité") == 0)
        {
            counttraite++;
       }
}

    // Calculer l'âge moyen
    int ageMoyen = totalAge / nbrreserv;

    // Affichage des statistiques
    printf("\n=== Statistiques ===\n");
    printf("Âge moyen des patients: %d ans\n", ageMoyen);
    printf("Nombre de patients par tranche d'âge:\n");
    printf("0-18 ans: %d\n", count0_18);
    printf("19-35 ans: %d\n", count19_35);
    printf("36 ans et plus: %d\n", count36_plus);
    printf("Nombre total de réservations par statut:\n");
    printf("Validé: %d\n", countValid);
    printf("Annulé: %d\n", countAnnule);
    printf("Reporté: %d\n", countReport);
    printf("traité: %d\n", counttraite);
}

void tri_printer()
{
  int j = 0;
  for (int i = 0; i < nbrreserv; i++)
  {
    j = 0;
    for(j = 0; j < nbrreserv; j ++)
      {
        if (reservations[j].tri == i)
        {
            printf("Référence: %s\nNom: %s\nprénom: %s\nTéléphone: %s\nÂge: %d\nStatut: %s\n",
            reservations[j].ref, reservations[j].nom, reservations[j].prenom,
            reservations[j].telephone, reservations[j].age, reservations[j].statut);
        }
      }
  }
}

void tri_p_nom()
{
  int i, j;
  i = 0;
  j = 0;
  for(i = 0; i < nbrreserv; i ++)
  {
      j = 0;

      for(j = 0; j < nbrreserv ; j ++)
        {
          if (strcmp(reservations[i].nom, reservations[j].nom) > 0)
              reservations[i].tri ++;
        }
  }
   tri_printer();
}

void tri_p_statut()
{
  int i, j;
  i = 0;
  j = 0;
  for(i = 0; i < nbrreserv - 1; i ++)
  {
      for(j = 0; j < nbrreserv - 1; j ++)
        {
          if (strcmp(reservations[i].statut, reservations[i + 1].statut) > 0)
              reservations[i].tri ++;
        }
  }
  tri_printer();
}

int main()
{
        int choix;
        int i;
        do
        {
            printf("\n              ______________MENU_____________\n\n");

            printf("1. Ajouter une reservation.\n");
            printf("2. Afficher les reservation disponibles.\n");
            printf("3. Supprimer une reservation.\n");
            printf("4. Afficher les statistiques.\n");
            printf("5. Tri par nom.\n");
            printf("6. Tri par statut.\n");
            printf("7. Quitter.\n\n");
            printf("Entrez votre choix: ");
            scanf("%d", &choix);
            switch (choix)
            {
            case 1:
                ajout_reser();
                break;

            case 2:
                affiche_reser();
                break;

            case 3:
                supp_reser();
                break;

            case 4:
                affiche_statistiques();
                break;

            case 5:
                tri_p_nom();
                break;

            case 6:
                tri_p_statut();
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
