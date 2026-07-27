//Compare Two Strings (Without Using compare())

#include <iostream>
using namespace std;

int main(){
      char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int i = 0;
    bool areEqual = true; 

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areEqual = false;
            break;
        }
        i++;
    }

    if (areEqual) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}