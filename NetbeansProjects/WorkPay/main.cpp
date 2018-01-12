/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 3, 2018, 7:12 PM
 * Purpose: Calculate workpay
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
    float payRate,hours,grsPay;//Three integer variables
    
    //Input Payrate
    cout<<"What is your payrate?"<<endl;
    cin>>payRate;
    
    //Input hours worked
    cout<<"How many hours did you work today?"<<endl;
    cin>>hours;
    
    //Process/Map inputs to outputs
    grsPay=payRate*hours;
    
    //output data
    cout<<"You earned "<<grsPay<<" dollars "<<endl;
    
    //Exit stage right!
    return 0;
}

