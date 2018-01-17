/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 2, 2018, 6:19 PM
 * Purpose: Create a program that will calculate how far a
 * sound traveled through a specified gas medium.
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
    const float CO2=258.0,//Speed of sound in Carbon Dioxide in meters
                AIR=331.5,//Speed of sound in air in meters 
                HELIUM=972.0,//Speed of sound in helium in meters
                HYDROGN=1270.0;//Speed of sound in hydrogen in meters
    float time,
          dstnce;
    int choice;
    
    //Menu for Selection
    cout<<"Speed of Sound in Gas Calculator"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Choose an option."<<endl;
    cout<<"1. Carbon Dioxide"<<endl;
    cout<<"2. Air"<<endl;
    cout<<"3. Helium"<<endl;
    cout<<"4. Hydrogen"<<endl;
    cin>>choice;
    
    //Output Selection
    switch (choice){
        case 1: {
            cout<<"Please enter the number of seconds that the sound traveled\n"
                <<" in between the range of 0 to 30."<<endl;
            cin>>time;
            dstnce=time*CO2;
            if (time<0||time>30)
                cout<<"That is not a valid time range. Ending program..."<<endl;
            else 
                cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                break;
            }
        case 2: {
            cout<<"Please enter the number of seconds that the sound traveled\n"
                <<" in between the range of 0 to 30."<<endl;
            cin>>time;
            dstnce=time*AIR;
            if (time<0||time>30)
                cout<<"That is not a valid time range. Ending program..."<<endl;
            else 
                cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                break;
        }
        case 3: {
            cout<<"Please enter the number of seconds that the sound traveled\n"
                <<" in between the range of 0 to 30."<<endl;
            cin>>time;
            dstnce=time*HELIUM;
            if (time<0||time>30)
                cout<<"That is not a valid time range. Ending program..."<<endl;
            else 
                cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                break;
        }
        case 4: {
            cout<<"Please enter the number of seconds that the sound traveled\n"
                <<" in between the range of 0 to 30."<<endl;
            cin>>time;
            dstnce=time*HYDROGN;
            if (time<0||time>30)
                cout<<"That is not a valid time range. Ending program..."<<endl;
            else 
                cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                break;
        }
        default: cout<<"You did not enter a valid choice. Closing program..."<<endl;
    }
    
    
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

