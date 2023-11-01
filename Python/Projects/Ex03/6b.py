"""
Integrals
Author: Rábago García Carlos Alexis
Creation Date: 31/10/2023
Last Modified: 31/10/2023
Version: 1.0
"""

import numpy as np

valA = 44
valB = 11

def riemann_sum(f,a,b,N,formula='avg'):
    dx = (b - a)/N
    x = np.linspace(a,b,N+1)

    if formula == 'left':
        x_left = x[:-1]
        return np.sum(f(x_left)*dx)
    elif formula == 'right':
        x_right = x[1:]
        return np.sum(f(x_right)*dx)
    elif formula == 'avg':
        x_mid = (x[:-1] + x[1:])/2
        return np.sum(f(x_mid)*dx)
    else:
        print("Formula must be 'left', 'right' or 'avg'.")
        
f1 = lambda x: ((4*(x*x)) - 3)
f2 = lambda x: (np.log(x*x*x*x*x))
f3 = lambda x: (np.sqrt(np.tan(x)))

f1dx = riemann_sum(f1, valB, valA, 10000)
f2dx = riemann_sum(f2, valB, valA, 10000)
f3dx = riemann_sum(f3, valB, valA, 10000)

print(f"The definite integral of f(x)dx over the interval [11, 44] respectively is: {f1dx}")
print(f"The definite integral of f(y)dy over the interval [11, 44] respectively is: {f2dx}")
print(f"The definite integral of f(z)dz over the interval [11, 44] respectively is: {f3dx}")