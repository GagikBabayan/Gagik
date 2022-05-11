#ifndef _DIJKSTRA_H_
#define _DIJKSTRA_H_

#include <climits>
#include <iostream>
using namespace std;

const int PINF = INT_MAX;
int miniDist(int distance[], bool isVisited[], int size)
{
  int minimum = INT_MAX, index;

  for (int k = 0; k < size; k++)
  {
    if (!isVisited[k] && (distance[k] <= minimum))
    {
      minimum = distance[k];
      index = k;
    }
  }
  return index;
}

void Dijkstra(int **graph, int temp, int size)
{
  int distance[size];
  bool isVisited[size];

  for (int k = 0; k < size; k++)
  {
    distance[k] = INT_MAX;
    isVisited[k] = false;
  }

  distance[temp] = 0;

  for (int i = 0; i < size; i++)
  {
    int m = miniDist(distance, isVisited, size);
    if (distance[m] == PINF)
    {
      break;
    }

    for (int k = 0; k < size; k++)
    {

      if (graph[m][k] != INT_MAX && distance[m] != INT_MAX && distance[m] + graph[m][k] < distance[k])
        distance[k] = distance[m] + graph[m][k];
    }
    isVisited[m] = true;
  }

  for (int k = 0; k < size; k++)
  {

    cout << distance[k] << endl;
  }
}

#endif