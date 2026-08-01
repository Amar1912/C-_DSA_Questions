

#include <iostream>
using namespace std;

int lineaarSearche(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main(){
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

   int result = lineaarSearche(arr, n, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}