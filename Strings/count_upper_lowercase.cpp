//Count Uppercase and Lowercase Letters

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int uppercase = 0, lowercase = 0;

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            uppercase++;
        } else if (c >= 'a' && c <= 'z') {
            lowercase++;
        }
    }

    cout << "Number of uppercase letters: " << uppercase << endl;
    cout << "Number of lowercase letters: " << lowercase << endl;

    return 0;
}