#include <stdio.h>


void pedirArreglo(int a[], int n_max){
    int i = 0;
    int e = 0;
    while (i<n_max){
        printf("Ingrese el elemento [%i] del arreglo :", i);
        scanf("%i",&e);
        a[i] = e;
        i++;
    }
    
}

void imprimeArreglo(int a[], int m_max){
    int i = 0;
    printf("Los elementos del arreglo son : ");
    while (i<m_max){
        printf(" %i",a[i]);
        i++;
        
    }
    
}

int main (){

    int N = 0;

    printf("Ingrese el tamano del arreglo ");
    scanf("%i",&N);

    int a[N];

    pedirArreglo(a,N);

    imprimeArreglo(a,N);

    return 0;
}