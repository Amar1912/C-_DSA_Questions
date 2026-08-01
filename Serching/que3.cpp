//Count Occurrences of an Element
#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the element to count: ";
    cin >> key;

    int result = countOccurrences(arr, n, key);
    cout << "Element occurs " << result << " times." << endl;

    return 0;
}