//Check Palindrome Number

#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int originalNum = num;
    
    int rev = 0;

    for(int i = 0; num != 0; num/= 10){ //i is not used in the loop, so it can be omitted
        int digit = num % 10;
        rev = rev * 10 + digit;
    }

    if(originalNum == rev){
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}