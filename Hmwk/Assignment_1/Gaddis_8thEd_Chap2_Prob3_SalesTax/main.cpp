/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 7, 2018, 9:37 AM
 * Purpose: To calculate the total sales tax of a purchase.
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
    int prchse;//The purchase amount of the item.
    float stTax,//The state's sales tax.
          govTax,//The country's sales tax.
          ttlTax;//The total amount of sales tax on the purchase.
    
    //Initialize Variables
    prchse= 95;//In dollars.
    stTax=.04;
    govTax=.02;
    
    //Process/Map inputs to outputs
    ttlTax = prchse * (stTax+govTax);
            
    //output data
    cout<<"Hello, this program calculates the total sales tax "
            "of a $95 dollar purchase with 6% sales tax."<<endl;
    cout<<"The total sales tax is "<<ttlTax<<" dollars."<<endl;
            
    //Exit stage right!
    return 0;
}

