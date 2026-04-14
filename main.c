#include <stdio.h>
#include <stdlib.h>
#include "polyglot.h"

int main() {
    User users[MAX_USERS];
    int userCount = loadUsers(users);
    int choice;
    int currentUserIndex = -1;

    printf("Bienvenue sur PolyGlot !\n");

    while (1) {
        printf("\n1. Connexion\n2. Inscription\n3. Quitter\nChoix : ");
        scanf("%d", &choice);

        if (choice == 1) {
            char u[50], p[50];
            printf("Pseudo : "); scanf("%s", u);
            printf("Pass : "); scanf("%s", p);
            currentUserIndex = login(users, userCount, u, p);

            if (currentUserIndex != -1) {
                printf("\nBonjour %s ! Ton score actuel : %d XP\n", users[currentUserIndex].username, users[currentUserIndex].score);
                
                // Ici tu peux appeler tes fonctions de jeux
                printf("Tu gagnes 10 points pour ta connexion quotidienne !\n");
                users[currentUserIndex].score += 10;
                
                showLeaderboard(users, userCount);
                saveAllUsers(users, userCount); // Sauvegarde après modification du score
            } else {
                printf("Identifiants incorrects.\n");
            }
        } 
        else if (choice == 2) {
            registerUser(users, &userCount);
        } 
        else {
            break;
        }
    }

    return 0;
}
