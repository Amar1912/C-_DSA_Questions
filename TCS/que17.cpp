//Count Vowels and Consonants

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main(){
    
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;
    
    for(char ch : str){
        if(isalpha(ch)){
            char lowerCh = tolower(ch);
            if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u'){
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}