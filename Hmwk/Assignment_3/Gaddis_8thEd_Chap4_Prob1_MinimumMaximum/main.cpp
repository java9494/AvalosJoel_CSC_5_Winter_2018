/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 13, 2018, 1:33 PM
 * Purpose: Create a program that will determine which of two numbers is greater.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2;//Two numbers are used.
    
    //Initialize Variables
    
    
    //Input two numbers
    cout<<"Hello! Enter two numbers and I will tell you which one is greater.\n";
    cin>>num1;
    cin>>num2;
            
    //output data
    if (num1==num2)
        cout<<"Please enter two different numbers."<<endl;
    else
        num1>num2?cout<<num1<<" is greater.":cout<<num2<<" is greater.";

            
    //Exit stage right!
    return 0;
}

