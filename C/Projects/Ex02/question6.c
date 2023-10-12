/*
Question 6: Second exam
Author: Rábago García Carlos Alexis
Creation Date: 12/10/2023
Last Modified: 12/10/2023
Version: 1.0
*/

#include <stdio.h>

void a() { 
    unsigned int numeroA = 10; 
    unsigned int numeroB = 20; 
    printf("La resta es: %d.\n", numeroA - numeroB);
}

int b() { 
    int numero = 10; 
    if (numero % 2 == 0) { 
        printf("El número es par.\n"); 
    } 
    else { 
        printf("El número es impar.\n"); 
    } 
    return 0;
}

int main() {
    a();
    b();
    return 0;
}