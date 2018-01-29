/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 29, 2018, 12:23 PM
 * Purpose: Create a Retirement Program, using arrays modeled after MVC.
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
    const int SIZE=100;//Representing a hundred years of work.
    float salary,invRate,savReqd,pctDep;
    float savings[SIZE],inEndYr[SIZE],dpEndYr[SIZE];
    int count,year[SIZE];
    
    //Initialize Variables
    salary=100000.0f;//Salary in $'s
    invRate=0.05f;//Investment Rate from CA Municipal Bonds (5%)
    savReqd=salary/invRate;//Savings Required $'s
    pctDep=0.10f;//Percentage Salary Deposited each year
    savings[0]=0.0f;//Retirement Savings at the start
    
    //Display the Headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Yearly Salary = $"<<salary<<endl;
    cout<<"Municipal Bond Rate = "<<invRate*PERCENT<<"%"<<endl;
    cout<<"Savings Required = $"<<savReqd<<endl;
    cout<<"Percentage Yearly Deposit = "<<pctDep*PERCENT<<"%"<<endl;
    cout<<"Count Year   Savings  Interest  Deposit"<<endl;
    
    //Calculate the Parallel Arrays
    for (count=0,year[0]=2022;savings[count]<savReqd;
            count++,year[count]=year[count-1]+1) {
         inEndYr[count]=savings[count]*invRate;
         dpEndYr[count]=salary*pctDep;
          savings[count+1]=savings[count]+
          (inEndYr[count]+dpEndYr[count]);
    }
    
    //Display the Previously Calculated arrays
    for (count=0;savings[count]<savReqd;count++){
             cout<<setw(5)<<count
             <<setw(5)<<year[count]
                <<setw(12)<<savings[count];
                cout<<setw(10)<<inEndYr[count]
                <<setw(10)<<dpEndYr[count]<<endl;
    }
    //output data
    cout<<"Your retirement savings = $"<<savings[count]<<endl;
    cout<<"When you retire "<<count<<" years = "<<year[count]<<endl;
            
    //Exit stage right!
    return 0;
}

