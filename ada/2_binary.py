import time
def binary(arr, x):
    i = 0
    j = len(arr)
    
    while i < j:
        k = (i + j) // 2  
        
        if x == arr[k]:
            return k+1  
        elif x < arr[k]:
            j = k
        else:
            i = k + 1
    return -1  

arr = [10, 20, 30, 40, 50]
x = 60

t = time.time()
result = binary(arr, x)
s = time.time()

if result != -1:
    print(f"Element {x} found at position {result}")
else:
    print(f"Element {x} not found in the list")
print("Time:",s-t)