#include <stdio.h>
#include <limits.h>

#define V 4

// Function to find the minimum cost using brute force
int tsp(int graph[V][V], int path[], int pos, int visited[], int n, int count, int cost, int* min_cost) {
    if (count == n && graph[pos][0]) {
        if (cost + graph[pos][0] < *min_cost) {
            *min_cost = cost + graph[pos][0];
            for (int i = 0; i < n; i++)
                printf("%d ", path[i]);
            printf("0\n");
        }
        return *min_cost;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i] && graph[pos][i]) {
            visited[i] = 1;
            path[count] = i;
            *min_cost = tsp(graph, path, i, visited, n, count + 1, cost + graph[pos][i], min_cost);
            visited[i] = 0;
        }
    }
    return *min_cost;
}

// Driver function
int main() {
    // Graph representation of cities
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int visited[V];
    for (int i = 0; i < V; i++){
        visited[i] = 0;
    }
    int path[V];
    path[0] = 0;
    visited[0] = 1;
    int min_cost = INT_MAX;
-
    printf("Path with minimum cost: \n");
    tsp(graph, path, 0, visited, V, 1, 0, &min_cost);

    printf("Minimum cost: %d\n", min_cost);

    return 0;
}