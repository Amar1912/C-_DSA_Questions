#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n, int &comparisons, int &swaps)
{
    comparisons = 0;
    swaps = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
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

    BubbleSort(arr, n, comparisons, swaps);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nComparisons = " << comparisons;
    cout << "\nSwaps = " << swaps;

    return 0;
}