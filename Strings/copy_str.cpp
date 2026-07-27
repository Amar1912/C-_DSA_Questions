//Copy One String to Another (Without Using strcpy())

#include <iostream>
using namespace std;

int main() {

    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    int i = 0;

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
       // Copy the null character
    str2[i] = '\0';

    cout << "Copied string: " << str2 << endl;
    
    

    return 0;
}