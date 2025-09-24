// Produit vectoriel de deux vecteurs en dimension 3
#include <stdio.h>

void produit_vectoriel(int a[3], int b[3], int resultat[3]) {
    resultat[0] = a[1]*b[2] - a[2]*b[1];
    resultat[1] = a[2]*b[0] - a[0]*b[2];
    resultat[2] = a[0]*b[1] - a[1]*b[0];
}

int main() {
    int a[3], b[3], resultat[3];
    printf("Entrez les 3 composantes du premier vecteur : ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    printf("Entrez les 3 composantes du second vecteur : ");
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    produit_vectoriel(a, b, resultat);

    printf("Produit vectoriel : (%d, %d, %d)\n", resultat[0], resultat[1], resultat[2]);
    return 0;
}
/*Ce programme demande à l'utilisateur deux valeurs a et b et calcule le produit de ces valeurs 
si et seulemnet si a,b > 0 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,p;
    printf("\n====== BIENVENUE ======\n");
    printf("\nEntrez deux valeurs : ");
    scanf("%d %d",&a,&b);
    
    if(a>0 && b>0){
        p = a*b;
        printf("\n%.2f * %.2f = %.2f",a,b,p);
    }else{
        printf("\nEntrez deux valeurs positives !");
    }

    return 0;
}