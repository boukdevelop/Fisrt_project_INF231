/*Ce programme prend demande deux mattrice et effectue la somme et 
le produit de ces deux matrices */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,n;
    printf("\n ===== BIENVENUE =====\n");
    printf("Ce programme fait la somme et le produit de deux matrices.\n");
    printf("Entrer le nombre de colonne : ");
    scanf("%d",&m);
    printf("Entrer le nombre de ligne : ");
    scanf("%d",&n);
    float **matA = malloc(m * sizeof(float *));
    float **matB = malloc(m * sizeof(float *));
    float **matC = malloc(m * sizeof(float *));
    float **matp= malloc(m * sizeof(float *));
    for(int i=0; i<m; i++){
        matA[i] = malloc(n * sizeof(float));
        matB[i] = malloc(n * sizeof(float));
        matC[i] = malloc(n * sizeof(float));
        matp[i] = malloc(n * sizeof(float));
    }

    printf("Entrer les valeurs de la matrice A : \n");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("\nEnter la valeur de (ligne,colonne) -> (%d,%d) : ", l + 1, c + 1);
            scanf("%f", &matA[l][c]);
        }
    }

    printf("Entrer les valeurs de la matrice B : \n");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("\nEnter la valeur de (ligne,colonne) -> (%d,%d) : ", l + 1, c + 1);
            scanf("%f", &matB[l][c]);
        }
    }

    printf("\nLa matrice A : ");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("(%.2f)", matA[l][c]);
        }
    }
    printf("\nLa matrice B : ");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("(%.2f)", matB[l][c]);
        }
    }

    printf("\n\nSomme de matrice (A + B) : ");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            matC[l][c] = matA[l][c] + matB[l][c];
            printf("\nA[  %.2f  ] + B[  %.2f  ] = C[  %.2f  ]", matA[l][c], matB[l][c], matC[l][c]);
        }
    }

    printf("\n\nProduit de matrice (A * B) : ");
    for (int l = 0; l < m; l++)
    {
        for (int c = 0; c < n; c++)
        {
            matp[l][c] = matA[l][c] * matB[l][c];
            printf("\nA[  %.2f  ] + B[  %.2f  ] = C[  %.2f  ]", matA[l][c], matB[l][c], matp[l][c]);
        }
    }

    free(matA);
    free(matB);
    free(matC);
    free(matp);
    return 0;
}