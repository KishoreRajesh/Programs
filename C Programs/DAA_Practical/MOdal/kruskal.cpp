#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int Find(vector < int >& parent, int i) {
    
    if (parent[i] != i) 
        parent[i] = Find(parent, parent[i]);
    return parent[i];
}

void Merge(vector<int>& parent, int u, int v) {
    
    int x = Find(parent, u);
    int y = Find(parent, v);
    parent[x] = y;
}

void PrintEdge ( vector < pair< int ,int > > ans ) {

    cout << endl << "Edges Of spanning Tree : " << endl;
    
    for ( auto edge : ans ) {
        cout << edge.first << " - " << edge.second << endl; 
    }
}

int KrusKal(int V, vector<pair<int, pair<int,int>> >& edges, vector<pair<int, int>>& mst) { // Corrected the mst vector type
    
    vector<int> parent(V);
    int mincost = 0;
    for (int i = 0; i < V; i++)
        parent[i] = i;

    sort(edges.begin(), edges.end());

    for (auto edge : edges) {
        
        int u = edge.second.first;
        int v = edge.second.second;
        int set_u = Find(parent, u);
        int set_v = Find(parent, v);

        if (set_u != set_v) {
            mst.push_back({ u , v}); 
            mincost += edge.first;
            Merge(parent, u, v);
        }
    }

    return mincost;
}

int main() {
    int V = 9;
    vector < pair < int, pair < int , int > > > edges = {
        {4, {0, 1}}, {8, {0, 7}}, {8, {1, 2}}, {11, {1, 7}}, {7, {2, 3}}, {2, {2, 8}},
        {4, {2, 5}}, {9, {3, 4}}, {14, {3, 5}}, {10, {4, 5}}, {2, {5, 6}}, {1, {6, 7}},
        {6, {6, 8}}, {7, {7, 8}}
    };

    vector<pair<int, int>> ans; 

    int mincost = KrusKal(V, edges, ans);
    cout << "MiniMum  Cost Of spanning Tree  : " << mincost;
    PrintEdge( ans );
}
