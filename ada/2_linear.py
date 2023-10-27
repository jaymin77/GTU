import time

def linear(T, x):
    n = len(T)
    for i in range(n):
        if T[i] == x:
            return i + 1
    return n + 1

T = [10, 20, 30, 40, 50]
x = 30
t = time.time()
result = linear(T, x)
s = time.time()

if result <= len(T):
    print(f"Element {x} found at position {result}")
else:
    print(f"Element {x} not found in the list of {result} numbers")

print("Time:", s-t)
