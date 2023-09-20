'''
Calculator
Author: Rábago García Carlos Alexis
Creation Date: 19/09/2023
Last Modified: 19/09/2023
Version: 1.0
'''

operand1 = int(input("Input your first operand: "))
operator = input("\nInput your operator: ")
operand2 = int(input("\nInput your second operand: "))

if operator == "+":
    result = operand1 + operand2
    print("\n Result: ", result)
elif operator == "-":
    result = operand1 - operand2
    print("\n Result: ", result)
elif operator == "*":
    result = operand1 * operand2
    print("\n Result: ", result)
elif operator == "/":
    result = operand1 / operand2
    print("\n Result: ", result)
elif operator == "%":
    result = operand1 % operand2
    print("\n Result: ", result)
else:
    print("Invalid operator")
