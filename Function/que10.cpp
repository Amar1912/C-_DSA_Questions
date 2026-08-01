//Array Modification Using Reference

#include <iostream>
using namespace std;

void modifyArray(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] += 5;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    modifyArray(arr, size);

    cout<<"Modified array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}