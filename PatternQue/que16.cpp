//Number Palindrome Pyramid

#include <iostream>
using namespace std;

int main() {

    int rows = 5;

    for(int i = 1; i <= rows; i++) {

        // Leading spaces
        for(int s = 1; s <= rows - i; s++) {
            cout << "  ";
        }

        // Increasing numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Decreasing numbers
        for(int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}