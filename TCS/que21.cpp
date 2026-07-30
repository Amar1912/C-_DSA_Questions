//Remove Duplicates from String (C++)
#include <iostream>
using namespace std;

int main() {

    string str;
    cout << "Enter a String: ";
    cin >> str;

    string result = "";

    for (char ch : str) {

        // Character not found in result
        if (result.find(ch) == -1) {
            result += ch;
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}