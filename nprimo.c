#include <stdio.h>
#include <stdbool.h>


bool es_primo(int n){
    bool prim = true;
    int i = 2;

    if (n==0 || n==1){
        prim = false;
    } 
        
    while (i<n){
            if (n % i == 0){
                prim = false;
            }
        i++;
    }

    return prim;
}


int nesimo_primo (int N){
    int prim;
    int c = 0,i = 0;

    while (c < N){
        if (es_primo(i)) {
            prim = i;
            c++;
        }
        i++;
    }

    return prim;
}

int main (){
    int n = 0;
    int prim = 0;

    printf("Porfavor ingrese la posicion del numero primo que quiere buscar >>> ");
    scanf("%i",&n);

    while (n<0) {
        printf("Porfavor, el numero debe ser mayor a 0 >>> ");
        scanf("%i",&n);
    }
    

    prim = nesimo_primo(n);

    printf("El %i-esimo primo es %i",n,prim);

    return 0;
}