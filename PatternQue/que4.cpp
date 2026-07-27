//inverted right half pyramid


#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {

        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        // Print stars
        for (int j = 0; j < rows - i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}