#include <iostream>
using namespace std;
int main() {
    //Program to count digits of a number
    int num, count = 0;
    cout<<"Enter a number : ";
    cin>>num;
    while (num!=0) {
        count++;
        num=num/10;
    }
    cout<<count;
}
