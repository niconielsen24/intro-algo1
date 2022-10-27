#include <stdio.h>

int sumatoria (int a[], int tam){
    int sum = 0, i = 0;

    while (i<tam){
        sum = sum + a[i];
        i++;
    }
    
    return sum;
}

int main (){
    int N = 0, i = 0;
    printf("Ingresar largo del arreglo ");
    scanf("%i",&N);
    int a[N];

    while (i<N){
        printf("Ingresar el elemento nro.: %i -> ",i+1);
        scanf("%i",&a[i]);
        i++;
    }
    
    printf("sumatoria %i",sumatoria(a,N));
    
    return 0;
}