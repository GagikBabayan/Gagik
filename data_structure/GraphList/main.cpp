#include <iostream>
#include "GraphList.hpp"

using namespace std;

int main()
{

  Graph *graph = new Graph(5);

  graph->addEdge(0, 1);
  graph->addEdge(1, 2);
  graph->addEdge(1, 3);
  graph->addEdge(2, 3);
  graph->addEdge(3, 0);

  graph->print();

  graph->addEdge(4,0);
  graph->removeEdge(1,2);

  cout << endl;
  cout << "Check 2->3 = " << graph->isEdgeExists(2,3) << endl;
  cout << "findConnections 1 = " << graph->findConnections(2);
  cout << "findNeighbours 3 = " << graph->findNeighbours(3);
  
 

  return 0;
}