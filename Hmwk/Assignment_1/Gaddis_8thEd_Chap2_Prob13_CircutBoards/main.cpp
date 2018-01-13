/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 10:57 AM
 * Purpose: Calculate the profit that an electronics company earns
 * on their circuit boards.
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
    float prdCost,//The cost to produce a circuit board.
          prcPrft,//The profit percentage that the company makes on the 
                  //circuit boards.
          slPrce;//The sales price that the circuit boards are sold at.
    
    //Initialize Variables
    prdCost=14.95;//Dollars.
    prcPrft=.35;//The company sells at a 35% profit.
    
    //Process/Map inputs to outputs
    slPrce=prdCost+(prdCost*prcPrft);
            
    //output data
    cout<<"Hello! This program calculates the sales price of a circuit board\n "
    <<"when: the cost to produce each circuit board costs the\n "
    <<"electronics company $14.95, and the profit percentage is 35%."<<endl;
    cout<<"The selling price of each circuit board is $"<<slPrce<<endl;
   
            
    //Exit stage right!
    return 0;
}

