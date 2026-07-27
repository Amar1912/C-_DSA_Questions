/*4444444
4333334
4322234
4321234
4322234
4333334
4444444*/

#include <iostream>
#include <algorithm> // for min()
using namespace std;

int main() {

    int n = 4;
    int size = 2 * n - 1;   // Total rows and columns

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            // Distance from all four edges
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            // Find the minimum distance
            int minimum = min(min(top, bottom), min(left, right));

            // Print the number
            cout << n - minimum;
        }

        cout << endl;
    }

    return 0;
}