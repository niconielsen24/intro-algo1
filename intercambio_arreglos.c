#include <stdio.h>
#include <assert.h>
#define N 5

void intercambio_arreglos (int a[], int tam, int i, int j){
    int tempi = 0;
    int tempj = 0;
    assert(i<tam && j<tam);

    tempi = a[i];
    tempj = a[j];
    a[i] = tempj;
    a[j] = tempi;
}

int main (){
    int ar[N];
    int a = 0, b = 0;
    int i = 0;

    printf("Por favor ingrese los indices que desea cambiar\n");
    scanf("%i",&a);
    scanf("%i",&b);
    assert(a<N && b<N);

    while (i<N){
        printf("Ingrese el elemento Num : %i >>> ",i);
        scanf("%i",&ar[i]);
        i++;
    }


    printf("\nEl arreglo es : ");
    i = 0;
    while (i<N){
        printf(" %i",ar[i]);
        i++;
    }

    intercambio_arreglos(ar,N,a,b);

    printf("\nEl arreglo ahora es :");
    i = 0;
    while (i<N){
        printf(" %i",ar[i]);
        i++;
    }

    return 0;
}