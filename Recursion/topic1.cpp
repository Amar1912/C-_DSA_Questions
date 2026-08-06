#include <iostream>
using namespace std;

void PrintNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    PrintNum(n-1);
}

int Factorial(int n){

    if(n==0){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}


int main(){
    int n ;
    cin>>n;
    cout<<"Factorial of 5 is: "<<Factorial(n)<<endl;

    PrintNum(5);  
    return 0;
}