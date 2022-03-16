#include  <iostream>
#include  "matrix.h"
using namespace std;

int main () {
    int  column,row;
    cout << "Input  column: ";
    cin  >> column;
    cout << "Input  row: ";
    cin  >> row;
    
    int **matrix = new int  *[column];

    for (int **temp = matrix; temp < matrix + column; temp++) {

          *temp = new  int[row];

          for (int *temp1 = *temp; temp1 < *temp + row; temp1++) {

                  *temp1 = rand () % 10  + 1;
        
          }

    }
      
          print_array (matrix,column,row);
          cout << endl;
          sort_array (matrix,column,row);
          cout << endl;
          print_array(matrix,column,row);
          cout << endl;



  return 0;
}



