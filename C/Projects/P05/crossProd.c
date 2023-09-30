/*
Cross Product of two vectors
Author: Rábago García Carlos Alexis
Creation Date: 28/09/2023
Last Modified: 30/09/2023
Version: 2.0
*/

#include <stdio.h>

void main(){
    int a[3], b[3], res[5];

    printf("Introduce the linear combination (i, j, k) of the first 3D vector: ");
    scanf("%di%dj%dk",&a[0], &a[1], &a[2]);
    printf("(%di)+(%dj)+(%dk)\n",a[0], a[1], a[2]);

    printf("Introduce the linear combination (i, j, k) of the second 3D vector: ");
    scanf("%di%dj%dk",&b[0], &b[1], &b[2]);
    printf("(%di)+(%dj)+(%dk)\n",b[0], b[1], b[2]);

    for (int i = 1; i > -1; i--)
    {
        for (int j = 2; j > 0; j--)
        {
            if (i != j){
                res[i+j] = (a[i]*b[j]) - (a[j]*b[i]);
            }
        }
        
    }
    
    printf("The cross product of both 3D vectors is: (%di)-(%dj)+(%dk)\n",res[3], res[2], res[1]);

}