#include <iostream>
using namespace std;
int main() {
    // 5! = 5*4*3*2*1
    int num, ans=1;
    cout<<"enter a number : ";
    cin>>num;
    for(int i=num; i>1; --i) {
       ans=ans * i; 
    }
    cout<<ans;
}
