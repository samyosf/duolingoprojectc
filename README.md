# 🌍 PolyGlot - Language Learning System (C Version)

**PolyGlot** est une application console d'apprentissage de langues inspirée de concepts comme Duolingo. Ce projet a été conçu pour démontrer la maîtrise de la programmation structurée en langage C, la gestion de la persistance des données et l'architecture modulaire.

---

## 🎓 Contexte Universitaire
Ce projet a été réalisé dans le cadre de ma formation en **BUT Informatique (Bachelor Universitaire de Technologie)** à l'IUT de Saint-Dié-des-Vosges. 

L'objectif principal était de mettre en pratique les notions de :
* **Programmation Modulaire** (séparation des fichiers `.h` et `.c`).
* **Gestion des entrées/sorties (I/O)** : Persistance des données via fichiers CSV.
* **Structures de données** : Manipulation de structures complexes et tableaux dynamiques.
* **Algorithmique** : Implémentation de systèmes de tri pour le classement des utilisateurs.

---

## 🚀 Fonctionnalités Clés

### 🔐 Système d'Authentification
* **Inscription** : Création de nouveaux profils utilisateurs.
* **Connexion sécurisée** : Vérification des identifiants stockés.
* **Persistance** : Contrairement à un stockage "en brut", les comptes restent accessibles même après la fermeture du programme grâce au fichier `users.csv`.

### 📊 Système de Progression
* **XP & Scores** : Gain de points d'expérience lors des sessions de jeu.
* **Leaderboard en temps réel** : Un classement mondial trié par score pour encourager la compétition.

### 📁 Gestion de Données (CSV)
Le projet utilise le format **CSV (Comma-Separated Values)** pour stocker les informations :
* Format : `Pseudo,MotDePasse,Score`
* Lecture optimisée via `fscanf` avec délimiteurs personnalisés.

---

## 🛠️ Installation et Compilation

### Prérequis
* Un compilateur C (GCC recommandé).
* L'utilitaire `Make` (optionnel).

### Compilation
Utilisez le **Makefile** inclus pour compiler le projet en une commande :
```bash
make
