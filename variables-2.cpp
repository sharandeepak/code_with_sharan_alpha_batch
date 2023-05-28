#include <iostream>
using namespace std;

int a=10,b=20; //global scope

void scope(){ 
    //Types of scope
    /*
        1) Local Scope
        2) Global Scope
    */
   cout<<a<<b;
}

int add(int num1,int num2){
    return num1+num2;
}

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
void lastDigitOfANumber(int a){
    //12345
    //12345%10=5
    cout<<a%10;
}
void operatorPrecedence(){
    //BODMAS
    cout<<10.0/(5*3);
    //float/float
    //float/int
}
void binaryOperator(){
    //1100
    //& (*)
    //1111
    //1100

    /*
        1100
        or (+)
        1111
        1111
    */

   /*
    1100<<2
    1100>>3
    0001
   */

  /*
    100
    011 (1s complement) 
  */
 /*
    ?and rule
    multiplication
    1 & 1 = 1
    0 & 1 = 0
    1 & 0 = 0
    0 & 0 = 0

    a = 101
    b = 101
    c = 101 = 5

    ?Or Rule
    Addition
    1 | 1 = 1
    0 | 1 = 1
    1 | 0 = 1
    0 | 0 = 0

    a = 101 -> 5
    b = 010 -> 2
    c = 111 -> 7

    ?XOR Rule
    different finder
    0 ^ 0 = 0
    1 ^ 1 = 0
    0 ^ 1 = 1
    1 ^ 0 = 1

    a = 1000 -> 8
    b = 1001 -> 9
    c = 0001 -> 1
 */
    int a = 5;
    int b = 5;
    int c = a & b;
    cout<<c<<endl;
}
int main()
{
    binaryOperator();
    return 0;
}

// a+b
/*
    a & b is operand
    + operator
    1) unary operator
        int a=5;
        a++; a--; 
        cout<<a;
    2) binary opertor

    3) ternary operator

*/