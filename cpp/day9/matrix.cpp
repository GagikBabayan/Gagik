#include  "matrix.h"
#include <iostream>

using namespace std;


void  print_array (int **matrix, int  column = 4,int row = 3) {
      for (int **temp = matrix; temp < matrix + column; temp++) {
              for (int *temp1 = *temp; temp1 < *temp + row; temp1++) {
                        cout << *temp1 << "  ";
              }

              cout << endl;
      }

}



void sort_array (int **matrix,int column = 4,int row = 3) {
          int index;

          for (int  **temp = matrix; temp < matrix + column; temp++) {
                  for (int *temp1 = *temp; temp1 < *temp + row - 1; temp1++) {
                        for (int* temp2 = temp1 + 1; temp2 < *temp + row; temp2++) {
                                    if (*temp2 < *temp1) {
                                              index  = *temp2;
                                              *temp2 = *temp1;
                                              *temp1 = index; 
                                    }

                        }

                  }


          }










}
