//Rotate Array Right by One Position

#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> r;

    for(int i = 0; i< r; i++){
        int last = arr[n-1];
        for(int j = n-1; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}