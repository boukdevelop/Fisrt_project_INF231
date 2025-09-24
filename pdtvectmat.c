// Produit d'un vecteur par une matrice (vecteur ligne × matrice)
#include <stdio.h>

int main() {
	int n, m;
	printf("Entrez la taille du vecteur (n) : ");
	scanf("%d", &n);
	printf("Entrez le nombre de colonnes de la matrice (m) : ");
	scanf("%d", &m);

	int vecteur[n];
	int matrice[n][m];
	int resultat[m];

	printf("Entrez les %d éléments du vecteur : ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &vecteur[i]);
	}

	printf("Entrez les éléments de la matrice (%d lignes, %d colonnes) :\n", n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            printf("Élément (%d,%d) : ", i+1, j+1);
			scanf("%d",&matrice[i][j]);
		}
	}

	// Calcul du produit vecteur × matrice
	for (int j = 0; j < m; j++) {
		resultat[j] = 0;
		for (int i = 0; i < n; i++) {
			resultat[j] += vecteur[i] * matrice[i][j];
		}
	}

	printf("Résultat du produit (vecteur ligne × matrice) : ");
	for (int j = 0; j < m; j++) {
		printf("%d ", resultat[j]);
	}
	printf("\n");

	return 0;
}
