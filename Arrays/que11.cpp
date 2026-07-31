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

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "First Occurrence = " << i;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Element Not Found";
    }

    return 0;
}