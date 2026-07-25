//Check Palindrome Number

#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int originalNum = num;
    
    int rev = 0;

    while(num != 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if(originalNum == rev){
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}