/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 23, 2018, 4:40 PM
 * Purpose: Create a program that calculates the balance of a savings account.
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
    float intRate,//The annual interest rate
          strtBal,//The starting balance of the account
          nMonths,//Number of months that have passed since account established
          balance,//The balance after calculation
          totDep,//The total amount of deposits
          totWdrw,//The total amount of withdrawals.
          mnthInt,//Monthly interest
          totInt;//Total amount of interest earned.
    
    //Initialize Variables
    cout<<"Savings Account Balance Calculator"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Enter the starting balance of the account."<<endl;
    cin>>strtBal;
    cout<<"Next, enter the annual interest rate (as a percent)."<<endl;
    cin>>intRate;
    cout<<"Now, enter the number of months that have passed."<<endl;
    cin>>nMonths;
    intRate/=100.0f;
    totDep=0;
    totWdrw=0;
    totInt=0;
    mnthInt=0;
    balance=strtBal;
    
    //Process/Map inputs to outputs
    for (int month=1;month<=nMonths;month++) {
        float deposit,//Amount of money deposited during the month.
              withdrw;//Amount of money withdrawn during the month.
        cout<<"How much money did you deposit into your account during \n"
            <<month<<"?"<<endl;
        cin>>deposit;
        if (deposit<0) {
            cout<<"You cannot enter a negative value. Ending..."<<endl;
            return 0;
        }
        balance+=deposit;
        totDep+=deposit;
        cout<<"How much money did you withdraw from your account during \n"
            <<month<<"?"<<endl;
        cin>>withdrw;
        if (withdrw<0) {
            cout<<"You cannot enter a negative value. Ending..."<<endl;
            return 0;
        }
        balance-=withdrw;
        totWdrw+=withdrw;
        mnthInt=balance*(intRate/12);
        totInt+=mnthInt;
        balance+=mnthInt;//Adding the monthly interest to
                                             //the balance
    }
             
    //output data
    cout<<"At the end of "<<nMonths<<" months, your savings account balance is:"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"$"<<balance<<endl;
    cout<<"Total amount of deposits = $"<<totDep<<endl;
    cout<<"Total amount of withdrawals = $"<<totWdrw<<endl;
    cout<<"Total amount of interest earned = $"<<totInt<<endl;
            
    //Exit stage right!
    return 0;
}

