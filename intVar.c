#include <stdio.h>

typedef struct{
    int prim;
    int sec;
} par;

par intVar(int x, int y){
    int z;
    par a;

    z=y;
    y=x;
    x=z;

    a.prim = x;
    a.sec = y;

    return a;
}

int main (void){
    int x = 0, y = 0;

    scanf("%i%i",&x,&y);

    int a = intVar(x,y).prim;
    int b = intVar(x,y).sec;

    printf("%i %i",a,b);

    return 0;
}
