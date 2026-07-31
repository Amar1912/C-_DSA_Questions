/*Given a string, find the first character that appears only once.

If no such character exists, print "No Non-Repeating Character".*/

#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool found = false;

    for (int i = 0; str[i] != '\0'; i++) {

        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {

            if (str[i] == str[j]) {
                count++;
            }

        }

        if (count == 1) {
            cout << "First Non-Repeating Character = " << str[i];
            found = true;
            break;
        }

    }

    if (!found) {
        cout << "No Non-Repeating Character";
    }

    return 0;
}