#include <stdio.h>

int collatz(int x){
    if(x == 1){
        printf("%d\n", x);
        return 1;
    }
    else if(x % 2 == 0){
        printf("%d\n", x);
        return collatz(x/2);
    }
    else{
        printf("%d\n", x);
        return collatz(3*x+1);
    }
}

int main(){
    int n;
    printf("Initial integer: \n");
    scanf("%d", &n);
    printf("Collatz: \n");
    collatz(n);
    return 0;
}