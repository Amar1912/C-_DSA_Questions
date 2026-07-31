//transpose matrix

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int arr[r][c];

    // Input
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}