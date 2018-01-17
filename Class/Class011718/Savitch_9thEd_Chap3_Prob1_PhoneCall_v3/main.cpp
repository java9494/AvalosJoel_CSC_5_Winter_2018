/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 17, 2018, 10:20 AM
 * Purpose: Phone call charges, this time with changing rates depending on if
 * a phone call crosses over into another rate.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short cost,//Cost of the phone call in pennies
                   chtTime,//Duration of the phone call
                   hrs,
                   mins;
    unsigned short bfrTime, aftTime;
    string day,//Day of the week
           stTime;//Start time in military format
    
    //Initialize Variables
    cout<<"Calculate cost of a phone call."<<endl;
    cout<<"Input the day a phone call was made."<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military format"<<endl;
    cout<<"Example: 1:30 P.M. = 13:30"<<endl;
    cin>>stTime;
    cout<<"Input the duration of the phone call in minutes."<<endl;
    cout<<"Duration cannot exceed 2 hours, that is the maximum."<<endl;
    cin>>chtTime;
    if (chtTime>120) exit(0);
    
    //Process/Map inputs to outputs
    hrs=(stTime[0]-48)*10+(stTime[1]-48);
    mins=(stTime[3]-48)*10+(stTime[4]-48);
    aftTime=(mins+chtTime-60<=0)?0:mins+chtTime-60;
    bfrTime=chtTime-aftTime;
    if (day[0]=='S'||day[0]=='s'){
        cost=chtTime*15;//$.15 cents per minute
    }else if (hrs>=8&&hrs<=18){
        cost=bfrTime*40;//$.40 cents per minute
    }else{
        cost=bfrTime*25;//$.25 cents per minute
    }
    
    //calculate new hrs and new day
    hrs+=1;
    hrs=(hrs>23)?0:hrs;
    if(hrs==0&&day=="Su")day="Mo";
    if(hrs==0&&day=="Fr")day="Sa";
    if (day[0]=='S'||day[0]=='s'){
        cost+=aftTime*15;//$.15 cents per minute
    }else if (hrs>=8&&hrs<=18){
        cost+=aftTime*40;//$.40 cents per minute
    }else{
        cost+=aftTime*25;//$.25 cents per minute
    }
                
    //output data
    cout<<fixed<<setprecision(2)<<fixed;
    cout<<"The cost of the phone call on "<<day<<" at "
        <<stTime<<" for "<<chtTime
        <<" minutes cost = $"<<cost/100.0f<<endl;
    cout<<"Before = "<<bfrTime<<endl;
    cout<<"After = "<<aftTime<<endl;
            
    //Exit stage right!
    return 0;
}

