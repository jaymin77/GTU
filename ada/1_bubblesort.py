import time

def bubbblesort(arr):
    for i in range(len(arr)):
        swap = False
        
        for j in range(0, len(arr)-i-1):
            print(arr)
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swap = True

        if swap == False:
            break


arr = [8, 2, 4, 0, 1,-9,-3]
t = time.time()
a = bubbblesort(arr)
s = time.time()
print("\n",s-t)