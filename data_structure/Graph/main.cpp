#include <iostream>
#include "Graph.hpp"
#include <ctime>
#include <random>

using std::mt19937;

mt19937 gen(time(nullptr));
int _genInteger(int a = 0, int b = 13) {
    return gen() % (b - a + 1) + a;
}

int main() {
    Graph graph(7);
    for (int i = 0; i < 13; i++) {
        graph.addDirectedEdge(_genInteger(0, graph.numberOfVertices() - 1),
                              _genInteger(0, graph.numberOfVertices() - 1));
    }
    graph.print();
    cout << endl; 
    
    for (int i = 0; i < 7; i++) {
        graph.removeVertex(_genInteger(0, graph.numberOfVertices() - 1));

        graph.printGraph();
    }

    
   
    return 0;
}
