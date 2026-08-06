#include <iostream>
using namespace std;

void PrintNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    PrintNum(n-1);
}


int main(){


    PrintNum(5);  
    return 0;
}