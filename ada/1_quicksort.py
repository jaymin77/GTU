import time


def print_array(A):
    print(A)

def partition(A, low, high):
    pivot = A[low]
    i = low + 1
    j = high

    while True:
        while i <= j and A[i] <= pivot:
            i += 1
        while i <= j and A[j] > pivot:
            j -= 1
        if i <= j:
            A[i], A[j] = A[j], A[i]
        else:
            break
    print(A)

    A[low], A[j] = A[j], A[low]
    return j

def quick_sort(A, low, high):
    if low < high:
        index = partition(A, low, high)
        quick_sort(A, low, index - 1)
        quick_sort(A, index + 1, high)

    


A = [9,8,7,6,5,4,3]
n = len(A)


t = time.time()
a = quick_sort(A, 0, n - 1)
s = time.time()
print("\n",s-t)
