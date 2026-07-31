//Sum of Elements in an Array (TCS NQT)

#include <iostream>
using namespace std;

int main(){

    int arr[5] =  {12,12,1,14, 15};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}