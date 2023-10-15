import time
import random


def insertion():
    l = [8,6,3,2,0]
    n = len(l)
    for i in range(n):
        print(i)
        m = min(l[i:])
        l[l.index(m)] = l[i]
        l[i] = m
    
    print(l)
       
t = time.time()
a = insertion()
s = time.time()
print("\n",s-t)
