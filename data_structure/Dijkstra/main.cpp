#include "Dijkstra.hpp"

using namespace std;

int main()
{
  int size = 6;
  int **matrix = new int *[size]
  {
    new int[6]{0, 5, PINF, 2, PINF, 3},
        new int[6]{5, 0, 1, 4, PINF, PINF},
        new int[6]{PINF, 1, 0, PINF, 10, PINF},
        new int[6]{2, 4, PINF, 0, 3, 7},
        new int[6]{4, 10, PINF, 3, 0, 8},
        new int[6] { 3, PINF, PINF, 7, 8, 0 }
  };
  Dijkstra(matrix, 3, size);

  return 0;
}