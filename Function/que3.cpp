
#include <iostream>
using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

bool isPrime(int n){
    if(n<=1){
        return false;
    }else{
        for (int i=2; i<=n/2; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int a,b;
    int n;
    cout<<"Enter a ";
    cin>>a;

    cout<<"Enter b ";
    cin>>b;

    cout<<"Enter n ";
    cin>>n;

    cout<<"Maximum of "<<a<<" and "<<b<<" is: "<<max(a,b)<<endl;

    if(isEven(n)){
        cout<<n<<" is even"<<endl;
    } else {
        cout<<n<<" is odd"<<endl;
    }

    return 0;
}