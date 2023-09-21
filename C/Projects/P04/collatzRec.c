/*
Collatz Conjecture (Recursive)
Author: Rábago García Carlos Alexis
Creation Date: 19/09/2023
Last Modified: 21/09/2023
Version: 1.1
*/

#include <stdio.h>

int collatz(int x, int count){
    if(x == 1){
        printf("%d\n", x);
        printf("Number of iterations: %d\n", count);
        return 1;
    }
    else if(x % 2 == 0){
        printf("%d\n", x);
        count++;
        return collatz(x/2, count);
    }
    else{
        printf("%d\n", x);
        count++;
        return collatz(3*x+1, count);
    }
}

int main(){
    int n, count = 0;
    printf("Initial integer: \n");
    scanf("%d", &n);
    printf("Collatz: \n");
    collatz(n, count);
    return 0;
}