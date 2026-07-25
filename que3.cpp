//Factorial of a Number

#include <iostream>
using namespace std;    

int main(){
   
    int num;
    cout << "Enter a positive integer: ";   
    cin >> num;
   
    long long factorial = 1; // Use long long to handle larger factorials
     
    for(int i = 1; i<= num; i++){
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " = " << factorial << endl;
    return 0;
}