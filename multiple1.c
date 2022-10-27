#include <stdio.h>

int main (){

    int x = 0,y = 0;

    while (x<10){
        y = y + x;
        x = x + 1;
        printf("x ahora es : %i , y ahora es %i",x,y);
    }

    return 0;
}