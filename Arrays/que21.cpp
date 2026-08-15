//2d matrix addition problem 

#include <iostream>
using namespace std;

int main(){
    
    int r, c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    
    int arr1[r][c], arr2[r][c], sum[r][c];
    cout << "Enter the elements of the first matrix: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "The sum of the two matrices is: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}