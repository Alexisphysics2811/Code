"""
Graph
Author: Rábago García Carlos Alexis
Creation Date: 31/10/2023
Last Modified: 31/10/2023
Version: 1.0
"""

import numpy as np
import matplotlib.pyplot as plt

valA = 44
valB = 11

axisX = np.array(range(1,51))

f = lambda x: valA*np.sin(x) + valB

axisY = f(axisX)

x = np.linspace(0,50,1000)
y = f(x)

plt.figure(figsize=(12,5))
plt.plot(x,y,label='f(x)=44sin(x)+11')
plt.plot(axisX,axisY,label='f(n)')
plt.plot(axisX,axisY,'r.',label='Individual values')
plt.title('Rábago García Carlos Alexis | 321099398')
plt.legend()
plt.xlabel("x")
plt.ylabel("f(x)")
plt.grid(True)

plt.show()