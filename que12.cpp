//Largest of Three Numbers by bubble sort 

#include <iostream>
using namespace std;

int main(){

    int arr[3];
    cout << "Enter three integers: ";

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "The largest number is: " << arr[2] << endl;
   
    return 0;
}