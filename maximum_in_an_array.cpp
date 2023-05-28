#include<iostream>
using namespace std;

int main() {
    //Maximum in an array
    int n,largest_num=INT_MIN;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        if(arr[i]>largest_num) {
            largest_num=arr[i];
        }
    }
    cout<<"Largest number in the array is : "<<largest_num;
    return 0;
}