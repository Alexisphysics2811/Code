#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));
    short int i, a;
    for (i = 0; i < 101; i++)
    {
        a = a + (rand() % 20);
    }
    printf("%d\n", a/i);
}