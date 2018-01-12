/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 10, 2018, 12:29 PM
 * Purpose: Calculate the calories for a user specified number of cookies.
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
    float ckyCal,//How many calories are in one cookie.
          amtCky,//The amount of cookies ate.
          ttlCal;//The total amount of calories consumed.
    
    //Initialize Variables
    ckyCal=100.0;//Each cookie has 100 calories, based on serving size information.
    
    //Input amount of cookies ate
    cout<<"Hello, this program will calculate the total calories you consumed\n"
         <<"based on the number of cookies you ate."<<endl;
    cout<<"Please enter the number of cookies you ate."<<endl;
    cin>>amtCky;
            
    //Process/Map inputs to outputs
    ttlCal=amtCky*ckyCal;
            
    //output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You consumed "<<ttlCal<<" calories."<<endl;
            
    //Exit stage right!
    return 0;
}

