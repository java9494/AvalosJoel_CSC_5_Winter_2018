/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 13, 2018, 11:42 AM
 * Purpose: Create a program that can be used as a math tutor for a young
 * student. Specifically with adding numbers up to 3 digits in length.
 * This program is an updated version from the previous one. It will ask the
 * user for the correct answer, and then display a message based on the correct
 * or incorrect answer to the problem.
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
    unsigned short int number1, number2,//2 random numbers to be added together.
                       sum,//The sum of the two numbers.
                       answer;//What the user believes the answer to be.
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
        <<"A problem will display, and when ready, input the answer."<<endl;
    cout<<number1<<endl;
    cout<<"+"<<number2<<endl;
    cout<<"----"<<endl;
    cin>>answer;
    
    //If the answer inputted is correct.
    if (answer == sum)
        cout<<"Good job! That's the right answer!"<<endl;
   
    //If the answer inputted is incorrect.
    else 
    {
        cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
        cout<<number1<<endl;
        cout<<"+"<<number2<<endl;
        cout<<"----"<<endl;
        cout<<setw(4);
        cout<<sum;
    }
    //Exit stage right!
    return 0;
}

