//Count Total Comparisons and Total Swaps

#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n, int &comparisons, int &swaps)
{
    comparisons = 0;
    swaps = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            comparisons++;

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

    int comparisons, swaps;

    SelectionSort(arr, n, comparisons, swaps);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nComparisons = " << comparisons;
    cout << "\nSwaps = " << swaps;

    return 0;
}