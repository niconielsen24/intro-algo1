#include <stdio.h>
#include <stdbool.h>
#define N 5

typedef char clave_t;
typedef int valor_t;

typedef struct {
    clave_t clave;
    valor_t valor;
} asoc;

bool asoc_existe (asoc a[], int tam,clave_t c){
    bool booleano = false;
    int i = 0;

    while (i<tam){
        if (c==a[i].clave){
            booleano = true;
        }
        i++;
    }
    return booleano;
}

int main (){
    int i = 0;
    asoc a[N];
    bool booleano = false;
    char c;

    
     while (i<N){
    //     printf("Porfavor ingrese la clave de la asoc. %i ->>>",i);
    //     scanf("%c",&a[i].clave);
    //     printf("Porfavor ingrese el valor de la asoc. %i ->>>",i);
    //     scanf("%i",&a[i].valor);
        scanf("%c",&a[i].clave);
        scanf("%i",&a[i].valor);
        printf("val ingr %c %i\n",a[i].clave,a[i].valor);
        i++;
    }
    //printf("\nIngrese la clave que desea buscar :");
    //scanf("%c",&c);

    //booleano = asoc_existe(a,N,c);

    //printf("El resultado es :%i",booleano);

    return 0;
}