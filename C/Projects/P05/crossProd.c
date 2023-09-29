/*
Cross Product of two vectors
Author: Rábago García Carlos Alexis
Creation Date: 28/09/2023
Last Modified: 28/09/2023
Version: 1.0
*/

#include <stdio.h>

int main(){
    int a[3], b[3];

    printf("Introduce the linear combination (i, j, k) of the first 3D vector: ");
    scanf("%di%dj%dk",&a[0], &a[1], &a[2]);
    printf("(%di)+(%dj)+(%dk)\n",a[0], a[1], a[2]);

    printf("Introduce the linear combination (i, j, k) of the second 3D vector: ");
    scanf("%di%dj%dk",&b[0], &b[1], &b[2]);
    printf("(%di)+(%dj)+(%dk)\n",b[0], b[1], b[2]);

    printf("The cross product of both 3D vectors is: (%di)-(%dj)+(%dk)\n",((a[1]*b[2]) - (a[2]*b[1])), ((a[0]*b[2])-(a[2]*b[0])), ((a[0]*b[1])-(a[1]*b[0])));

    return 0;
}