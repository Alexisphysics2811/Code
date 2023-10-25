"""
Flexible Matrix Product
Author: Rábago García Carlos Alexis
Creation Date: 24/10/2023
Last Modified: 24/10/2023
Version: 1.0
"""

import numpy as np

A_n = int(input("\nEnter the number of rows (Matrix A): "))
M = int(input("Enter the number of columns/rows (A|B): "))

print(f"Enter the elements separated by spaces ({A_n}x{M}): ")

a = list(map(int, input().split()))

mtrx_A = np.array(a).reshape(A_n, M)
print(f"A ({A_n}x{M}) = \n{mtrx_A}\n")

B_m = int(input("Enter the number of columns (Matrix B): "))

print(f"Enter the elements separated by spaces ({M}x{B_m}): ")

b = list(map(int, input().split()))

mtrx_B = np.array(b).reshape(M, B_m)
print(f"A ({M}x{B_m}) = \n{mtrx_B}\n")

print(f"AB ({A_n}x{B_m}) = \n{np.dot(mtrx_A, mtrx_B)}")