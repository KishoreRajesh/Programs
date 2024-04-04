#include<stdio.h>
#include<stdlib.h>

#define V 5

typedef struct Edge {
	int src, dest, weight;
}Edge;

typedef struct Graph {
	int vertices;
	int edge_count;
	struct Edge* edge;
}Graph;

struct Edge* create_edge(int s, int d, int w) {
	struct Edge* e = (struct Edge*) malloc(sizeof(struct Edge));
	e->src = s;
	e->dest = d;
	e->weight = w;
	return e;
}

void create_graph(Graph* g) {
	g->vertices = V;
	g->edge = (struct Edge*) malloc(sizeof(struct Edge) * g->vertices);
	g->edge_count = 0;
}

void add_edge(Graph* g, int s, int d, int w) {
	g->edge[g->edge_count] = *create_edge(s, d, w);
	g->edge_count++;
	g->edge[g->edge_count] = *create_edge(d, s, w);
	g->edge_count++;
}

void sort_edges(Graph* g) {
	for (int i = 0; i < g->edge_count - 1; i++) {
		for (int j = 0; j < g->edge_count - i - 1; j++) {
			if (g->edge[j].weight > g->edge[j + 1].weight) {
				struct Edge temp = g->edge[j];
				g->edge[j] = g->edge[j + 1];
				g->edge[j + 1] = temp;
			}
		}
	}
}

int find(int parent[], int i) {
	if (parent[i] == -1)
		return i;
	return find(parent, parent[i]);
}

void union_set(int parent[], int x, int y) {
	int x_set = find(parent, x);
	int y_set = find(parent, y);
	parent[x_set] = y_set;
}

int main() {
	Graph g;
	create_graph(&g);
	add_edge(&g, 0, 1, 10);
	add_edge(&g, 0, 4, 20);
	add_edge(&g, 1, 2, 5);
	add_edge(&g, 1, 3, 15);
	add_edge(&g, 2, 3, 4);
	add_edge(&g, 3, 4, 20);

	sort_edges(&g);

	int parent[V];
	for (int i = 0; i < V; i++)
		parent[i] = -1;

	int total_cost = 0;
	for (int i = 0; i < g.edge_count; i++) {
		int x = find(parent, g.edge[i].src);
		int y = find(parent, g.edge[i].dest);
		if (x!= y) {
			total_cost += g.edge[i].weight;
			union_set(parent, x, y);
			printf("Edge %d -(weight %d)-> %d\n", g.edge[i].src, g.edge[i].weight, g.edge[i].dest);
		}
	}

	printf("\nTotal cost: %d\n", total_cost);
	return 0;
}