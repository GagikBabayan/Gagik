#ifndef __GRAPH_H__
#define __GRAPH_H__
 
#include <vector>
#include <iostream>
 
using std::vector;
using std::cout;
using std::endl;
 
class Graph {
private:
    vector<vector<int>> graph;
 
public:
    Graph() = default;
    ~Graph() = default;
    Graph(int number_of_vertices) : graph(vector<vector<int>>(number_of_vertices, vector<int>(number_of_vertices, 0))) {}
 
    int numberOfVertices() const;
    int numberOfEdges() const;
 
    int getInDegree(int) const;
    int getOutDegree(int) const;
    int getDegree(int) const;
    int* nodeNeighBours(int) const;

    bool isConnected(int, int);

    void addVertex();
    void addDirectedEdge(int, int);
    void addEdge(int, int);
 
    void removeVertex(int);
    void removeOnlyDirectedEdge(int, int);
    void removeOnlyEdge(int, int);
    void removeDirectedEdge(int, int);
    void removeEdge(int, int);
 
    void print() const;
    void printGraph() const;
};
 
int Graph::numberOfVertices() const {
    return (int) graph.size();
}
 
int Graph::numberOfEdges() const {
    int number_of_edges = 0;
    for (auto temp : graph) {
        for (auto temptemp : temp) {
            number_of_edges += temptemp;
        }
    }
    return number_of_edges;
}
 
int Graph::getInDegree(int u) const {
    int degree = 0;
    for (int i = 0; i < numberOfVertices(); i++) {
        if (graph[i][u]) {
            degree += graph[i][u];
        }
    }
    return degree;
}
 
int Graph::getOutDegree(int u) const {
    int degree = 0;
    for (int i = 0; i < numberOfVertices(); i++) {
        if (graph[u][i]) {
            degree += graph[u][i];
        }
    }
    return degree;
}
 
int Graph::getDegree(int u) const {
    return getInDegree(u) + getOutDegree(u);
}
 
int* Graph::nodeNeighBours(int u) const {
    int* neighbours = new int[getDegree(u)];
    int base = 0;
    for (int i = 0; i < numberOfVertices(); i++) {
        if (graph[u][i]) {
            neighbours[base] = i;
            base++;
        }
    }
    return neighbours;
}

bool Graph::isConnected(int u, int v)
{
    return graph[u][v] == 1 && graph[u][v] == 1;
}

 
void Graph::addVertex() {
    graph.push_back(vector<int>((int) graph.size(), 0));
    for (auto& temp : graph) {
        temp.push_back(0);
    }
}
 
void Graph::addDirectedEdge(int u, int v) {
    graph[u][v]++;
}
 
void Graph::addEdge(int u, int v) {
    addDirectedEdge(u, v);
    addDirectedEdge(v, u);
}
 
void Graph::removeVertex(int vertex) {
    graph.erase(graph.begin() + vertex);
    for (int i = 0; i < (int) graph.size(); i++) {
        graph[i].erase(graph[i].begin() + vertex);
    }
}
 
void Graph::removeOnlyDirectedEdge(int u, int v) {
    if (graph[u][v]) {
        graph[u][v]--;
    }
}
 
void Graph::removeOnlyEdge(int u, int v) {
    removeOnlyDirectedEdge(u, v);
    removeOnlyDirectedEdge(v, u);
}
 
void Graph::removeDirectedEdge(int u, int v) {
    graph[u][v] = 0;
}
 
void Graph::removeEdge(int v, int u) {
    removeDirectedEdge(u, v);
    removeDirectedEdge(v, u);
}
 
void Graph::print() const {
    cout << " ";
    for (int i = 0; i < (int) graph.size(); i++) {
        cout << " " << i;
    }
    cout << endl;
    for (int i = 0; i < (int) graph.size(); i++) {
        cout << i;
        for (int j = 0; j < (int) graph[i].size(); j++) {
            cout << " " << graph[i][j];
        }
        cout << endl;
    }
}

void Graph::printGraph() const {
    cout << "|V| = " << numberOfVertices() << endl;
    cout << "|E| = " << numberOfEdges() << endl;
    cout << " ";
    for (int i = 0; i < numberOfVertices(); i++) {
        cout << " " << i;
    }
    cout << endl;
    for (int i = 0; i < numberOfVertices(); i++) {
        cout << i;
        for (int j = 0; j < numberOfVertices(); j++) {
            cout << " " << graph[i][j];
        }
        cout << endl;
    }
    cout << endl;
}


#endif 
