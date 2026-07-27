#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper Half
    for (int i = 1; i <= n; i++) {

        // Left Wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        // Middle Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        // Right Wing
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}

