/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 2:09 PM
 * Purpose: Create a program that lets the user enter a charge account number,
 * and then validate that number.
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
    const int SIZE=18;//Size of the array
    int accNums[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                       8080512,4562555,5552012,7825877,1250255,1005231,
                       6545231,3852085,7576651,7881200,4581002};
        
    //Initialize Variables
    int accNum;
    bool found=false;
    cout<<"Hello, enter a charge account number."<<endl;
    cin>>accNum;
    
    //Process/Map inputs to outputs
    for (int count=0;count<SIZE;count++){
        if (accNums[count]==accNum){
            cout<<"That is a valid number, found at position "<<count<<"."<<endl;
            found=true;
        }
        else if (count==SIZE-1&&!found)
            cout<<"Sorry, that number is invalid."<<endl;
    }
            
    //output data
    
            
    //Exit stage right!
    return 0;
}