#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);

    MergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
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

    MergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}