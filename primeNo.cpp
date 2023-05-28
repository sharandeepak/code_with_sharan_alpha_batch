#include <iostream>
using namespace std;
bool checkprimeno(int a){
    //a=27
    if (a<=1){
      return false;
    }
    for (int i=2; i<a;i++){
        if (a%i==0){
            return false;
        }
    }
    return true;
}
      
int main() {
    int a;
    cout<<"enter a value : ";
    cin>>a;
    cout<< checkprimeno(a);
    return 0;
}