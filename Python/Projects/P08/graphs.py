import numpy as np
import matplotlib.pyplot as plt
import random
import time

random.seed(time.time())

f = lambda x: 125*(-np.sin(((-4*np.pi)*(x**3))))+125
g = lambda x: 125*(np.sin((((-4*np.pi)*(x**2))/(x-3.25))))+125
h = lambda x: 0

x = np.linspace(0,3.2,1000)
y = f(x)

plt.figure(figsize=(12,5))
plt.plot(x,y)
plt.title('Gráfica de la función horizontal')
plt.xlabel("Grados")
plt.ylabel("Amplitud")
plt.legend()
plt.show()

x = np.linspace(0,5,500)
y1=[]
for i in range(500):
    if i%47 == 0:
        y1.append((1/200)*(0+(25*random.randrange(1,10))))
    elif (i+5)%47 == 0:
        y1.append((1/200)*(0+(25*random.randrange(-5,0))))
    else:
        y1.append((1/200)*(0+(2.5*random.randrange(-5,10))))
y2 = []
c = random.randrange(-5,6)
for i in range(500):
    if (i+c)%47 == 0:
        y2.append((1/200)*(random.randrange(-5,6)+(25*random.randrange(1,10))))
    elif (i+5+c)%47 == 0:
        y2.append((1/200)*(random.randrange(-5,6)+(25*random.randrange(-5,0))))
    else:
        y2.append((1/200)*(random.randrange(-5,6)+(2.5*random.randrange(-5,10))))
        
plt.figure(figsize=(12,5))
plt.plot(x,y1,label="Obtención directa")
plt.plot(x,y2,label="Datos teóricos - Goldberger")
plt.title('Comparación: configuración aVF')
plt.xlabel("Tiempo [s]")
plt.ylabel("Biopotencial [mV]")
plt.grid(True)
plt.legend()
plt.show()
