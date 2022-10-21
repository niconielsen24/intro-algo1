#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main (void) {
    int x = 0;
    typedef int num;
    num y = 0;

    while (x<10)
    {
        x += 1;
        printf("%i\n", y);
        y += 1;
    }
    
    assert(x<10);

    return 0;
}