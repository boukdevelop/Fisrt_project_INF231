# Fisrt_project_INF231
# TP INF 231_EC2 — STRUCTURE DE DONNEES II

Ce dossier contient plusieurs programmes en C pour manipuler des tableaux et des matrices. Voici une explication détaillée de chaque fichier, comment comprendre leur fonctionnement et comment les compiler.

## 1. matrice.c
**Fonction :**
Additionne et multiplie deux matrices de même taille. L'utilisateur saisit les dimensions et les valeurs des deux matrices, puis le programme affiche la somme et le produit élément par élément.
**À comprendre :**
— Utilisation de tableaux dynamiques (malloc).
— Boucles imbriquées pour parcourir les matrices.
— Affichage formaté des résultats.
**Compiler :**
```sh
gcc matrice.c -o matrice.exe
./matrice.exe
```

## 2. median.c
**Fonction :**
Calcule la médiane d'un tableau, affiche l'inverse du tableau et indique s'il est trié (croissant, décroissant ou non trié).
**À comprendre :**
— Saisie dynamique d'un tableau.
— Calcul de la médiane selon la parité du nombre d'éléments.
— Vérification du tri avec des drapeaux.
**Compiler :**
```sh
gcc median.c -o median.exe
./median.exe
```

## 3. tableau.c
**Fonction :**
Recherche séquentielle d'une valeur dans un tableau. Affiche la position si trouvée, sinon indique que la valeur n'existe pas.
**À comprendre :**
— Parcours d'un tableau avec une boucle.
— Utilisation d'un drapeau pour indiquer la présence.
**Compiler :**
```sh
gcc tableau.c -o tableau.exe
./tableau.exe
```

## 4. produit.c
**Fonction :**
Calcule le produit de deux valeurs positives saisies par l'utilisateur.
**À comprendre :**
— Vérification des entrées (a > 0 et b > 0).
— Affichage du résultat ou d'un message d'erreur.
**Compiler :**
```sh
gcc produit.c -o produit.exe
./produit.exe
```

## 5. pdtVect.c
**Fonction :**
Calcule le produit vectoriel de deux vecteurs de dimension 3.
**À comprendre :**
— Saisie des composantes des vecteurs.
— Application de la formule du produit vectoriel.
— Affichage du résultat sous forme de vecteur.
**Compiler :**
```sh
gcc pdtVect.c -o pdtVect.exe
./pdtVect.exe
```

## 6. pdtvectmat.c
**Fonction :**
Calcule le produit d'un vecteur ligne par une matrice (vecteur × matrice).
**À comprendre :**
— Saisie du vecteur et de la matrice.
— Calcul du produit selon la règle : chaque élément du résultat est la somme des produits des éléments du vecteur et de la colonne correspondante de la matrice.
**Compiler :**
```sh
gcc pdtvectmat.c -o pdtvectmat.exe
./pdtvectmat.exe
```

---

### Conseils pour comprendre les codes
- Monsieur lisez les commentaires dans chaque fichier pour comprendre le rôle de chaque partie.

### Compilation sous Windows
Utilisez l’invite de commande ou PowerShell, placez-vous dans le dossier du projet, puis utilisez la commande `gcc` comme indiqué ci-dessus. Si vous n’avez pas GCC, installez MinGW ou utilisez un compilateur en ligne.
