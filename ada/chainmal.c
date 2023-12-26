#include <stdio.h>
#include <limits.h>

void matrix_chain_multiplication(int P[], int n, int M[][6], int S[][6]) {
    for (int i = 1; i <= n; i++) {
        M[i][i] = 0;
    }

    for (int chain_length = 2; chain_length <= n; chain_length++) {
        for (int i = 1; i <= n - chain_length + 1; i++) {
            int j = i + chain_length - 1;
            M[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost = M[i][k] + M[k + 1][j] + P[i - 1] * P[k] * P[j];
                if (cost < M[i][j]) {
                    M[i][j] = cost;
                    S[i][j] = k;
                }
            }
        }
    }
}

void print_optimal_sequence(int S[][6], int i, int j) {
    if (i == j) {
        printf("A%d", i);
    } else {
        printf("(");
        print_optimal_sequence(S, i, S[i][j]);
        print_optimal_sequence(S, S[i][j] + 1, j);
        printf(")");
    }
}

int main() {
    int P[] = {5, 4, 6, 2, 7};
    int n = sizeof(P) / sizeof(P[0]) - 1;
    int M[6][6], S[6][6];

    matrix_chain_multiplication(P, n, M, S);

    printf("M:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    printf("S:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d\t", S[i][j]);
        }
        printf("\n");
    }

    printf("Optimal Sequence: ");
    print_optimal_sequence(S, 1, n);
    
    return 0;
}
