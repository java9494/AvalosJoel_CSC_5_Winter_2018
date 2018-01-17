/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16th, 2018, 12:31 PM
 * Purpose:  Menu for Assignment 3....??????? MAYBE
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9thEd_Chap3_Prob11_MathTutor"<<endl;
    cout<<"Problem 2 -> Gaddis_9thEd_Chap3_Prob6_Fibonacci"<<endl;
    cout<<"Problem 3 -> Savitch_9thEd_Chap3_Prob7_eToThex"<<endl;
    cout<<"Problem 4 -> Author_Edition_Chapter_Problem_Description 4"<<endl;
    cout<<"Problem 5 -> Author_Edition_Chapter_Problem_Description 5"<<endl;
    cout<<"Problem 6 -> Author_Edition_Chapter_Problem_Description 6"<<endl;
    cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
    cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
    cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
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
            break;
    }
        }    
        case 2: {
            //Declare Variables
            unsigned int fi,fim1,fim2;

            //Initialize Variables
            fim1=1;
            fim2=1;
            cout<<fim2<<","<<fim1;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Process/Map inputs to outputs
            fi=fim1+fim2;
            cout<<","<<fi;
            fim2=fim1;
            fim1=fi;

            //Comparison of the ratio of Fibonacci to Golden Ratio
            cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
            break;
                }
        case 3: {
            //Declare Variables
            float aproxE,term,x;
            int counter;

            //Initialize Variables
            aproxE=1.0f;
            counter=1;
            x=1.0f;
            term=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //Process/Map inputs to outputs
            aproxE+=term;
            cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
            term*=x/counter++;

            //output data
            cout<<"e^"<<x<<" exactly       = "<<exp(x)<<endl;
            break;
        }
        case 4: {
            cout<<"Put problem 4 here "<<endl;break;
        }
        case 5: {
            cout<<"Put problem 5 here "<<endl;break;
        }
        case 6: {
            cout<<"Put problem 6 here "<<endl;break;
        }
        case 7: {
            cout<<"Put problem 7 here "<<endl;break;
        }
        case 8: {
            cout<<"Put problem 8 here "<<endl;break;
        }
        case 9: {
            cout<<"Put problem 9 here "<<endl;break;
        }
        default:cout<<"You choose to exit."<<endl;
    }
   
    //Exit
    return 0;
}

