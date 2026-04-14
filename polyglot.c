#include "polyglot.h"

// Charge les données depuis le CSV au démarrage
int loadUsers(User users[]) {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) return 0;

    int i = 0;
    while (i < MAX_USERS && fscanf(file, " %49[^,],%49[^,],%d\n", 
           users[i].username, users[i].password, &users[i].score) == 3) {
        i++;
    }
    fclose(file);
    return i;
}

// Sauvegarde l'intégralité du tableau dans le CSV (Écrase et remplace)
void saveAllUsers(User users[], int count) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) return;

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%d\n", users[i].username, users[i].password, users[i].score);
    }
    fclose(file);
}

// Vérifie les identifiants
int login(User users[], int count, char* user, char* pass) {
    for (int i = 0; i < count; i++) {
        if (strcmp(users[i].username, user) == 0 && strcmp(users[i].password, pass) == 0) {
            return i; // Retourne l'indice de l'utilisateur connecté
        }
    }
    return -1;
}

// Ajoute un nouvel utilisateur
void registerUser(User users[], int *count) {
    if (*count >= MAX_USERS) return;
    
    printf("\n--- Inscription ---\nNom d'utilisateur : ");
    scanf("%s", users[*count].username);
    printf("Mot de passe : ");
    scanf("%s", users[*count].password);
    users[*count].score = 0;
    (*count)++;
    
    saveAllUsers(users, *count);
    printf("Compte créé avec succès !\n");
}

// Affiche le classement (Tri à bulles simple par score)
void showLeaderboard(User users[], int count) {
    User temp;
    // On travaille sur une copie pour ne pas désordonner le fichier CSV
    User sorted[MAX_USERS];
    memcpy(sorted, users, sizeof(User) * count);

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (sorted[j].score < sorted[j+1].score) {
                temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }

    printf("\n--- LEADERBOARD ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %d XP\n", i+1, sorted[i].username, sorted[i].score);
    }
}
