/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16, 2018, 11:24 AM
 * Purpose: Create a math tutor program.
 */
 
 //System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed DO THIS ONCE ONLY in beginning of program
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short op1,op2,result,answer;
    
    //Initialize Variables
    op1=rand()%900+100;//Three digit number
    op2=rand()%1000;//Any 1 to 3 digit number
    
    //Process/Map inputs to outputs
    result=op1+op2;
            
    //output data
    cout<<"Step right up! Test your adding skills! Test your addition skills!"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl<<(result>=1000?" ":"   ")<<endl;
    cin>>answer;
    cout<<(result==answer?"Correct!":"Incorrect.")<<endl;
    //Exit stage right!
    return 0;
}

