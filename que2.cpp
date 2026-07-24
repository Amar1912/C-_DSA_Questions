//Check Prime Number
//prime numbers are the numbers 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
 
   int num;
    cout << "Enter an integer: ";
    cin >> num;

    bool isPrime = true;
    
    if(num <= 1){
        isPrime = false;
    } else{
        for(int i = 2; i<= sqrt(num); i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime){
        cout << num << " is a prime number." << endl;
    }else{
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}