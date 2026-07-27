//Convert Lowercase to Uppercase (Without Using toupper())

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

     for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }

    }

    cout << "Converted string: " << str << endl;

    return 0;
}