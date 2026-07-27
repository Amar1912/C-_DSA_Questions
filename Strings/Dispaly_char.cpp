//Display Each Character of a String

#include <iostream>
using namespace std;

int main(){ 

    string str;

    cout<< "Enter the string :- ";
   // cin>> str;

   getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++){
        cout << str[i] << endl;
    }



    return 0;
}