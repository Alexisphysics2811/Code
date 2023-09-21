/*
Calculator
Author: Rábago García Carlos Alexis
Creation Date: 19/09/2023
Last Modified: 21/09/2023
Version: 1.1
*/

#include <stdio.h>

int main(){
    int operand1, operand2, resultValue, flag = 0;
    char operator;
    printf("Input an operation: \n");
    scanf("%d %c %d", &operand1, &operator, &operand2);

    switch(operator){
        case '+':
            resultValue = operand1 + operand2;
            break;
        case '-':
            resultValue = operand1 - operand2;
            break;
        case '*':
            resultValue = operand1 * operand2;
            break;
        case '/':
            resultValue = operand1 / operand2;
            break;
        case '%':
            resultValue = operand1 % operand2;
            break;
        default:
            printf("Invalid operator: %c\n", operator);
            flag = 1;
            break;
    }

    if (flag == 0) {
        printf("The result is: %d\n", resultValue);
    }
    return 0;
}