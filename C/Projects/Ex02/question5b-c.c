/*
Question 5b-c: Second exam
Author: Rábago García Carlos Alexis
Creation Date: 12/10/2023
Last Modified: 12/10/2023
Version: 1.0
*/

#include <stdio.h>

void a(){
    int a = 32;
	int* a_ptr = &a;
    printf("a: %d\n", a);
    printf("a_ptr: %p\n", a_ptr);
}

void b(){
    int var1 = 3; 
    int var2 = 2; 
    float var3 = 22.45; 
    char var4 = 'Z'; 
    int var5 = 45; 
    int* var6 = &var5; 
    printf("La suma de %d y %d es: %d\n", var1, var2, var1+var2);
    printf("La temperatura actual es: %.2f ºC\n", var3); 
    printf("La opción seleccionada es la opción: %c\n", var4);
    printf("La dirección donde se almacena el valor %d, es: %p\n", var5, var6);
}

void c(){
    int x_int = 62;
    float x_flt = (float) x_int;
    printf("x_int: %d\n", x_int);
    printf("x_flt: %f\n", x_flt);
}

int main(){
    a();
    b();
    c();
    return 0;
}