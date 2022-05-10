#ifndef _GRAPHLIST_H_
#define _GRAPHLIST_H_

#include "../LinkedList/linkedlist.h"
#include "../LinkedList/linkedlist.cpp"

class Graph
{
private:
  List<int> *arr;
  int size;
  bool *dfs(bool *, int);

public:
  Graph();
  Graph(int);
  void addNode();
  void removeNode(int);
  void addEdge(int, int);
  void removeEdge(int, int);

  bool isEdgeExists(int, int);

  List<int> findNeighbours(int);
  List<int> findConnections(int);

  void print();
};

Graph::Graph()
{
  size = 0;
}

Graph::Graph(int size)
{
  this->size = size;
  arr = new List<int>[size];
}

void Graph::addNode()
{
  List<int> *temp = new List<int>[size + 1];

  for (int i = 0; i < size; i++)
  {
    temp[i] = arr[i];
  }
  arr = temp;
  size++;
}
void Graph::addEdge(int u, int v)
{
  arr[u].Add(v);
  arr[v].Add(u);
}
void Graph::removeEdge(int u, int v)
{
  for (int i = 0; i < arr[u].GetSize(); i++)
  {
    if (arr[u][i] == v)
    {
      arr[u].RemoveAt(i);
    }
  }
  for (int i = 0; i < arr[v].GetSize(); i++)
  {
    if (arr[v][i] == v)
    {
      arr[v].RemoveAt(i);
    }
  }
}

void Graph::removeNode(int u)
{
  List<int> *temp = new List<int>[size - 1];

  for (int i = 0; i < size; i++)
  {
    if (i != u)
    {
      for (int j = 0; j < arr[i].GetSize(); j++)
      {
        if (arr[i][j] == u)
        {
          arr[i].RemoveAt(j);
        }
      }
      temp[i] = arr[i];
    }
  }
  arr = temp;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < arr[i].GetSize(); j++)
    {
      if (arr[i][j] > u)
      {
        arr[i][j]--;
      }
    }
  }

  delete[] temp;
}

bool Graph::isEdgeExists(int u, int v)
{

  for (int i = 0; i < arr[i].GetSize(); i++)
  {
    if (arr[u][i] == v)
    {
      return true;
    }
  }
  return false;
}

List<int> Graph::findNeighbours(int u)
{
  return arr[u];
}

List<int> Graph::findConnections(int u)
{
  bool *check = new bool[size];
  for (int i = 0; i < size; i++)
  {
    check[i] = 0;
  }
  dfs(check, u);

  List<int> temp;
  for (int i = 0; i < size; i++)
  {
    if (check[i])
    {
      temp.Add(i);
    }
  }
  return temp;
}

bool *Graph::dfs(bool *isvisited, int u)
{
  isvisited[u] = true;

  for (int i = 0; i < arr[u].GetSize(); i++)
  {
    if (!isvisited[i])
    {
      dfs(isvisited, arr[u][i]);
    }
  }
  return isvisited;
}

void Graph::print()
{
  for (int i = 0; i < size; i++)
  {
    cout << i << "-->";
    for (int j = 0; j < arr[i].GetSize(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

#endif