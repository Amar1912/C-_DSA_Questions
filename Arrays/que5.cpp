//Count Even and Odd Numbers in an Array (TCS NQT)

#include <iostream>
using namespace std;

int main(){
    
    int arr[5] =  {12,12,1,14, 15};
    int even = 0, odd = 0;
    
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    cout << "Even numbers in the array: " << even << endl;
    cout << "Odd numbers in the array: " << odd << endl;
    return 0;
}