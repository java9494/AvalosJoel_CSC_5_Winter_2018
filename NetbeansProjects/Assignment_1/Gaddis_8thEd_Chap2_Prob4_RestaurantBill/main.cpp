/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 9:59 AM
 * Purpose: Calculate the total bill of a dinner at a restaurant.
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
    float mlChrg,//The cost of the meal.
          tax,//The tax on the meal, which is 6.75%
          tip,//20% of the total after tax is added to meal charge.
          bfrTip,//The total before tip.
          ttlBill;//The total cost of the meal after tax and tip is added
                  //to  the meal charge.
          
    
    //Initialize Variables
    mlChrg=88.67;//In dollars.
    tax=.0675;//Percent of the meal cost.
    tip=.2;//Percent of the total after tax.
    
    //Process/Map inputs to outputs
    bfrTip = (mlChrg+(mlChrg*tax));
    ttlBill = bfrTip+ (bfrTip * tip);
            
    //output data
            cout<<"Hello! This program calculates the total restaurant bill "
            "when the meal charge is $88.67, the tax is 6.75% "
            "and the tip is 20% of the total after tax."<<endl;
            cout<<"The total bill comes out to $"<<ttlBill<<endl;
            
    //Exit stage right!
    return 0;
}

