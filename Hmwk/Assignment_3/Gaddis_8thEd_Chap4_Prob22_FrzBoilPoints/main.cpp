/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16, 2018, 7:12 PM
 * Purpose: Create a program that will tell the user what chemicals will either
 * freeze or boil at a user inputted temperature.
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
    float temp;
            
    
    //Input temperature
    cout<<"Please enter a temperature in degrees Fahrenheit, \n"
        <<"and I will list a few substances that will either \n"
        <<"freeze or boil at that temperature."<<endl;
    cin>>temp;
    
    
    //Process/Map inputs to outputs
    
            
    //Chemicals that will freeze
    cout<<"These chemicals will freeze at "<<temp<<" degrees Fahrenheit:"<<endl;
    cout<<"-------------------"<<endl;
    if (temp<=-173)
        cout<<"Ethyl alcohol"<<endl;
    if (temp<=-38)
        cout<<"Mercury"<<endl;
    if (temp<=-362)
        cout<<"Oxygen"<<endl;
    if (temp<=32)
        cout<<"Water"<<endl;
    
    //Chemicals that will boil
    cout<<"These chemicals will boil at "<<temp<<" degrees Fahrenheit:"<<endl;
    cout<<"-------------------"<<endl;
    if (temp>=172)
        cout<<"Ethyl alcohol"<<endl;
    if  (temp>=676)
        cout<<"Mercury"<<endl;
    if (temp>=-306)
        cout<<"Oxygen"<<endl;
    if (temp>=212)
        cout<<"Water"<<endl;
                
            
    //Exit stage right!
    return 0;
}

