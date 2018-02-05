/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 12:53 PM
 * Purpose: Create a program that will search combinations of lottery numbers
 * for a winning combination.
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
    const int SIZE=10;
    int lotNums[SIZE]={13579,26791,26792,33445,55555,
                       62483,77777,79422,85647,93121};//The lucky numbers
    int winNum;//This week's winning number.
    bool winner=false;
        
    //Initialize Variables
    cout<<"Winning Lottery Ticket Finder"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter in the winning number."<<endl;
    cin>>winNum;
    
    //Process/Map inputs to outputs
    for (int count=0;(count<SIZE)&&winner==false;count++){
        if (lotNums[count]==winNum){
            cout<<lotNums[count]<<" is a winning combination! Congrats!"<<endl;
            winner=true;
        }
        else if (count==9&&winner==false)
            cout<<"Sorry, there is not a winning ticket this week."<<endl;
    }
            
    //output data
    
            
    //Exit stage right!
    return 0;
}