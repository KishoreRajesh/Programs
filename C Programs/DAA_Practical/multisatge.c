#include <stdio.h>
#include <limits.h>

#define N 7

int multistage_graph(int graph[N][N]) {
    int cost[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cost[i][j] = INT_MAX;
        }
    }

    // Set the cost of the last stage to 0
    for (int i = 0; i < N; i++) {
        cost[N-1][i] = 0;
    }

    // Iterate over the stages from the second-to-last to the first
    for (int i = N-2; i >= 0; i--) {
        // Iterate over the vertices in the current stage
        for (int j = 0; j < N; j++) {
            // Iterate over the vertices in the next stage
            for (int k = 0; k < N; k++) {
                // Update the cost of the current vertex if a shorter path is found
                if (cost[i+1][k] + graph[j][k] < cost[i][j]) {
                    cost[i][j] = cost[i+1][k] + graph[j][k];
                }
            }
        }
    }

    // Return the cost of the first vertex in the first stage
    return cost[0][0];
}

int main() {
    // Define the multistage graph
    int graph[N][N] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 5, 3, 0, 0, 0},
        {0, 0, 0, 2, 7, 0, 0},
        {0, 0, 0, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 2, 5},
        {0, 0, 0, 0, 0, 0, 7},
        {0, 0, 0, 0, 0, 0, 0}
    };

    // Find the minimum cost path in the multistage graph
    int cost = multistage_graph(graph);

    // Print the minimum cost
    printf("Minimum cost: %d\n", cost);

    return 0;
}