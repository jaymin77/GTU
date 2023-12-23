import time


def selectionsort(arr):

    for min in range(len(arr)):
        min_index = min
        print(arr)
        for i in range(min+1, len(arr)):
            if arr[min_index] > arr[i]:
                min_index = i
        arr[min_index], arr[min] = arr[min], arr[min_index]


arr = [8, 2, 4, 0, 1, -9, -3]
t = time.time()
a = selectionsort(arr)
s = time.time()
print("\n", s-t)
