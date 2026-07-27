//hallow inverted 

#include <iostream>
using namespace std;

int main(){
    int rows = 6;

    for(int i = 0; i < rows; i++){
        // Print leading spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }

        // Print characters
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i || i == rows - 1){
                cout << "*";
            } else {
                cout << "  "; // Print space for hollow part
            }
        }
        
        cout << endl;
    }

    return 0;
}