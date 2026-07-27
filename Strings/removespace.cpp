//Remove All Spaces from a String

#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }

    }

    str[j] = '\0';

    cout << "String without spaces: " << str;

    return 0;
}