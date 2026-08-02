

#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }

    cout << "Array after sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    BubbleSort(arr, n);


    return 0;
}