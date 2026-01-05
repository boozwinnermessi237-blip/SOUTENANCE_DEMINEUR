# SOUTENANCE_DEMINEUR
Projet Démineur - SDL3 / C++
👤 Informations Étudiant
Nom : MESSI MESSI BOOZ WINNER

Matricule : 25P905

Filière : ART NUMERIQUE INGENIEUR


Projet : N°7 - Démineur 
+1

📅 État d'avancement : Semaine 1
Conformément au processus de développement établi , les objectifs de la Semaine 1 (Structure du projet et fenêtre SDL) ont été pleinement atteints.
+1

✅ Travaux abattus :

Initialisation de l'environnement : Configuration du standard C++17 et liaison avec la bibliothèque SDL3.

Architecture logicielle modulaire :

Implémentation de la classe Game : Gestion de la boucle principale (Run), des événements et du cycle de vie des ressources.
+2

Création de la classe Renderer : Centralisation de la logique d'affichage pour séparer le rendu de la logique métier.
+2

Définition de la classe Grid : Préparation de la structure de données 2D pour accueillir les cellules.
+1

Moteur de rendu graphique :

Création d'une fenêtre système via SDL3.

Mise en place d'un système de dessin dynamique s'adaptant à la taille de la fenêtre.

Automatisation du Build :

Développement du script build.py en Python pour une compilation simplifiée et portable.

📝 Présentation Générale
Le projet vise à concevoir un Démineur interactif robuste. La problématique centrale est de gérer efficacement une grille dynamique, la propagation des cases vides et une interface utilisateur claire.
+2

Objectifs Fonctionnels principaux :
Génération de mines et calcul de proximité.

Détection de victoire et de défaite.

Interface utilisateur intégrant un chronomètre via ImGui.
+2

📂 Architecture du Code
Le projet suit une structure modulaire stricte:


Game : Cœur de l'application et gestion des états de jeu.
+1


Grid : Gestion de la logique du plateau (mines, nombres, révélation).
+1


Cell : Structure représentant l'état atomique d'une case.
+1


Renderer : Couche d'abstraction pour l'affichage SDL3.
+1


UI : Interface graphique interactive (prévue pour la Semaine 3).
+1

🛠 Technologies utilisées

Langage : C++17.


Bibliothèque graphique : SDL3.


Interface Utilisateur : ImGui.


Système de Build : Script Python personnalisé (build.py).

🚀 Installation et Compilation
Prérequis : Assurez-vous d'avoir installé SDL3 sur votre système.

Compiler le projet :

Bash

python build.py
Lancer le jeu :

Bash

./build/Demineur_25P905