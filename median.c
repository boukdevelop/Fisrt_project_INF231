/*Ce programe détemine la médiane d'un tableau; affiche l'inverse de ce même tableau et dit s'il ert trié*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,croissant = 1,decroissant = 1;
    printf("\n==== BIENVENUE ====\n");
    printf("\nCombien de valeur voulez-vous ? ");
    scanf("%d",&m);
    float *tab = malloc(m * sizeof(float)),c = 0;

    for(int i=0; i<m; i++){
        printf("Valeur %d : ",i+1);
        scanf("%f",&tab[i]);
    }
    printf("\nListe de nombre : \n");
    for(int i=0; i<m; i++){
        printf("[%.2f] ",tab[i]); 
    }
    printf("\n\nAffichage inverse : \n");
    for(int i=0; i<m; i++){
        printf("[%.2f] ",tab[m-i-1]);
    }

    if(m%2 != 0){
        printf("\n\nla mediane de ce tableau est [%.2f]",tab[((m-1)/2)]);
    }else if(m%2 == 0){
        c = (tab[(m/2)-1] + tab[((m-1)/2)+1] ) / 2;
        printf("\n\nLa mediane de ce tableau est %.2f",c);
    }

    for (int i = 0; i < m - 1; i++) {
        if (tab[i] < tab[i + 1])
            decroissant = 0;
        if (tab[i] > tab[i + 1])
            croissant = 0;
    }

    if (croissant && decroissant)
        printf("\n\nTous les éléments sont égaux.\n");
    else if (croissant)
        printf("\n\nLe tableau est trié en ordre croissant.\n");
    else if (decroissant)
        printf("\n\nLe tableau est trié en ordre décroissant.\n");
    else
        printf("\n\nLe tableau n'est pas trié.\n");

    free(tab);
    return 0;
}