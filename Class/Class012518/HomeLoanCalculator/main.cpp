/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 25, 2018, 11:28 AM
 * Purpose: Create a Home Loan Calculator Program.
 */
 
 //System Libraries
#include <iostream> //I/O Library
#include <iomanip> //Format Currency
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const char PERCENT=100;//Percent conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float purcPrc, intRate, percDep, loanAmt, mthPay; 
    float blonPay, lstPay, sumInt, totPd1, totPd2;
    float savings;
    int count,year;
    
    //Initialize Variables
    purcPrc=250000.0f;              //Purchase Price of the home in $'s
    intRate=0.04f;                  //Interest Rate/Year
    percDep=0.10f;                  //Percentage Deposit
    loanAmt=purcPrc*(1.0f-percDep);    //Loan amount in $'s
    mthPay=1074.19f;                //Monthly Payment
    
    //Process/Map and Display
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Purchase Price     = $"<<purcPrc<<endl;
    cout<<"Interest Rate      = "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Percentage Deposit = "<<percDep*PERCENT<<"%"<<endl;
    cout<<"Loan Amount        = $"<<loanAmt<<endl;
    cout<<"Monthly Payment    = $"<<mthPay<<endl;
    cout<<"Month   Loan         Interest Payment  Principle"<<endl;
    int nMonths=360;
    for (int month=0;month<nMonths;month++) {
        float inEndMn=loanAmt*intRate/12.0f;
        float prnPay=mthPay-inEndMn;
        cout<<setw(5)<<month
                <<setw(12)<<loanAmt
                <<setw(10)<<inEndMn
                <<setw(10)<<mthPay
                <<setw(10)<<prnPay<<endl;
        loanAmt+=(inEndMn-mthPay);
    }
    cout<<"Final Payment at month "<<nMonths<<" = $"<<mthPay+loanAmt<<endl;
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

