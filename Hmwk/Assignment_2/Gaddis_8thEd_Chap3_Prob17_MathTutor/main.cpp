/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 10, 2018, 1:02 PM
 * Purpose: Create a program that can be used as a math tutor for a young
 * student. Specifically with adding numbers up to 3 digits in length.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short number1, number2;//2 random numbers to be added together.
    unsigned int sum;//The sum of the two numbers.
    char pause;
    const unsigned short MINVALU=1;
    const unsigned short MAXVALU=999;
    
    //Seed the random number generator.
    unsigned seed = time(0);//Randomizing the numbers each time.
    srand(seed);
    
    //Initialize Variables
    number1= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
    number2= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
    //This formula is to limit the randomized numbers into a 3 digit range.
   
    //Process/Map inputs to outputs
    sum=number1+number2;
            
    //output data
    cout<<"This is a program to practice adding two numbers together.\n"
        <<"A problem will display, when ready for the answer, enter any key."<<endl;
    cout<<number1<<endl;
    cout<<"+"<<number2<<endl;
    cout<<"----"<<endl;
    cin>>pause;
    cout<<number1<<endl;
    cout<<"+"<<number2<<endl;
    cout<<"----"<<endl;
    cout<<setw(4);
    cout<<sum;            
    //Exit stage right!
    return 0;
}

