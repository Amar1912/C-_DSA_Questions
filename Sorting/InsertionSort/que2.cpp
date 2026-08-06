//Sort an Array in Descending Order using Insertion Sort

#include <iostream>
using namespace std;

void InsertionSortDescending(int arr[], int n){
   
     for(int i = 1; i<n; i++){
        
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] < key){

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
     }
}

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertionSortDescending(arr, n);

    cout << "Sorted array in Descending Order: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}