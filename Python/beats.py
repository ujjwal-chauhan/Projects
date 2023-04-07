import matplotlib.pyplot as py
import numpy as np

t = np.arange(0,50,1)
y1 = np.arange(0,50,1)
y2 = np.arange(0,50,1)
for i in t:
    for n in np.arange(0,50,1):
        y1[n] = np.sin((3*i)/2*i)
for i in t:
    for n in np.arange(0,50,1):
        y2[n] = np.cos((i)/2*i)

py.plot(t,y1)
py.plot(t,y2)
py.show()