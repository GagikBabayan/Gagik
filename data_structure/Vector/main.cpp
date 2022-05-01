
#include "vector.cpp"


int main () 
{

    MyVector<int>  vector;
    

    for(int i = 0; i < 10; i++)
    {
        vector.Add(i);
    }

    
    vector.AddAt(10,0);

    for(int i = 0; i < 11; i++)
    {
        cout << vector[i] << endl;
    }

    

    return 0;
}