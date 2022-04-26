
#include "vector.cpp"


int main () {

    MyVector<int>  vector;
    

    for(int i = 0; i < 10; i++)
    {
        vector.Add(i);
    }

    for(int i = 0; i < 10; i++)
    {
        cout << vector << endl;
        vector.RemoveAt(0);

    }
   

    return 0;
}