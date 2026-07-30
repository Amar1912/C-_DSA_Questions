//replace char without replace

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    char oldc, newc;

    cout << "Enter the character to be replaced: ";
    cin >> oldc;
    cout << "Enter the new character: ";
    cin >> newc;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == oldc) {
            str[i] = newc;
        }
    }

    cout << "String after replacement: " << str;

    return 0;
}