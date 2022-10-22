#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

void holaHasta (int n){
    
    while (n>=1){
        printf("Hola  : %i\n",n);
        n --;
    }
    
}

int main (void){
    int n=0;
    
    printf("porfavo ingrese un numero ");
    
    scanf("%i",&n);
    
    assert(n>0);

    holaHasta(n);

    return 0;
}