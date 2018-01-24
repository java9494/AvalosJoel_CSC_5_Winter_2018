/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 24, 2018, 1:26 PM
 * Purpose: Create a Retirement Program.
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
    float salary,invRate,savReqd,pctDep;
    float savings;
    
    //Initialize Variables
    salary=100000.0f;//Salary in $'s
    invRate=0.05f;//Investment Rate from CA Municipal Bonds (5%)
    savReqd=salary/invRate;//Savings Required $'s
    pctDep=0.10f;//Percentage Salary Deposited each year
    savings=0.0f;//Retirement Savings at the start
    
    //Process/Map and Display
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Yearly Salary = $"<<salary<<endl;
    cout<<"Municipal Bond Rate = "<<invRate*PERCENT<<"%"<<endl;
    cout<<"Savings Required = $"<<savReqd<<endl;
    cout<<"Percentage Yearly Deposit = "<<pctDep*PERCENT<<"%"<<endl;
    cout<<"Count Year   Savings  Interest  Deposit"<<endl;
    for (int count=0,year=2022;savings<savReqd;count++,year++) {
        float inEndYr=savings*invRate;
        float dpEndYr=salary*pctDep;
        cout<<setw(4)<<count
            <<setw(5)<<year
                <<setw(12)<<savings
                <<setw(10)<<inEndYr
                <<setw(10)<<dpEndYr<<endl;
        savings+=(inEndYr+dpEndYr);
    }
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

