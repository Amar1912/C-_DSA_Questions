#include <iostream>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool valid = true;

    for (int i = 0; str[i] != '\0'; i++) {

        if (!(str[i] >= '0' && str[i] <= '9')) {
            valid = false;
            break;
        }

    }

    if (valid)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}