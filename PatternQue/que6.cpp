//Full Pyramid
   
#include <iostream>
using namespace std;

int main(){
    int rows = 6;
    
    
    for(int i = 0; i < rows; i++){
        // Print leading spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }

        // Print stars
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }

        cout << endl;
    }




    return 0;
}