
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    } else {
        for(int i=n-1; i>=1; i--){
            n = n*i;
        }
}



int main()
{
    int a;
    cout<<"Enter a numbers: ";
    cin>>a;
    
    cout<<"Factorial of "<<a<<" is: "<<factorial(a)<<endl;

   
    return 0;
}