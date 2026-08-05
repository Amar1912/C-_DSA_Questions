#include <iostream>
using namespace std;

int firstMissingPositive(int arr[], int n)
{
    int i = 0;

    while(i < n)
    {
        // Correct position of current element
        int correct = arr[i] - 1;

        // Place element at its correct index
        if(arr[i] > 0 && arr[i] <= n && arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }

    // Find first missing positive number
    for(i = 0; i < n; i++)
    {
        if(arr[i] != i + 1)
        {
            return i + 1;
        }
    }

    return n + 1;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Smallest Missing Positive = "
         << firstMissingPositive(arr, n);

    return 0;
}
