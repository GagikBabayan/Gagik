#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial {
  private:
      int _degree1, _degree2;
      int *arr1 = new int[_degree1 + 1];
      int *arr2 = new int[_degree2 + 1];
      int *arr3;
  public:

      void Add();
      void Subtract();
      void Multiply();
     Polynomial(int degree1,int degree2,int arrX[],int arrY[]) {
          _degree1 = degree1;
          _degree2 = degree2;
          int n = 0;
          if(degree1 < degree2) {
            n = degree2;
          }
          else {
            n = degree1;
          }
          arr3 = new int [n];

          for(int i = 0; i <= degree1;i++ ) {
            *(arr1 + i ) = arrX[i];
          }
          for(int i = 0; i <= degree2;i++ ) {
            *(arr2 + i ) = arrY[i];
          }
     } 
    ~Polynomial() {

    };     
};


#endif
