/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 20, 2018, 9:23 PM
 * Purpose: Create a program that will calculate calories burned for several
 * time intervals on a specific treadmill.
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
    const float RATE=3.6;//calories burned per minute
    unsigned int min;//minutes on treadmill
    float cal;//total calories burned
    
    
    //Initialize Variables
    min=1;
    
    //Process/Map inputs to outputs
    while (min<=30) 
    {
        cal=RATE*min;
        min++;
        if (min%5==0)
        {
            cout<<"The total calories burned for "<<min<<" minutes on the treadmill\n"
                <<"is "<<cal+3.6<<" calories."<<endl;
        }
    }
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

