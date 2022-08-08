#include <stdio.h>
#include <stdlib.h>
//fonction pour trouver le minimale dans le tableau:
float min(float t[],int n){
    int i= 0;
    float min = t[0];
    for (i = 1 ; i < n ; i++){
    if( min > t[i]){
        min = t[i];
        }}
    return min;
}
//fonction pour trouver le maximale dans le tableau:
float max(float t[],int n){
    int i= 0;
    float max = t[0];
    for (i = 1 ; i < n ; i++){
    if( max < t[i]){
        max = t[i];
        }}
    return max;
}
int nbeleve(float t[],int n){
int i, nb = 0;
for (i = 0 ; i < n ; i++){
    if( t[i] >= 10 ){
        nb++;
        }}
return nb;
}

int main()
{
    float moycl1[13], moycl2[15],t3[28];
    int i, p, j, n= 13, m= 15, l= 28;

    //remplir les tableaux de moyennes:
    printf("Entrez les moyennes de la classe 1 : \n");
    for (i= 0 ; i < n ; i++){
        printf("Moyenne N %d:", i+1);
        scanf("%f", &moycl1[i]);
        if (moycl1[i] < -1 || moycl1[i] > 21){
            printf("Entrez une moyenne entre 0 et 20 :\n");
            printf("Moyenne N %d:", i+1);
            scanf("%f", &moycl1[i]);
}
    }
      printf("Entrez les moyennes de la classe 2 : \n");
    for (i= 0 ; i < m ; i++){
        printf("Moyenne N %d:", i+1);
        scanf("%f", &moycl2[i]);
       if (moycl2[i] <  -1 || moycl2[i] > 21){
            printf("Entrez une moyenne entre 0 et 20 :\n");
            printf("Moyenne N %d:", i+1);
            scanf("%f", &moycl2[i]);}
    }
     // Afficher le minimale de classe 1:
    printf("**************Classe 1:*************** \n");
    printf("Moyenne minimale est de la classe 1: %2.f \n", min(moycl1,n));
    // Afficher le maximale :
    printf("Moyenne maximale est de la classe 1: %2.f \n", max(moycl1,n));
    //Afficher le nombre des eleves ayant la moyenne superieur ou egal 10:
    printf("Le nombre des eleves ayant la moyenne superieur ou egal a 10 :%d \n", nbeleve(moycl1,n));

    // Afficher le minimale de classe 2:
     printf("**************Classe 2 :*************** \n");
    printf("Moyenne minimale est de la classe 2: %2.f \n", min(moycl2,m));
    // Afficher le maximale de classe 1:
    printf("Moyenne maximale est de la classe 2: %2.f \n", max(moycl2,m));
    //Afficher le nombre des eleves ayant la moyenne superieur ou egal 10:
    printf("Le nombre des eleves ayant la moyenne superieur ou egal a 10 : %d \n", nbeleve(moycl2,m));

    for (i = 0 ; i < n ; i++){
        t3[i] = moycl1[i];
            }
    for (i = 0 ; i < m ; i++){
        t3[n+i] = moycl2[i];
    }
    printf("Fusion de 2 classes:\n");
    for (i = 0 ; i < l ;i++){
        printf("%2.f \t", t3[i]);
    }
    printf("\n");
     for (i = 0 ; i < l-1 ; i++){
        for (j = i+1 ; j < l  ; j++){
            if ( t3[i] > t3[j] ){
                p = t3[i];
                t3[i] = t3[j];
                t3[j] = p;
            }
        }
    }
    printf("Tri croissant des moyennes:\n");
    for (i = 0 ; i < l ; i++){
        printf("%2.f \t", t3[i]);
    }
    return 0;
}
