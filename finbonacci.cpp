#include <iostream>
using namespace std;

void fib(int n){
    int a=0, b=1;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<","<<b;
    }
    else if(n>2){
       cout<<a<<","<<b<<",";
       int sum = 0;
       for(int i=3;i<=n;i++){
            sum=a+b;
            cout<<sum<<",";
            a=b;
            b=sum;
       }
    }
}
int main() {
    int n;
    cout<<" enter no of times to print fibonacci series:";
    cin>>n;
    fib(n);
    return 0;
}
