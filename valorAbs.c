#include <stdio.h>


int valorAbs (int x){
    int y = 0;

    if (x<0){
        y = -x;
    } else {
        y = x;
    }
    
    return y;
}

int main (void){
    int i = 0;
    scanf("%i",&i);
    printf("%i",valorAbs(i));

    return 0;
}