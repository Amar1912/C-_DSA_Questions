

#include <iostream>
using namespace std;

void  fibonacci(int n){
    
    int first = 0, second = 1, next;

    if (n >= 1)
        cout << first << " ";

    if (n >= 2)
        cout << second << " ";

    for (int i = 3; i<=n; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}


int main(){
   int n;
   cout<<"Enter a number: ";
    cin>>n;

    fibonacci(n);

    return 0;
}