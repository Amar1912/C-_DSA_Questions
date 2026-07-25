//Reverse a Number by for loop 

#include <iostream>
using namespace std;    

int main(){
    
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int rev = 0;

    // while(num != 0){
    //     int digit = num % 10;
    //     rev = rev * 10 + digit;
    //     num /= 10;
    // }

    for(int i = 0; num != 0; num /= 10){
        int digit = num % 10;
        rev = rev * 10 + digit;
    }
     
    cout << "Reversed Number: " << rev << endl;
    return 0;
}