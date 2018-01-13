/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 3, 2018, 1:20 PM
 * Purpose:  Free Fall Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int GRAVITY=32;//Gravity in feet/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short time,   //Time in seconds
                   dstnce; //Length of distance in feet

    //Input free fall time
    cout<<"This program calculates the distance "
        <<"dropped during free-fall"<<endl;
    cout<<"Input the time in free-fall"<<endl;
    cout<<"Time measured in seconds"<<endl;
    cout<<"In the range of 0 to 40 seconds"<<endl;
    cin>>time;
    
    //Process/Map inputs to outputs
    dstnce=GRAVITY*time*time/2;
    
    //Output data
    cout<<"An object dropped for "<<time<<" seconds "
        <<"falls "<<dstnce<<" feet"<<endl;
    
    //Exit stage right!
    return 0;
}