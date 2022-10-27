#include <stdio.h>

struct div_t{
    int cociente;
    int resto;
};

struct div_t division (int num, int div){
    struct div_t a;

    int res = num % div;
    int coc = num / div;

    a.cociente = coc;
    a.resto = res;

    return a;
}


int main (){

    int entero = 0;
    int divisor = 0;

    printf("Por favor un entero y un divisor entero distinto de 0 : ");
    scanf("%i%i",&entero,&divisor);

    while (divisor == 0){
        printf("El divisor debe ser distinto de 0, ingreselo nuevamente ");
        scanf("%i",&divisor);
    }
    
    struct div_t resDiv = division(entero,divisor);

    printf("El resultado de la division entera de %i por %i es : %i =  %i * %i + %i",entero,divisor,entero,resDiv.cociente,divisor,resDiv.resto);

    return 0;
}