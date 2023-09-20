/*
Collatz Conjecture (Looped)
Author: Rábago García Carlos Alexis
Creation Date: 19/09/2023
Last Modified: 19/09/2023
Version: 1.0
*/

#include <stdio.h>

int main(){
    int n;
    printf("Initial integer: \n");
    scanf("%d", &n);
    printf("Collatz: \n");

    while (n > 0){
        if(n == 1){
            printf("%d\n", n);
            break;
        }
        else if(n % 2 == 0){
            printf("%d\n", n);
            n = n/2;
        }
        else{
            printf("%d\n", n);
            n = 3*n+1;
        }
    }
    
    return 0;
}