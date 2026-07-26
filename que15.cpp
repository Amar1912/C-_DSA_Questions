//LCM (Least Common Multiple) of Two Numbers

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Store original values
    int a = num1;
    int b = num2;

    // Find GCD
    while (num2 != 0) {

        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int gcd = num1;

    // Use original numbers to calculate LCM
    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}