// Kaden Hurlimann
// Lab 4.1
// create a class to handle multiple array based functions



#include <iostream>
using namespace std;



class ArrayTools
{
    private:
    int otherArray_[10];
    int size_;
    
    public:
    ArrayTools(int array[], int size)
    {
        size_=size;
        for (int i=0; i<size; ++i)
        {
            otherArray_[i]=array[i];
        }
    }
    void Print(int size);
    int Find_min();
    int Find_max();
    int Find_sum();
    int Num_even();
    int Num_odd();
    int Search(int number);
    int Is_sorted();
};

int main()
{
    const int size = 10;
    int myArray[size];
    
    for(int i = 0; i<size;++i)
    {
    cin >> myArray[i];
    }
    
    ArrayTools a(myArray,size);
    
    
    a.Print(size);
    cout << a.Find_min()  << endl;
    cout << a.Find_max()  << endl;
    /*
    cout << a.Find_sum()  << endl;
    cout << a.Num_even()  << endl;
    cout << a.Num_odd()   << endl;
    cout << a.Search(10)  << endl;
    cout << a.Is_sorted() << endl;
    */
}

int ArrayTools::Find_min()
{
    int min;
    min =otherArray_[0];
    for (int i=0; i<size_; ++i)
    {
        if (otherArray_[i]>otherArray_[i+1])
        {
            min=otherArray_[i+1];
        }
    }
    return min;
}

int ArrayTools::Find_max()
{
    int max;
    max =otherArray_[0];
    for (int i=0; i<size_; ++i)
    {
        if (otherArray_[i]>otherArray_[i+1])
        {
            max=otherArray_[i+1];
        }
    }
    return max;
    
}



void ArrayTools::Print(int size)
{
    cout << endl;
    for(int i=0; i<size; ++i)
    {
        cout << otherArray_[i] << endl;
    }
}

