import time
import random


def insertion():
    l = [random.randint(1,500)for i in range(200)]
    n = len(l)
    for i in range(n):
        m = min(l[i:])
        l[l.index(m)] = l[i]
        l[i] = m
    
    for i in range(n):
        print(l[i],end=" ")
       
t = time.time()
a = insertion()
s = time.time()
print("\n",s-t)
