#include <iostream>
using namespace std;
int main() {
    //Program to print pyramid pattern
    int rows;
    cin>>rows;
    for (int i=1; i<=rows; i++) {
        for(int space = 1; space <= (2*(rows - i)); space++) {
            cout<<" ";
        }
        for(int leftStar = 1;leftStar<=i; leftStar++){
            cout<<"* ";
        }
        for (int rightStar = 1; rightStar <=(i-1); rightStar++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
