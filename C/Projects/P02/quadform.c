#include <stdio.h>
#include <math.h>

int quadform(int a, int b, int c, float x[]){
    double discrim;
    discrim = (b*b) - (4*a*c);
    if (discrim < 0){
        printf("x not in R\n");
        return -1;
    }
    else{
        x[0] = (float)(-b + sqrt(discrim)) / (2*a);
        x[1] = (float)(-b - sqrt(discrim)) / (2*a);
        return 0;
    }
}

int main(){
    int a, b, c, flag;
    float x[2];

    printf("Input the quadratic equation: __x² + __x + __ = 0\nSeparate the integers with spaces.\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Equation registered: %dx² + (%dx) + (%d) = 0\n", a, b, c);

    flag = quadform(a, b, c, x);

    if (flag == 0){
        printf("The roots are: %.5f and %.5f\n", x[0], x[1]);
    }

    return 0;
}
