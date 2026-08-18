<-- Problem: Maximum Equalization

You are given an array A of N integers.

In one operation, you can choose any one element and increase or decrease it by 1.

You need to find the minimum number of operations required to make all elements equal.

Input
N = 5
A = [1, 2, 3, 4, 5]
Output
6 -->




#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int avg = sum / N;

    int operations = 0;

    for (int i = 0; i < N; i++) {
        if (a[i] > avg) {
            operations += a[i] - avg;
        }
        else {
            operations += avg - a[i];
        }
    }

    cout << operations;

    return 0;
}
