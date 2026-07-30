//frequency of each character in a string
//Given a string, print the frequency (count) of every character present in the string.
//Each character should be printed only once.


#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++) {

        bool visited = false;

        // Check whether already counted
        for (int k = 0; k < i; k++) {

            if (str[i] == str[k]) {
                visited = true;
                break;
            }

        }

        if (visited)
            continue;

        int count = 1;

        // Count frequency
        for (int j = i + 1; str[j] != '\0'; j++) {

            if (str[i] == str[j]) {
                count++;
            }

        }

        cout << str[i] << " = " << count << endl;

    }

    return 0;
}