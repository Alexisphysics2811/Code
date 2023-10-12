/*
Question 5d: Second exam
Author: Rábago García Carlos Alexis
Creation Date: 12/10/2023
Last Modified: 12/10/2023
Version: 1.0
*/

#include <stdio.h>

int global_a=1, global_b=2;

void func(int x, int y) {
    int local_c=3, local_d=4;
    printf("global_a = %d, global_b = %d, local_c = %d, local_d = %d, local_e = %d, local_f = %d\n", global_a, global_b, local_c, local_d, x, y);
}

int main() {
    int local_e=5, local_f=6;
    func(local_e,local_f);
    return 0;
}