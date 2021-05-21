#include <iostream>
using namespace std;

// it work with "class" or "typename"
template<typename T>

void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // program for swapping values of two variables
    int c = 20;
    int d = 10;
    
    Swap<int>(c, d);
    cout << "a = " << c << endl;
    cout << "b = " << d;
    
    system("pause>0");
}