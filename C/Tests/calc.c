/*
Calculator
Author: Rábago García Carlos Alexis
Creation Date: 19/09/2023
Last Modified: 19/09/2023
Version: 1.0
*/

#include <stdio.h>

int main(){
    int operand1, operand2, resultValue;
    char operator;
    printf("Input an operation: \n");
    scanf("%d %c %d", &operand1, &operator, &operand2);

    if (operator == '+'){
        resultValue = operand1 + operand2;
        printf("The result is: %d\n", resultValue);
    }
    else if (operator == '-'){
        resultValue = operand1 - operand2;
        printf("The result is: %d\n", resultValue);
    }
    else if (operator == '*'){
        resultValue = operand1 * operand2;
        printf("The result is: %d\n", resultValue);
    }
    else if (operator == '/'){
        resultValue = operand1 / operand2;
        printf("The result is: %d\n", resultValue);
    }
    else if (operator == '%'){
        resultValue = operand1 % operand2;
        printf("The result is: %d\n", resultValue);
    }
    else{
        printf("Invalid operator %c\n", operator);
    }
    return 0;
}