#include <stdio.h>

void main() { 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i+j) % 2 == 0)
            {
                printf("\u2591");
            }
            else{
                printf("\u2589");
            }
        }
        printf("\n");
    }
}