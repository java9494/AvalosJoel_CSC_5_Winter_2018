/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 7:21 AM
 * Purpose: Create a program that calculates falling distance.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float fallDst(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float objTime,//Time the object has been falling.
          dstnce;    
    
    //Initialize Variables
    cout<<"Enter in the amount of time that the object has been falling."<<endl;
    cin>>objTime;
    
    //Process/Map inputs to outputs
    
            
    //output data
    cout<<"The object has fell "<<fallDst(objTime)<<" meters"<<endl;
    for (int count=1;count<=10;count++)
        cout<<"The object has fell "<<fallDst(count)<<" meters"<<endl;
            
    //Exit stage right!
    return 0;
}

float fallDst(float time){
    float dstnce=0.5f*9.8*time;
    return dstnce;
}
