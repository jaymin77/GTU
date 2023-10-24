def knapsackdyna(profit, weight, W):
    n = len(profit)

    V = [[0 for _ in range(W + 1)] for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(W + 1):
            if j < weight[i - 1]:
                V[i][j] = V[i - 1][j]
            else:
                V[i][j] = max(V[i - 1][j], V[i - 1][j - weight[i - 1]] + profit[i - 1])

    max_profit = V[n][W]

    return V, max_profit

Profit = [1, 6, 18, 22, 28]
weight = [1, 2, 5, 6, 7]
W = 11

V, max_profit = knapsackdyna(Profit, weight, W)

for row in V:
    print(row)

print("Maximum Value:", max_profit)


# Find the selected items
#     selected_items = []
#     i, j = n, W
#     while i > 0 and j > 0:
#         if V[i][j] != V[i - 1][j]:
#             selected_items.append(i - 1)
#             j -= weights[i - 1]
#         i -= 1
    
#     selected_items.reverse()

#     for row in V:
#         print(row)
    
#     return max_value, selected_items