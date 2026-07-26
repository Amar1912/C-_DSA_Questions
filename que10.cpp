//Sum of Digits

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int sum = 0;
    while(num != 0){
        int digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}