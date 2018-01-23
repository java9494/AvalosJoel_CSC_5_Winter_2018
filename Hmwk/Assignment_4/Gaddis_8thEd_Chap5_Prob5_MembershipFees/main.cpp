/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 20, 2018, 2:58 PM
 * Purpose: Create a program that displays a projected rate increase for a
 * country club for the next six years.
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
    const float CRTFEES=2500;//Current membership charge per year.                      
    float incrse;//The increased price of membership per year
    //Initialize Variables
    
    //Process/Map inputs to outputs
    for (short unsigned int counter=1;counter<=6;counter++) {
        incrse=(CRTFEES*.04f*counter)+CRTFEES;
        cout<<"The membership fee after "<<counter<<" years will be $"<<incrse<<"."<<endl;
    }
        
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

