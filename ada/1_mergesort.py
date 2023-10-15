import time


def merge(A, mid, low, high):
    i = low
    j = mid + 1
    k = low
    B = [0] * (high + 1)

    while i <= mid and j <= high:
        if A[i] < A[j]:
            B[k] = A[i]
            i += 1
            k += 1
        else:
            B[k] = A[j]
            j += 1
            k += 1

    while i <= mid:
        B[k] = A[i]
        i += 1
        k += 1

    while j <= high:
        B[k] = A[j]
        j += 1
        k += 1

    for i in range(low, high + 1):
        A[i] = B[i]

    print(A)

def merge_sort(A, low, high):
    if low < high:
        mid = (low + high) // 2
        merge_sort(A, low, mid)
        merge_sort(A, mid + 1, high)
        merge(A, mid, low, high)


A = [9,8,7,6,5,4]
n =len(A)

t = time.time()
a = merge_sort(A, 0, n - 1)
s = time.time()
print("\n",s-t)
