#include <iostream>
using namespace std;

// Function Declaration
void swap(int &a, int &b);

int main()
{
    int a = 10, b = 20;

    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << endl;

    swap(a, b);

    cout << "After Swap\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Function Definition
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Function\n";
    cout << "a = " << a << " b = " << b << endl;
}