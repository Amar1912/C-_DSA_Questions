//Linear search

#include <iostream>
using namespace std;

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

    bool found = false;

    for(int i = 0; i < n;  i++){
        if(arr[i]==key){
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Element not found." << endl;
    }
    return 0;
}   