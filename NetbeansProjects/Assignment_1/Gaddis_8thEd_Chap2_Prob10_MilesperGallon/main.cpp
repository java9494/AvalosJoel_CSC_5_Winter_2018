/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 10:48 AM
 * Purpose: Calculate the miles per gallon (mpg) that a car gets.
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
    float gasGlns,//The number of gallons that the car can hold.
          mlsDrvn,//The number of miles driven before needing to refuel.
          mpg;//The miles per gallon that the car gets.
    
    //Initialize Variables
    gasGlns=15;//The car holds 15 gallons of gas.
    mlsDrvn=375;//The car can drive a total of 375 miles before refueling.
    
    //Process/Map inputs to outputs
    mpg=375/15;
            
    //output data
    cout<<"Hello, this program calculates miles per gallon for a car that "
    <<"holds 15 gallons of gas\n and can travel 375 miles before needing to "
    <<"refuel."<<endl;
    cout<<"This car in question can get "<<mpg<<" miles per gallon."<<endl;
            
    //Exit stage right!
    return 0;
}

