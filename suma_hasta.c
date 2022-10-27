#include <stdio.h>

int suma_hasta (int N){
    int sum = 0;
    while (N>0){
        sum = sum + N;
        N = N - 1;
    }
    return sum;
}

int main (){

    int x = 0;
    int suma = 0;

    scanf("%i",&x);

    while (x<=0){
        printf("Debe ser un numero positivo\nPorfavor ingrese nuevamente");
        scanf("%i",&x);
    }

    suma = suma_hasta(x);

    printf("suma de todos los naturales hasta %i = %i",x,suma);

    return 0;
}