/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 12, 2018, 1:57 PM
 * Purpose: Calculate how much insurance property owners should purchase.
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
    float insurnc,//The minimum amount of insurance the property owner should
                  //purchase.
          replace;//The total cost that it would take to replace a structure.
    const float MINSRCE=.80;//80% of the cost of replacement 
                           //is the minimum amount of insurance recommended.
    
    //Input replacement cost
    cout<<"Hello! This program calculates the minimum amount of insurance\n"
        <<"that you should purchase for your structure."<<endl;
    cout<<"Please enter the cost of replacement for the building in question.\n";
    cin>>replace;
   
    //Process/Map inputs to outputs
    insurnc=replace*MINSRCE;
            
    //output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The minimum amount of insurance you should purchase is: $"
        <<insurnc<<endl;
            
    //Exit stage right!
    return 0;
}

