#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, found;
    printf("\n ==== BIENVENUE ====\n\n");
    printf("Ce programme fait la recherche séquentielle d'un élément d'un tableau.\n");
    printf("Combiende valeur voulez-vous ? ");
    scanf("%d",&a);
    float *tab = malloc(a * sizeof(float));
    if(tab == NULL){
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }
    printf("Entrer des valeurs dans le tableau.\n");
    for(int i=0; i<a; i++){
        printf("valeur N°%d : ",i+1);
        scanf("%f",&tab[i]);
    }

    float b;
    printf("\nQuelle valeur voulez-vous retrouver ? ");
    scanf("%f",&b);

    for(int i=0; i<a; i++){
        if(b == tab[i]){
            printf("Valeur trouvé à la position %d\n", i+1);
            found = 1;
            return 1;
        }
    }

    if(!found){
        printf("Cette valeur n'existe pas !\n");
    }

    free(tab);
    return 0;

}