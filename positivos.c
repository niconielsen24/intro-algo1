#include <stdio.h>
#include <stdbool.h>
#define N 5


bool existe_positivo(int a[], int tam){
    bool bl = false;
    int i = 0;
    bool bltemp = false;

    while (i<tam){
        if (a[i]>=0){
            bltemp = true;
        } else {
            bltemp = false;
        }

        bl = bl || bltemp;

        i++;
    }
    return bl;
}

bool todos_positivos(int a[], int tam){
    bool bl = true;
    int i = 0;
    bool bltemp = true;

    while (i<tam){
        if (a[i]>=0){
            bltemp = true;
        } else {
            bltemp = false;
        }
        
        bl = bl && bltemp;

        i++;
    }
    return bl;
}

int main (){
    int i = 0;
    int a[N];
    int elecc = 0;

    printf("Porfavor ingrese numeros enteros\n");
    
    while (i<N){
        printf("ingrese un entero para el elemento %i : ",i);
        scanf("%i",&a[i]);
        i++;
    }

    printf(" Elija:\n 1-> todos_positivos\n 2-> existe_positivo\n --->>> ");
    scanf("%i",&elecc);
    
    while (elecc != 1 && elecc != 2){
        printf("Las opciones son solo 1 o 2\n\n Elija:\n 1-> todos_positivos\n 2-> existe_positivo\n --->>> ");
        scanf("%i",&elecc);
    }
    
    if (elecc == 1){

        if (todos_positivos(a,N)==1){
            printf("True");
        } else {
            printf("False");
        }
    } else if (elecc == 2) {

        if (existe_positivo(a,N)==1){
            printf("True");
        } else {
            printf("False");
        }
    }
    
    return 0;   
}