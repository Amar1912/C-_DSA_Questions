
#include <iostream>
using namespace std;
 

int square( int a){
   return a*a;
}
int main(){
    int a;
    cout<<"Enter a number to find square: ";
    cin>>a;

   
   cout << square(a) << endl;

    return 0;
}