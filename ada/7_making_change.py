def make_change(N, d):
    n = len(d)
    
    c = [[0] * (N + 1) for _ in range(n + 1)]
    
    # for i in range(1, n + 1):
    #     c[i][0] = 0
    
    for i in range(1, n + 1):
        for j in range(1, N + 1):
            if i == 1 and j < d[i - 1]:
                c[i][j] = float('inf')
            elif i == 1:
                c[i][j] = 1 + c[1][j - d[0]]
            elif j < d[i - 1]:
                c[i][j] = c[i - 1][j]
            else:
                c[i][j] = min(c[i - 1][j], 1 + c[i][j - d[i - 1]])

    for row in c:
        print(row)
    
    return c[n][N]

d = [1, 4, 6]
N = 8
coin = make_change(N, d)
print("Minimum number of coins needed:", coin)
