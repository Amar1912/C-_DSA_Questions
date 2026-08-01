//Check Duplicate in an Array

#include <iostream>
using namespace std;

bool hasDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true; // Duplicate found
            }
        }
    }
    return false; // No duplicates found
}

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    if(hasDuplicate(arr, n)){
        cout << "Array contains duplicates." << endl;
    } else {
        cout << "Array does not contain duplicates." << endl;
    }

    return 0;
}