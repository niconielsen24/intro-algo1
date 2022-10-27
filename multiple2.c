#include <stdio.h>

int main (){

    int x = 1,y = 0,z = 0;

    while (x<10){
        int tempx = x;
        int tempy = y;
        int tempz = z;

        x = tempy;
        y = tempy + tempx + tempz;
        z = tempy + tempx;

        printf("x = %i, - y = %i, - z = %i\n",x,y,z);
    }
    

    return 0;
}