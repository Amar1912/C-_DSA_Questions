//Character Pyramid (A, B, C...)

#include <iostream>
using namespace std;

int main(){
    int rows = 5;

    for(int i = 0; i < rows; i++){
        // Print leading spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }

        // Print characters
        for(int j = 0; j <= i; j++){
            cout << char('A' + j) << " ";
        }

        cout << endl;
    }


    return 0;
}