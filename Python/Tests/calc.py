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
