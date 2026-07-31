#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.length() == 0) {
        return 0;
    }

    cout << str[0];

    for (int i = 1; str[i] != '\0'; i++) {

        if (str[i] != str[i - 1]) {
            cout << str[i];
        }

    }

    return 0;
}