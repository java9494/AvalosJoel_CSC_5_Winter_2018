/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 10:29 AM
 * Purpose: To calculate the amount (in millimeters) 
 * that the ocean level will rise after:
 * 5, 7, and 10 years.
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
    float rateOcn,//The rate that the ocean level is rising at.
          aftr5,//The number of millimeters (mm) higher that the ocean level
                //will be after 5 years.
            aftr7,//The number of mm higher that the ocean level will be after
                 //7 years.
            aftr10;//The number of mm higher that the ocean level will be after
                   //10 years.
    //Initialize Variables
    rateOcn=1.5;//Millimeters per year.
    aftr5=rateOcn*5;//mm
    aftr7=rateOcn*7;//mm
    aftr10=rateOcn*10;//mm
            
    //Process/Map inputs to outputs
    
            
    //output data
    cout<<"Howdy, this program calculates the rising of the ocean levels after:"
    <<endl;
    cout<<"5"<<endl;
    cout<<"7"<<endl;
    cout<<"and 10 years."<<endl;
    cout<<"After 5 years, the ocean level will rise "
    <<aftr5<<" millimeters."<<endl;
    cout<<"After 7 years, the ocean level will rise "<<aftr7<<" millimeters."
    <<endl;
    cout<<"After 10 years, the ocean level will rise "<<aftr10<<
    " millimeters."<<endl;
    
            
    //Exit stage right!
    return 0;
}

