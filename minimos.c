#include <stdio.h>
#include <limits.h>
#define N 5

int minimo_pares(int a[], int tam){
    int min = INT_MAX;
    int i = 0;
    
    while (i<tam){
        
        if (a[i]<min && a[i]%2==0){
            min = a[i];
        }
        
        i++;
    }
    return min;
}

int minimo_impares(int a[], int tam){
    int min = INT_MAX;
    int i = 0;

    while (i<tam){
        
        if (a[i]<min && a[i]%2==1){
            min = a[i];
        }
        
        i++;
    }
    return min;
}

int main (){
    int a[N];
    int i = 0;
    int elecc = 0;

    while (i<N){
        printf("Ingrese el elemento Num : %i >>> ",i);
        scanf("%i",&a[i]);
        i++;
    }

    printf("Porfavor elija: \n1)Min-Par\n2)Min-Impar\n->>>> ");
    scanf("%i",&elecc);

    while (elecc != 1 && elecc != 2){
        printf("Debe ser 1 o 2\n->>>> ");
        scanf("%i",&elecc);
    }
    
    if (elecc == 1){
        printf("El minimo par del arrelgo es : %i ",minimo_pares(a,N));
    } else if (elecc == 2){
        printf("El minimo impar del arrelgo es : %i ",minimo_impares(a,N));
    }
    
    return 0;
}