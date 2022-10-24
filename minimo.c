#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "minimo.h"

int minimo (int x, int y){
  
    int min = 0;

    if (x>=y){
        min = y;
    } else {
        min = x;
    }
    
    return min;
}