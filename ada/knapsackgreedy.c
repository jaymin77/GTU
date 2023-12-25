#include <stdio.h>

void knapsack(int n, float profit[], float weight[], float capacity) {
    float ratio[n];
    int i, j;

    for (i = 0; i < n; i++) {
        ratio[i] = profit[i] / weight[i];
    }

    int index[n];
    for (i = 0; i < n; i++) {
        index[i] = i;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                float temp = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp;

                int tempIndex = index[j];
                index[j] = index[j + 1];
                index[j + 1] = tempIndex;
            }
        }
    }

    float maxProfit = 0;
    float fractions[n];

    for (i = 0; i < n; i++) {
        if (weight[index[i]] <= capacity) {
            maxProfit += profit[index[i]];
            capacity -= weight[index[i]];
            fractions[index[i]] = 1;
        } else {
            fractions[index[i]] = capacity / weight[index[i]];
            maxProfit += profit[index[i]] * fractions[index[i]];
            break;
        }
    }

    printf("Fractions: [");
    for (i = 0; i < n; i++) {
        printf("%.2f", fractions[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Max Profit: %.2f\n", maxProfit);
}

int main() {
    int n = 3;
    float profit[] = {25, 24, 15};
    float weight[] = {18, 15, 10};
    float capacity = 20;

    knapsack(n, profit, weight, capacity);

    return 0;
}
