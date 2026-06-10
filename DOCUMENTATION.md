# Bistro-matic

 Bistro-matic est un projet de développement logiciel consistant à concevoir une calculatrice de base capable de gérer des expressions mathématiques complexes.

---

## Objectifs du Projet

 Le but principal de ce programme est d'évaluer et d'afficher le résultat d'une expression mathématique donnée.

*  **Entiers infinis** : L'expression mathématique est composée d'entiers d'une taille potentiellement infinie.
*  **Bases multiples** : Les nombres peuvent être exprimés dans n'importe quelle base numérique prédéfinie.
*  **Opérateurs supportés** : Le programme gère les opérateurs standards `+`, `-`, `*`, `/`, `%` ainsi que les parenthèses.
*  **Priorités d'opérations** : Les priorités mathématiques classiques et l'imbrication des parenthèses sont rigoureusement respectées.
*  **Exclusion des nombres à virgule** : Le programme ne traite pas les nombres flottants.

>  Pour plus d'informations sur le comportement attendu d'un tel outil, vous pouvez consulter le manuel de la commande standard `bc` via la commande `man bc`.

---

## Contraintes Techniques et Règles de Code

Ce projet impose des restrictions strictes de développement afin de manipuler les flux système et l'allocation dynamique proprement :

*  **Langage** : Le projet doit être intégralement développé en langage C.
*  **Fonctions autorisées** : L'utilisation de la libC est interdite, à l'exception rigoureuse des fonctions système `read`, `write`, `malloc`, `free` et `exit`.
* **Gestion des erreurs** :
    *  Toute erreur de syntaxe doit déclencher l'affichage de la chaîne définie par la macro `SYNTAX_ERROR_MSG` sur la sortie d'erreur.
    *  Tout autre type d'erreur doit déclencher l'affichage de la chaîne définie par la macro `ERROR_MSG` sur la sortie d'erreur.
    *  En cas d'erreur, le programme doit s'arrêter et retourner le code d'erreur 84.
    *  Si aucune erreur ne survient durant l'évaluation, le programme se termine avec le code 0.

### Fichiers fournis
 Les fichiers `main.c` et `bistromatic.h` sont fournis au début du projet.
---

## Compilation

 La gestion de la compilation doit être entièrement automatisée à l'aide d'un fichier `Makefile`.

Le `Makefile` doit obligatoirement inclure les règles de base suivantes :
*  `clean` : Supprime les fichiers intermédiaires et inutiles.
*  `fclean` : Supprime les fichiers objets ainsi que le binaire final.
*  `re` : Exécute une recompilation complète en chaînant les règles `fclean`,  compilation et `clean`.

 Le nom du binaire final généré à la racine du projet est `calc`.

---

## Utilisation

 L'exécution du binaire s'effectue en lui passant l'expression mathématique via l'entrée standard (stdin) et en fournissant trois arguments spécifiques en ligne de commande.

```bash
./calc base 'operators' size_read

./calc 0123456789 ‘()+-*/%’ 3