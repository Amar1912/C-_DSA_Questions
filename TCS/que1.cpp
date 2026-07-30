//Even odd no 
#include <iostream> 
using namespace std;

int main() 
{ 
    int num; 
    cout << "Enter an integer: "; 
    cin >> num; 

    // If number is divisible by 2, it's even
    if (num % 2 == 0) 
        cout << num << " is even."; 
    else
        cout << num << " is odd."; 

    return 0; 
}