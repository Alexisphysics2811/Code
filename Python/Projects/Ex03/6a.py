"""
Derivatives
Author: Rábago García Carlos Alexis
Creation Date: 31/10/2023
Last Modified: 31/10/2023
Version: 1.0
"""

import numpy as np

valA = 44
valB = 11

def derivative(f,a,formula='avg',h=0.0001):
    if formula == 'avg':
        return (f(a+h) - f(a-h))/(2*h)
    elif formula == 'right':
        return (f(a+h) - f(a))/h
    elif formula == 'left':
        return (f(a) - f(a-h))/h
    else:
        print("Formula must be 'left', 'right' or 'avg'.")

f1 = lambda x: ((4*(x*x)) - 3)
f2 = lambda x: (np.log(x*x*x*x*x))
f3 = lambda x: (np.sqrt(np.tan(x)))

dydx_f1 = np.array([derivative(f1, valA), derivative(f1, valB)])
dydx_f2 = np.array([derivative(f2, valA), derivative(f2, valB)])
dydx_f3 = np.array([derivative(f3, valA), derivative(f3, valB)])

print(f"The derivative of f(x) on values 44 and 11 respectively is: {dydx_f1}")
print(f"The derivative of f(y) on values 44 and 11 respectively is: {dydx_f2}")
print(f"The derivative of f(z) on values 44 and 11 respectively is: {dydx_f3}")