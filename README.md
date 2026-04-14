# PolyGlot - Apprentissage de Langues en C

Une application d'apprentissage de langues inspirée de Duolingo, développée intégralement en C. Ce projet met l'accent sur la programmation modulaire et la gestion de données structurées.

## 🚀 Fonctionnalités
- **Système d'Authentification** : Création de compte et connexion sécurisée des utilisateurs.
- **Apprentissage Interactif** : Exercices de traduction et phrases à trous.
- **Système de Progression** : Gain de points d'expérience et suivi du score.
- **Classement (Leaderboard)** : Visualisation des meilleurs utilisateurs en temps réel.
- **Gestion des Données** : Sauvegarde et lecture des profils via des fichiers.

## 🛠️ Stack Technique
- **Langage** : C (Norme C11)
- **Architecture** : Programmation modulaire (.h / .c)
- **Stockage** : Fichiers plats (CSV/TXT)

## 📂 Structure du Projet
- `main.c` : Point d'entrée de l'application.
- `auth.c/h` : Gestion des sessions et utilisateurs.
- `game.c/h` : Logique des exercices et calcul des points.
- `leaderboard.c/h` : Gestion et tri du classement.
