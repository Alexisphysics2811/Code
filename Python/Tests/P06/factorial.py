"""
Recursive factorial
Author: Rábago García Carlos Alexis
Creation Date: 22/10/2023
Last Modified: 22/10/2023
Version: 1.0
"""

def factorial(n):
   if n == 1:
       return n
   else:
       return n*factorial(n-1)

num = int(input('Enter an integer: '))

if num < 0:
   print("Recursive factorial isn't defined for negative numbers (yet)")
elif num == 0:
   print(f"{num}! = 1")
else:
   print(f"{num}! = {factorial(num)}")
