#include<iostream>
using namespace std;

int SelectionSort(int arr[], int n)
{
    int swaps = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if(minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }

    return swaps;
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

    int swaps = SelectionSort(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nTotal Swaps = " << swaps;

    return 0;
}