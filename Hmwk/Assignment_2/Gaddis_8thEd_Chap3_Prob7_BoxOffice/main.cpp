/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 9, 2018, 7:53 PM
 * Purpose: Calculate the gross and net box office profit for a night.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string movName;//The name of the movie
    short int adltTx,chldTx;//Number of adult tickets and child tickets sold
    unsigned int adltPrf,
                 chldPrf,
                 grsBox,//The gross box office profit in dollars
                 netBox,//The net box office profit in dollars
                 amtDist;//The amount paid to the movie distributor.
           
    
    //Input movie name
    cout<<"Hello! This program will calculate sales figures for a movie!"<<endl;
    cout<<"Please input the title of a movie."<<endl;
    getline(cin, movName);
    cout<<"Now, enter the number of Adult Tickets sold."<<endl;
    cin>>adltTx;
    cout<<"And finally, enter the number of Child Tickets sold."<<endl;
    cin>>chldTx;
    
    //Process/Map inputs to outputs
    grsBox=(adltTx*10.00)+(chldTx*6.00);
    netBox=grsBox*.20;
    amtDist=grsBox*.80;
            
            
    //output data
    cout<<left;
    cout<<"Movie Name: "<<setw(10)<<movName<<endl;
    cout<<"Adult Tickets Sold: "<<setw(10)<<adltTx<<endl;
    cout<<"Child Tickets Sold: "<<setw(10)<<chldTx<<endl;
    cout<<"Gross Box Office Profit: $"<<setw(10)<<grsBox<<endl;
    cout<<"Net Box Office Profit: $"<<setw(10)<<netBox<<endl;
    cout<<"Amount paid to Distributor: $"<<setw(10)<<amtDist<<endl;
            
    //Exit stage right!
    return 0;
}

