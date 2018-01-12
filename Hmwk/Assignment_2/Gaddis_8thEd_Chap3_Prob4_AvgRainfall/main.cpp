/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 9, 2018, 6:58 PM
 * Purpose:  Calculate the average rainfall for three months.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string mnt1,mnt2,mnt3;
    float rain1,rain2,rain3,avgRain;
    
    //Initialize Variables
    
    //Input rainfall
    cout<<"Hello! This program will calculate the average rainfall for three months."<<endl;
    cout<<"Please input the name of each month, followed by a space and the amount of rainfall."<<endl;
    cin>>mnt1>>rain1;
    cin>>mnt2>>rain2;
    cin>>mnt3>>rain3;
    
    //Process/Map inputs to outputs
    avgRain=(rain1+rain2+rain3)/3;
    
    //Output data
    cout<<"The average rainfall for "<<mnt1<<", "<<mnt2<<", and "<<mnt3<<" is "
        <<avgRain<<" inches."<<endl;
    
    //Exit stage right!
    return 0;
}