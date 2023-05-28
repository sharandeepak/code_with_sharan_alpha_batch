#include <iostream>
#include <set>
using namespace std;

/**
 * Introduction : 
    * ? Its a collection of homogenous set of data
    * ? It has a fixed size
    * ? The index of the array starts from 0
    * ? the memory should be allocated even before accessing it
*/
//Initilization and declaration 

int getInputAndOutput(){
    int input_var, size = 5;
    int arr[size];

    cout<<"enter "<<size<<" values :\n";
    //Getting input for an array
    for (int i=0; i<size; i++) {
        cin>>input_var;
        arr[i] = input_var;
    }

    cout<<"The elements in the array are : \n";

    // Printing the array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}

void fetchSizeOfAnArray(){
    int arr[] = {1,2,3};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    cout<<sizeOfArr<<endl;
}

void checkIfArrayIsSorted(){
    int arr[] = {1,2,3,2,1};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<sizeOfArr-1; i++) {
        if(arr[i] > arr[i+1]) {
            cout<<"Its not sorted";
            return;
        }
    }
    cout <<"its sorted";
}

void countDistinctElementInAnArray() {
    int arr[] = {12,13132,123,12,12,13132,4,5};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);

    set<int> set;
    for (int i=0; i<sizeOfArr; i++) {
        set.insert(arr[i]);
    }

    cout<<"Number of distinct element in an array is : "<<set.size();
    return;
}

void sumOfAnArray () {
    int arr[] = {1,2,3,4,5,6};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0; i<sizeOfArr; i++) {
        sum = sum + arr[i];
    }
    cout<<"sum : "<<sum;
}

void averageOfAnArray () {
    int arr[] = {1,2,3,4,5,6};
    float sizeOfArr = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i=0; i<sizeOfArr; i++) {
        sum = sum + arr[i];
    }
    float avg = sum/sizeOfArr;
    cout<<"average : "<<avg;
}

int main() {
    averageOfAnArray();
    return 0;
}
