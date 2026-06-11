# Bistro-matic

## Calculatrice à précision infinie pour expressions mathématiques complexes

Le projet Bistro-matic est un programme en ligne de commande développé en langage C dans le cadre du cursus Unix & C Lab Seminar (B-CPE-101) à Epitech. Son objectif principal est d'évaluer et d'afficher le résultat d'une expression mathématique donnée, composée d'entiers d'une taille théoriquement infinie (gestion de la précision arbitraire) et pouvant être exprimée dans n'importe quelle base numérique.

---

## Fonctionnalités

* **Gestion des entiers infinis** : Le programme dépasse les limites des types de données primitifs du C (comme `int` ou `long long`) en allouant dynamiquement la mémoire nécessaire pour traiter des nombres d'une taille arbitrairement grande.
* **Bases numériques configurables** : Possibilité d'effectuer des calculs dans n'importe quel système de numération (binaire, octal, décimal, hexadécimal, ou des bases entièrement inventées avec des symboles spécifiques).
* **Opérateurs personnalisables** : Les symboles représentant les parenthèses et les opérateurs arithmétiques peuvent être redéfinis à la volée lors de l'exécution.
* **Opérations prises en charge** : Prise en compte de l'addition, la soustraction, la multiplication, la division entière et le modulo. Les nombres à virgule flottante ne sont pas gérés.
* **Priorités opératoires** : Évaluation rigoureuse des règles de priorité mathématique (priorité de la multiplication et de la division sur l'addition et la soustraction) ainsi que de l'imbrication des parenthèses.

---

## Contraintes Techniques

Ce projet impose des restrictions strictes afin de forcer la réimplémentation complète des algorithmes de calcul et de gestion de chaînes :

* **Fonctions de la LibC autorisées** : Seules les fonctions système `read`, `write`, `malloc`, `free` et `exit` sont permises.
* **Fonctions interdites** : Tout le reste de la bibliothèque standard est strictement interdit (pas de `printf`, de `strlen`, de fonctions de la bibliothèque `math.h`, etc.).
* **Structure du dépôt** : L'intégralité des fichiers sources nécessaires doit être incluse dans le rendu, à l'exclusion de tout fichier inutile (fichiers objets `.o`, fichiers temporaires, binaires précompilés). Les éventuelles fonctionnalités bonus doivent être isolées dans un répertoire nommé `bonus`.

---

## Compilation

La compilation du projet s'effectue via un fichier `Makefile` qui doit obligatoirement inclure les règles standard suivantes :

```bash
make          # Compile les sources et génère le binaire nommé calc
make clean    # Supprime les fichiers objets et les fichiers temporaires
make fclean   # Supprime les fichiers objets ainsi que le binaire final calc
make re       # Force une recompilation complète (fclean suivi de make)