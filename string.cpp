#include<iostream>
using namespace std;

void stringTraversal (string exampleString) {
    /* 
        ! Types of for loop
        ? Normal for loop 
        ? For - each loop
    */
   
   for (int i=0; i<exampleString.length(); i++) {
    cout<<exampleString[i];
   }
}
int main() {
    //Intro to Strings
    /*
        ! What is a String
            ? String is array of characters
            ? The index of String starts from 0
            ? The last index of string can be calculated from the sizeof(String_var) - 1
            ? The size of a character in string is 1
            ? There are two ways to declare a string 
                * Old Method : char str[size_var];
                * New Method : string str;
            ? #include <string>
            ? Any thing other than a function key in your keyboard is a character
            ? Strings are mutable according to the method in which you initiate
            ? String can be concatentated with + operator
            ? Escape characters can be denoted by \
    */
    
    string str="123";
    string str2="123";
    stringTraversal(str);
    /*
        stringTraversal(str);
        string str3 = str + str2;
        cout<<str2.length()<<endl;
        cout<<str.append(str2);
        cout<<str.at(0);
        cout<<str2.capacity();
        cout<<str.empty();
        cout<<str.insert(5,"R B");
        str.push_back('a');
        cout<<str.compare(str2);
        str.pop_back();
        cout<<str;
    */
    return 0;
}