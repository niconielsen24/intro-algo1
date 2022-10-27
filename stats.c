#include <stdio.h>
#include <limits.h>
#define N 5

typedef struct {
    float max;
    float min;
    float prom;
} datos_t ;

datos_t stats(float a[],int tam){
    datos_t data;
    int i = 0;
    data.min = __FLT_MAX__;
    data.max = __FLT_MIN__;
    data.prom = 0;


    while (i<tam){
        if (a[i]<data.min){
            data.min = a[i];
        } else if (a[i]>data.max){
            data.max = a[i];
        }
        data.prom += a[i];
        i++;
    }
    data.prom = data.prom/(i);

    return data;
}

int main(){
    int i = 0;
    float a[N];
    datos_t stat;

    while (i<N){
        printf("Ingresar el valor del elemento %i ->>>",i);
        scanf("%f",&a[i]);
        i++;
    }

    stat = stats(a,N);

    printf("\nLos datos son:\nMaximo del arregglo :  %4.2f\nMinimo del arreglo :   %4.2f\nPromedio del arreglo : %4.2f",stat.max,stat.min,stat.prom);

    return 0;
}
