#include<iostream>
using namespace std;

void SelectionSortDescending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }

        swap(arr[i], arr[maxIndex]);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SelectionSortDescending(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}