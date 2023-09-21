#include <stdio.h>

int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\u2591");
            printf("\u2589");
        }
        printf("\n");
        for (int k = 0; k < 4; k++)
        {
            printf("\u2589");
            printf("\u2591");
        }
        printf("\n");
    }
    

    return 0;
}