/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 9:09 PM
 * Purpose: Calculate the number of acres of a tract of land.
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
    float acre,//Conversion between acres and square feet
          landSz,//Size of the tract of land in question
          numAcrs;//The number of acres of the land
    
    //Initialize Variables
    acre=43,560;//One acre = 43,560 ft.^2
    landSz=391,876;//Size of land in ft.^2
    
    //Process/Map inputs to outputs
    numAcrs=landSz/acre;
            
    //output data
    cout<<"Hello! This program calculates the number of acres in\n"
    <<"a tract of land that is 391,876 square feet."<<endl;
    cout<<"The number of acres of this land is "<<numAcrs<<"."<<endl;
            
    //Exit stage right!
    return 0;
}

