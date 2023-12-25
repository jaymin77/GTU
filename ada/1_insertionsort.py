import time
import random


def insertionsort(arr):

    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        print(arr)

        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j = j-1

        arr[j+1] = key


arr = [8, 2, 4, 0, 1, -9, -3]
t = time.time()
a = insertionsort(arr)
s = time.time()
print("\n", s-t)
