/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 12, 2018, 1:39 PM
 * Purpose: Create a program that will convert U.S. dollars to Japanese Yen, as
 * well as to euros.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float dollar,//U.S. Dollars
          yen,//Japanese yen
          euro;//euro
    const float YENDOL=110.99;//Conversion factor
    const float EURODOL=0.82;//Conversion factor
    
    //Initialize Variables

    
    //Input dollars
    cout<<"Hello! This program will convert U.S. dollars to euro and Yen."<<endl;
    cout<<"Please enter any number of dollars."<<endl;
    cin>>dollar;
    
    //Process/Map inputs to outputs
    yen=YENDOL*dollar;
    euro=EURODOL*dollar;
            
    //output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<dollar<<" dollars = "<<yen<<" yen."<<endl;
    cout<<"$"<<dollar<<" dollars = "<<euro<<" euros."<<endl;
            
    //Exit stage right!
    return 0;
}

