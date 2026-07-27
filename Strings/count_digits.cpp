//Count Digits, Alphabets, and Special Characters

#include <iostream>
using namespace std;

int main(){
    
    int digits = 0, alphabets = 0, specialChars = 0;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        if(c >= '0' && c <= '9'){
            digits++;
        } else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            alphabets++;
        } else{
            specialChars++;
        }
    }

    cout << "Number of digits: " << digits << endl;
    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of special characters: " << specialChars << endl;

    return 0;
}