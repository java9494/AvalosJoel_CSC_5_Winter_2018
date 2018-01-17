/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 17, 2018, 10:20 AM
 * Purpose: Phone call charges.
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
    unsigned short cost,//Cost of the phone call in pennies
                   stTime,//Start time in military format
                   chtTime;//Duration of the phone call
    char day,//Day of the week
         dm;//Dummy input irrelevant to the problem.
    
    //Initialize Variables
    cout<<"Calculate cost of a phone call."<<endl;
    cout<<"Input the day a phone call was made."<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"Example: 1:30 P.M. = 13:30"<<endl;
    cin>>setw(2)>>stTime>>dm>>dm>>dm;
    cout<<"Input the duration of the phone call in minutes."<<endl;
    cin>>chtTime;
    
    //Process/Map inputs to outputs
    if (day=='S'||day=='s'){
        cost=chtTime*15;//$.15 cents per minute
    }else if (stTime>=8&&stTime<=18){
        cost=chtTime*40;//$.40 cents per minute
    }else{
            cost=chtTime*25;//$.25 cents per minute
        }
                
    //output data
    cout<<fixed<<setprecision(2)<<fixed;
    cout<<"The cost of the phone call = $"<<cost/100.0f<<endl;
            
    //Exit stage right!
    return 0;
}

