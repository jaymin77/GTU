#include <stdio.h>

void dfs(int node, int graph[][7], int *visited, int size) {
    if (!visited[node]) {
        printf("%d ", node);
        visited[node] = 1;

        for (int i = 0; i < size; i++) {
            if (graph[node][i] && !visited[i]) {
                dfs(i, graph, visited, size);
            }
        }
    }
}

int main() {
    int graph[7][7] = {
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    int visited[7] = {0}; // Array to keep track of visited nodes

    printf("DFS Traversal: ");
    dfs(0, graph, visited, 7);

    return 0;
}
