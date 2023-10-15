def prims():
    n = int(input("Enter no. of nodes: "))
    g = [[0 for _ in range(n)] for _ in range(n)]
    vi = [0] * 10
    cost = 0

    print("Enter adjacency matrix:")
    for i in range(n):
        for j in range(n):
            g[i][j] = int(input(f"g[{i + 1}][{j + 1}]: "))
            if g[i][j] == 0:
                g[i][j] = 999

    s = int(input("Enter starting node: "))
    vi[s - 1] = 1
    c = 1

    while c < n:
        min_value = 999
        for i in range(n):
            if vi[i] == 1:
                for j in range(n):
                    if vi[j] == 0:
                        if g[i][j] < min_value:
                            min_value = g[i][j]
                            u = i
                            v = j
        if vi[u] == 0 or vi[v] == 0:
            print(f"({u + 1} {v + 1})={g[u][v]}", end=' ')
            cost += g[u][v]
            vi[u] = vi[v] = 1
        g[u][v] = g[v][u] = 999
        c += 1

    print(f"\ncost={cost}")


a = prims()
