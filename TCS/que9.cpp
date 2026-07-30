//Armstrong Number
//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.

#include <iostream>
using namespace std;

int main(){
   
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;

    int originalNum = num;
    int sum = 0;

    while(num != 0){
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num /= 10;
    }

    if(originalNum == sum){
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }


    return 0;
}