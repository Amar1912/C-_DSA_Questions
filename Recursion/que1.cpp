#include <iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }else{
        return n+Sum(n-1);
    }
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
      
    cout<<"Sum of first "<<n<<" natural numbers is: "<<Sum(n)<<endl;

    return 0;
}