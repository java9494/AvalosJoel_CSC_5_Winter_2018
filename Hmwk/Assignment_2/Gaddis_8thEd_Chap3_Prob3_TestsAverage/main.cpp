/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 9, 2018, 7:28 PM
 * Purpose: Calculate the average for five test scores.
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
    float test1,test2,test3,test4,test5,testAvg;
    
    //Initialize Variables
    
    //Input test scores
    cout<<"Hello! This program calculates the average for five test scores"<<endl;
    cout<<"Please input five test scores, seperated by a space."<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Process/Map inputs to outputs
    testAvg=(test1+test2+test3+test4+test5)/5;
            
    //output data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average for the test scores is "<<testAvg<<"%."<<endl;
            
    //Exit stage right!
    return 0;
}

