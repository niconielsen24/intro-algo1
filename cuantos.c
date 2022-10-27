#include <stdio.h>
#define N 5

typedef struct {
  int menores;
  int iguales;
  int mayores;  
} comp_t;

comp_t cuantos (int a[], int tam, int elem){
    comp_t comp;
    comp.menores = 0;
    comp.iguales = 0;
    comp.mayores = 0;
    int i = 0;

    while (i<tam){
        if (a[i]<elem){
            comp.menores++;
        } else if (a[i]>elem) {
            comp.mayores++;
        } else if (a[i]==elem){
            comp.iguales++;
        }
        i++;
    }
    return comp;
}

int main (){
    int a[N];
    int i = 0;
    int entero = 0;
    comp_t comp; 

    while (i<N){
        printf("Ingresar el valor del elemento %i ->>>",i);
        scanf("%i",&a[i]);
        i++;
    }

    printf("Ingresar un entero ->>> ");
    scanf("%i",&entero);

    comp = cuantos(a,N,entero);

    printf("\nHay %i elementos menores a %i",comp.menores,entero);
    printf("\nHay %i elementos iguales a %i",comp.iguales,entero);
    printf("\nHay %i elementos mayores a %i",comp.mayores,entero);

    return 0;
}