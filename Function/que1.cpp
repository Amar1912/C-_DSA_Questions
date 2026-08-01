
#include <iostream>
using namespace std;

 void greet(){
        cout<<"Hello"<<endl;
    }

void add(int a, int b){
    cout<< a+b << endl;
}

int main(){
     

    cout<<"Calling greet() function"<<endl;
    greet();
    greet();
    greet();

    int a , b;
    cout<<"Enter two numbers to add: ";
    cin>>a>>b;
    
    add(a,b);

    // add(10,20);


    return 0;
}