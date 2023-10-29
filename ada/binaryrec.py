def binsearch(T, x):
    n = len(T)
    if n == 0 or x > T[n - 1]:
        return n + 1
    else:
        return binrec(T, x, 0, n - 1)

def binrec(T, x, i, j):
    if i == j:
        return i
    k = (i + j) // 2
    if x <= T[k]:
        return binrec(T, x, i, k)
    else:
        return binrec(T, x, k + 1, j)

T = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
x = 12
index = binsearch(T, x)
if index <= len(T):
    print(f"{x} found at index {index}")
else:
    print(f"{x} not found in the list")