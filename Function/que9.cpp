//Increment Using Reference

#include <iostream>
using namespace std;

void increment(int &n){
    n++;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    increment(n);

    cout<<"After incrementing, the number is: "<<n<<endl;

    return 0;
}