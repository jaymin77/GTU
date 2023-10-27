import time
def binary(T, x):
    i = 0
    j = len(T)
    
    while i < j:
        k = (i + j) // 2  
        
        if x == T[k]:
            return k  
        elif x < T[k]:
            j = k
        else:
            i = k + 1
    return -1  

T = [10, 20, 30, 40, 50]
x = 20

t = time.time()
result = binary(T, x)
s = time.time()

if result != -1:
    print(f"Element {x} found at position {result}")
else:
    print(f"Element {x} not found in the list")
print("Time:",s-t)