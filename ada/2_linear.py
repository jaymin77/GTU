import time

def linear(arr, x):
    n = len(arr)
    for i in range(n):
        if arr[i] == x:
            return i + 1
    return n + 1

arr = [10, 20, 30, 40, 50]
x = 30
t = time.time()
result = linear(arr, x)
s = time.time()

if result <= len(arr):
    print(f"Element {x} found at position {result}")
else:
    print(f"Element {x} not found in the list of {result} numbers")

print("Time:", s-t)
