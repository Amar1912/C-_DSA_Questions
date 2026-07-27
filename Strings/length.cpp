//Find Length of a String (Without Using length())

#include <iostream>
using namespace std;

int main(){
    
    string str;
    cout<< "enter string";
    cin>> str;

    int count = 0;

    for(int i=0; str[i] != '\0'; i++){
        count++;
    }

    cout<< count<<endl;

    //usign length function
    cout<< str.length();

    return 0;
}