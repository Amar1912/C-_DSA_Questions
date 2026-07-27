//Hollow Square
  

#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    int cols = 5;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // Print '*' at the borders, else print space
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}