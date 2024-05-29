#include <stdio.h>
#include<limits.h>

#define V 3 // Number of vertices in each stage
#define S 4 // Number of stages

// Function to find the minimum cost path in the multistage graph
int multistage_graph(int graph[S][V][V]) {
    int cost[S][V];

    // Initialize the cost of each vertex in the last stage to 0
    for (int i = 0; i < V; i++) {
        cost[S-1][i] = 0;
    }

    // Iterate over the stages from the second-to-last to the first
    for (int i = S-2; i >= 0; i--) {
        // Iterate over the vertices in the current stage
        for (int j = 0; j < V; j++) {
            // Initialize the minimum cost to infinity
            int min_cost = INT_MAX;

            // Iterate over the vertices in the next stage
            for (int k = 0; k < V; k++) {
                // Update the minimum cost if a shorter path is found
                if (cost[i+1][k] + graph[i][j][k] < min_cost) {
                    min_cost = cost[i+1][k] + graph[i][j][k];
                }
            }

            // Update the cost of the current vertex
            cost[i][j] = min_cost;
        }
    }

    // Return the minimum cost
    return cost[0][0];
}

int main() {
    // Define the multistage graph
    int graph[S][V][V] = {
        {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
        },
        {
            {0, 5, 3},
            {0, 0, 0},
            {0, 0, 0}
        },
        {
            {0, 0, 7},
            {0, 2, 6},
            {0, 0, 0}
        },
        {
            {0, 0, 0},
            {0, 0, 3},
            {0, 5, 0}
        }
    };

    // Find the minimum cost path in the multistage graph
    int cost = multistage_graph(graph);

    // Print the minimum cost
    printf("Minimum cost: %d\n", cost);

    return 0;
}