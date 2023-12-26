#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void knapsackdyna(int profit[], int weight[], int W, int n, int V[][12]) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0) {
                V[i][j] = 0;
            } else if (j < weight[i - 1]) {
                V[i][j] = V[i - 1][j];
            } else {
                V[i][j] = max(V[i - 1][j], V[i - 1][j - weight[i - 1]] + profit[i - 1]);
            }
        }
    }
}

int main() {
    int Profit[] = {1, 6, 18, 22, 28};
    int weight[] = {1, 2, 5, 6, 7};
    int W = 11;
    int n = sizeof(Profit) / sizeof(Profit[0]);

    int V[6][12];
    knapsackdyna(Profit, weight, W, n, V);

    printf("Dynamic Programming Table:\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            printf("%d\t", V[i][j]);
        }
        printf("\n");
    }

    int max_profit = V[n][W];
    printf("Maximum Value: %d\n", max_profit);

    return 0;
}
