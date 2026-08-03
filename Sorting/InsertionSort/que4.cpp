//Count Total Comparisons and Total Shifts

#include<iostream>
using namespace std;    

int InsertionSort(int arr[], int n)
{
    int shifts = 0;
    int comparisons = 0;

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];   // Shift
            shifts++;              // Count shift
            comparisons++;         // Count comparison
            j--;
        }

        if(j >= 0) comparisons++; // Count the last comparison when while loop fails

        arr[j + 1] = key;
    }

    cout << "Total Comparisons = " << comparisons << endl;
    return shifts;
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

    int shifts = InsertionSort(arr, n);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nTotal Shifts = " << shifts;

    return 0;
}
