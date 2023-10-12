#include <stdio.h>

void main() {
    int input;
    printf("Input a number: ");
    scanf("%d", &input);
    for (int i = 0; i < 10; i++)
    {
        printf("Loop %d\n", i+1);
        if (input % 3 == 0)
        {
            printf("Number is divisible by 3\n");
            continue;
        }
        printf("Mid loop output\n");
        if (input % 2 == 0)
        {
            printf("Number is even\n");
            break;
        }
    } 
}