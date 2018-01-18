/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16, 2018, 11:28 AM
 * Purpose: e to the x, this time as a FOR LOOP!
 */
 
 //System Libraries
#include <iostream>
#include <cmath>      //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float aproxE,term,x;
    int counter, nLoops=10;
    
    //Initialize Variables
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Map inputs to outputs
    for (int count=2;count<=nLoops;count++){
    aproxE+=term;
    term*=x/count;
    }
            
    //output data
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    cout<<"e^"<<x<<" exactly       = "<<exp(x)<<endl;
            
    //Exit stage right!
    return 0;
}

