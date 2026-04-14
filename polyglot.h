#ifndef POLYGLOT_H
#define POLYGLOT_H

#include <stdio.h>
#include <string.h>

#define MAX_USERS 100
#define FILENAME "users.csv"

typedef struct {
    char username[50];
    char password[50];
    int score;
} User;

// Prototypes
int loadUsers(User users[]);
void saveAllUsers(User users[], int count);
int login(User users[], int count, char* user, char* pass);
void registerUser(User users[], int *count);
void showLeaderboard(User users[], int count);
void playGame(User *u);

#endif
