//Find Last Occurrence of an Element

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int index = -1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        cout << "Last Occurrence = " << index;
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}