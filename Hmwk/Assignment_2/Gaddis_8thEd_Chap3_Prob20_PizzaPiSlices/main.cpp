/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 10, 2018, 1:41 PM
 * Purpose: Create a program that will calculate the number of slices that a
 * pizza of any size can be divided into.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PI = 3.14159;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float pzaDmtr,//The diameter of the pizza.
          numSlcs,//The number of slices the pizza can be cut into.
          areaPza;//The area of the pizza, needed to calculate # of slices.
    
    //Initialize Variables
    
    //Input the diameter of the pizza
    cout<<"Hello! This program calculates the number of slices that\n"
        <<" a pizza can be cut into."<<endl;
    cout<<"Please enter the diameter of the pizza in inches."<<endl;
    cin>>pzaDmtr;
    
    //Process/Map inputs to outputs
    areaPza=PI*(pzaDmtr/2)*(pzaDmtr/2);
    numSlcs=areaPza/14.125;//Each slice will have an area of 14.125 inches.
    
    //output data
    cout<<fixed<<setprecision(1);
    cout<<"The pizza can be cut into "<<numSlcs<<" slices."<<endl;
            
    //Exit stage right!
    return 0;
}

