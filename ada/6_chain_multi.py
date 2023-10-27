def matrix_chain_multiplication(P):
    n = len(P) - 1  
    M = [[0] * (n + 1) for _ in range(n + 1)] 
    S = [[0] * (n + 1) for _ in range(n + 1)] 

    for chain_length in range(2, n + 1):
        for i in range(1, n - chain_length + 2):
            j = i + chain_length - 1
            M[i][j] = float('inf') 

            for k in range(i, j):
                cost = M[i][k] + M[k + 1][j] + P[i - 1] * P[k] * P[j]
                if cost < M[i][j]:
                    M[i][j] = cost
                    S[i][j] = k  

    return M, S

P = [5, 4, 6, 2, 7]
M, S = matrix_chain_multiplication(P)

print("M:")
for row in M:
    print(row)

print("S:")
for row in S:
    print(row)

def print_optimal_sequence(S, i, j):
    if i == j:
        print(f"A{i}", end="")
    else:
        print("(", end="")
        print_optimal_sequence(S, i, S[i][j])
        print_optimal_sequence(S, S[i][j] + 1, j)
        print(")", end="")

print("Optimal Sequence:")
print_optimal_sequence(S, 1, len(P) - 1)



