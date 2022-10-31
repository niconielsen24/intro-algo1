#include <stdio.h>
#include <stdbool.h>
#define N 5

typedef char clave_t;
typedef int valor_t;

typedef struct {
    clave_t clave;
    valor_t valor;
} asoc ;

bool asoc_existe (asoc a[], int tam, clave_t c){
    bool bl = false;
    int i = 0;

    while (i<tam) {
        if (a[i].clave == c) {
            bl = true;
        }
        i++;
    }

    return bl;
}

int main () {
    int i = 0;
    asoc a[N];
    bool bl = false;


    a[0].clave = 'a';
    a[0].valor = 1;
    a[1].clave = 'b';
    a[1].valor = 1;
    a[2].clave = 'c';
    a[2].valor = 1;
    a[3].clave = 'd';
    a[3].valor = 1;
    a[4].clave = 'e';
    a[4].valor = 1;

    // printf("\nIngresar la clave del elemento 0 >>>");
    // scanf("%c",&a[0].clave);
    // printf("\nIngresar el valor del elemento 0 >>>");
    // scanf("%i",&a[0].valor);

    // printf("\nIngresar la clave del elemento 1 >>>");
    // scanf("%c",&a[1].clave);
    // printf("\nIngresar el valor del elemento 1 >>>");
    // scanf("%i",&a[1].valor);

    // printf("\nIngresar la clave del elemento 2 >>>");
    // scanf("%c",&a[2].clave);
    // printf("\nIngresar el valor del elemento 2 >>>");
    // scanf("%i",&a[2].valor);

    // printf("\nIngresar la clave del elemento 3 >>>");
    // scanf("%c",&a[3].clave);
    // printf("\nIngresar el valor del elemento 3 >>>");
    // scanf("%i",&a[3].valor);

    // printf("\nIngresar la clave del elemento 4 >>>");
    // scanf("%c",&a[4].clave);
    // printf("\nIngresar el valor del elemento 4 >>>");
    // scanf("%i",&a[4].valor);

    printf("Ingresar valores del arreglo:");
    while (i<N) {
        printf("\nIngresar la clave del elemento %i >>>",i);
        scanf("%c",&a[i].clave);
        i++;
    }
    i = 0;
    while (i<N){
        printf("\nIngresar el valor del elemento %i >>>",i);
        scanf("%i",&a[i].valor);
        i++;
    }
    


    bl = asoc_existe(a,N,'a');

    printf("%i",bl);


    return 0;
}