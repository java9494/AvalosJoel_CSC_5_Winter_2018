/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16, 2018, 11:25 AM
 * Purpose: Fibonacci Sequence, this time with a FOR loop!
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
    unsigned int fi,fim1,fim2;
    unsigned char nLoops;
    
    //Initialize Variables
    nLoops=9;
    fim1=1;
    fim2=1;
    cout<<fim2<<","<<fim1;
    
    //Process/Map inputs to outputs
    for (unsigned char cnt=1;cnt<=nLoops;cnt++) {
        fi=fim1+fim2;
        cout<<","<<fi;
        fim2=fim1;
        fim1=fi;
        
    };
    
    //Comparison of the ratio of Fibonacci to Golden Ratio
    cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

