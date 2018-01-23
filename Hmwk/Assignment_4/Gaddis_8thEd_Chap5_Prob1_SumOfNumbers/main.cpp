/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 18, 2018, 1:40 PM
 * Purpose: Create a program that will take a user inputted positive integer
 * value, and then sum all the integers from 1 to that number.
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
    int start,//The user inputted value
        sum;//The sum of the numbers from 1 to inputted value.
    unsigned int counter;
    
    //Initialize Variables
    cout<<"Hello! Please enter in a positive integer and I\n"
        <<"will sum up the integers from 1 to your chosen number\n"
        <<"and output it."<<endl;
    cout<<"--------------"<<endl;
    cin>>start;
    
    //Process/Map inputs to outputs
    if (start<=0)
        cout<<"You did not read the instructions dummy! Ending program..."<<endl;
    else
        for (sum=0,counter=1;counter<=start;counter++)
            sum+=counter;
  
            
    //output data
    cout<<"The sum of integers from 1 to " <<start<<" is "<<sum<<" ."<<endl;
            
    //Exit stage right!
    return 0;
}

