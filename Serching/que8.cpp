//Binary Serarch

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == key){
            return mid; // Element found
        } else if(arr[mid] < key){
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }


    return -1; // Element not found
}

int main(){
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    
  cout << binarySearch(arr, n, key) << endl;

    return 0;
}