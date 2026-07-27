//Pascal's Triangle

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number = 1; // First number in each row is always 1
        for (int j = 0; j <= i; j++) {
            cout << number << " ";
            number = number * (i - j) / (j + 1); // Calculate next number in the row
        }
        cout << endl;
    }

    return 0;
}