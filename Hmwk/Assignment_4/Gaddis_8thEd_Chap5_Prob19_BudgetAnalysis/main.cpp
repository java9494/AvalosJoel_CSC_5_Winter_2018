/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 23, 2018, 4:17 PM
 * Purpose: Create a Budget Analysis program
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
    float budget,//The user's budget for the month.
          expnse,//Each of the user's expenses.
          totExp;//The user's total amount of expenses entered.
    char choice;//To continue adding expenses.
    
    //Initialize Variables
    expnse=0;
    cout<<"Monthly Budget Analysis Program"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Enter your budget for this month."<<endl;
    cin>>budget;
    
    //Process/Map inputs to outputs
    do {
        cout<<"Enter each of your expenses this month."<<endl;
        cin>>expnse;
        cout<<"Enter another expense? Y for yes, N for no."<<endl;
        cin>>choice;
        totExp+=expnse;          
    } while (choice=='y'||choice=='Y');
            
    //output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Budget for the Month = $"<<budget<<endl;
    cout<<"Based on your entered expenses, you are ";
    if (budget<totExp)
        cout<<"$"<<totExp-budget<<" over budget. Yikes!"<<endl;
    else if (budget>totExp)
        cout<<"$"<<budget-totExp<<" under budget. Wahoo!"<<endl;
    else if (budget==totExp)
        cout<<"exactly on budget!"<<endl;
    else
        cout<<"Error! Invalid information entered. Ending program..."<<endl;
            
    //Exit stage right!
    return 0;
}

