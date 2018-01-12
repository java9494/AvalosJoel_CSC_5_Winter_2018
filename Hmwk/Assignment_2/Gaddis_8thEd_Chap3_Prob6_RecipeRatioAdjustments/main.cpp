/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 10, 2018, 12:44 PM
 * Purpose: Create a program that will adjust the amounts of ingredients needed
 * for a recipe based on how many cookies one wishes to make.
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
    float cookies,//The amount of cookies one wishes to make with the recipe.
          cupsSgr, //Cups of sugar needed.
          cupsBtr, //Cups of butter needed.
          cupsFlwr;//Cups of flour needed.    
    
    //Initialize Variables

    //Input number of cookies you want to make.
    cout<<"Hello! This program will give you a cookie recipe based on \n"
        <<"how many cookies you want to bake."<<endl;
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    
    //Process/Map inputs to outputs
    cupsSgr=1.5/(48/cookies);
    cupsBtr=1/(48/cookies);
    cupsFlwr=2.75/(48/cookies);
       
            
    //output data
    cout<<"Recipe for "<<cookies<<" cookies:"<<endl;
    cout<<"-----------------"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<cupsSgr<<" cups of sugar."<<endl;
    cout<<cupsBtr<<" cups of butter."<<endl;
    cout<<cupsFlwr<<" cups of flour."<<endl;
            
    //Exit stage right!
    return 0;
}

