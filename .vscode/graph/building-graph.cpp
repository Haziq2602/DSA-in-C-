#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    list<int> *adj;

    public:
    Graph(int v){
        this->v = v;
        adj = new list<int>[v];
    }

    void addEdges(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){
        for(int i=0; i<v; i++){
            cout << i << " : ";
            for(int neigh : adj[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
};

int main(){


    Graph graph1(2);
    graph1.addEdges(0, 1);
    graph1.printGraph();

    return 0;
}