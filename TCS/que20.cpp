//Check Anagram 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
     string str1, str2;

    cout << "Enter First String: ";
    cin >> str1;

    cout << "Enter Second String: ";
    cin >> str2;

    // If lengths are different, they can't be anagrams
    if (str1.length() != str2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare
    if (str1 == str2)
        cout << "Anagram";
    else
        cout << "Not an Anagram";
    
    return 0;
}