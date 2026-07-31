#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[10];

    for (int i = 0; i < 11; i++){
        cin >> arr2[i];
    }
    cout << arr2[0] << endl;

    return 0;
}