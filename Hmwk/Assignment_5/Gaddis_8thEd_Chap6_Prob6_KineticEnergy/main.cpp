/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 6:59 AM
 * Purpose: Create a function that calculates kinetic energy.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float kntcNrg(float,float,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mass,//In kilograms 
          velocty,//In meters per second
            KE;//Kinetic energy
    
    //Initialize Variables
    KE=0;
    cout<<"Hello, please enter a value for the mass of an object."<<endl;
    cin>>mass;
    cout<<"Next, enter in a velocity for the object."<<endl;
    cin>>velocty;
    
    //Process/Map inputs to outputs
    kntcNrg(mass,velocty,KE);
    
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

float kntcNrg(float m, float v,float KE){
    KE=0.5f*m*v*v;
    cout<<"The object has "<<KE<<" kg/meters/seconds^2 kinetic energy."<<endl;
    return KE;
}