#include <iostream>
#include <string>
using namespace std;

float weightMachine() {
    cout<<"Standing at weighing machine\n";
    cout<<"Calculate weight\n";
    return 50.0;
}

bool tossACoin() 
{
    cout<<"Tossing a coin\n";
    return true;
}


string alexaCommands(string command){
    if(command == "switch on the TV"){
       cout<<"there is a error";
    //    cout<<findReason(command, false);
    }
    if(command == "switch on the AC"){
        cout<<"Ok sharan !! Switching on the AC\n";
    }

    return "";
}

string findReason(string command, bool wifiOnStatus) {
    if(command == "switch on the TV") {
        cout<<"Checking if the wifi is on";
        if(wifiOnStatus == false){
            return "The Tv is not connected to wifi !!";
        }
    }
    return "";
}

bool findEvenOrOdd(int number){
    if (number % 2 == 0)
        return true;
    else 
        return false;
}

int findFirstDigitOfANumber(int number){
    /*
        123
        2 methods
        converting the number into string
        using loops
    */
   int lastNumber;
   while(number != 0){
        lastNumber = number % 10;
        number = number / 10;
   }
   return lastNumber;
}

int sum(int a, int b){
    return a+b;
}

void sum(int a, int b){
    cout<<"inside the function"<<a+b+c;
}

int main() {
    // Function has its own purpose
    // The compiler starts compiling from the main function, (ITS THE STARTING POINT OF A PROGRAM)
    // float weight = weightMachine();
    // cout<<weight;
    // if(tossACoin() == true){
    //     cout<<"Its HEAD Hurray !!";
    // }
    // else{
    //     cout<<"Its False";
    // }
    // alexaCommands("switch on the TV");
    // alexaCommands("switch on the AC");
    // if(findEvenOrOdd(15) == true){
    //     cout<<"Its even";
    // }
    // else{
    //     cout<<"Its odd";
    // }
    // cout<<findFirstDigitOfANumber(123);
    cout<<sum(1,2)<<endl;
}

/*
    ? Function overloading
    * The number of variables in the parameter might get differed
    * The parameter's data type might get differed
*/
