"""
Flexible Matrix Calculator
Author: Rábago García Carlos Alexis
Creation Date: 24/10/2023
Last Modified: 24/10/2023
Version: 2.0.0
"""

import numpy as np

A_n = int(input("\nEnter the number of rows (Matrix A): "))
A_m = int(input("Enter the number of columns (Matrix B): "))

print(f"Enter the elements separated by spaces ({A_n}x{A_m}): ")

a = list(map(int, input().split()))

mtrx_A = np.array(a).reshape(A_n, A_m)
print(f"A ({A_n}x{A_m}) = \n{mtrx_A}")

B_n = int(input("\nEnter the number of rows (Matrix B): "))
B_m = int(input("Enter the number of columns (Matrix B): "))

print(f"Enter the elements separated by spaces ({B_n}x{B_m}): ")

b = list(map(int, input().split()))

mtrx_B = np.array(b).reshape(B_n, B_m)
print(f"B ({B_n}x{B_m}) = \n{mtrx_B}\n")

print("================Results================")
if A_n == B_n and A_m == B_m:
    print(f"A+B ({A_n}x{B_m}) = \n{np.add(mtrx_A, mtrx_B)}")
else:
    print(f"Sum not computable")

if A_m == B_n:
    print(f"AB ({A_n}x{B_m}) = \n{np.dot(mtrx_A, mtrx_B)}")
else:
    print(f"Product not computable")