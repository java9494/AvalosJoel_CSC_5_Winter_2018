/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 20, 2018, 9:45 AM
 * Purpose: Create a program that can be used as a math tutor for a young
 * student. Specifically with adding numbers up to 3 digits in length.
 * V2: This program is an updated version from the previous one. It will ask the
 * user for the correct answer, and then display a message based on the correct
 * or incorrect answer to the problem.
 * v3: Updates now include, multiplication, division, and subtraction
 * problems. In addition, a menu is added to allow the user access to these
 * features.
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
    unsigned int number1, number2;//2 random numbers to be added together.
    float sum;//The sum of the two numbers.
    float answer;//What the user believes the answer to be.                   
    const unsigned short MINVALU=1;
    const unsigned short MAXVALU=999;
    unsigned short choice;//User inputted choice for menu
    
    do {//beginning of the do-while loop to repeat program.
        //Seed the random number generator.
        unsigned seed = time(0);//Randomizing the numbers each time.
        srand(seed);

        //Initialize Variables
        number1= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
        number2= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
        //This formula is to limit the randomized numbers into a 3 digit range.
        
        //User selected menu
        cout<<"Hello! Welcome to the Math Tutor v3 program!"<<endl;
        cout<<"Please select a choice from the following menu:"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"1. Addition Problems"<<endl;
        cout<<"2. Subtraction Problems"<<endl;
        cout<<"3. Multiplication Problems"<<endl;
        cout<<"4. Division Problems"<<endl;
        cout<<"5. Quit the Program"<<endl;
        cin>>choice;

        switch (choice) {
            case (1): {
                //Summation
                cout<<"This is a program to practice adding two numbers together.\n"
                    <<"A problem will display, and when ready, input the answer."<<endl;
                cout<<number1<<endl;
                cout<<"+"<<number2<<endl;
                cout<<"----"<<endl;
                cin>>answer;

                //Process/Map inputs to outputs
                sum=number1+number2;

                //If the answer inputted is correct.
                if (answer == sum) {
                    cout<<"Good job! That's the right answer!"<<endl;
                    break;
                }

                //If the answer inputted is incorrect.
                else 
                {
                    cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
                    cout<<number1<<endl;
                    cout<<"+"<<number2<<endl;
                    cout<<"----"<<endl;
                    cout<<setw(4);
                    cout<<sum<<endl;
                    break;
                } 
            }
            case (2): {
                //Subtraction
                cout<<"This is a program to practice subtracting two numbers.\n"
                    <<"A problem will display, and when ready, input the answer."<<endl;
                if (number1>=number2) {
                cout<<number1<<endl;
                cout<<"-"<<number2<<endl;
                cout<<"----"<<endl;
                }
                else {
                cout<<number2<<endl;
                cout<<"-"<<number1<<endl;
                cout<<"----"<<endl;
                }
                cin>>answer;
                
                //Process/Map inputs to outputs
                if (number1>=number2)
                    sum=number1-number2;
                else
                    sum=number2-number1;

                //If the answer inputted is correct.
                if (answer == sum){
                    cout<<"Good job! That's the right answer!"<<endl;
                    break;
                }

                //If the answer inputted is incorrect.
                else 
                {
                    cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
                    cout<<number1<<endl;
                    cout<<"-"<<number2<<endl;
                    cout<<"----"<<endl;
                    cout<<setw(4);
                    cout<<sum<<endl;
                    break;
                }
            }
            case (3): {
                //Multiplication
                cout<<"This is a program to practice multiplying two numbers together.\n"
                    <<"A problem will display, and when ready, input the answer."<<endl;
                cout<<number1<<endl;
                cout<<"x"<<number2<<endl;
                cout<<"----"<<endl;
                cin>>answer;

                //Process/Map inputs to outputs
                sum=number1*number2;

                //If the answer inputted is correct.
                if (answer == sum) {
                    cout<<"Good job! That's the right answer!"<<endl;
                    break;
                }

                //If the answer inputted is incorrect.
                else 
                {
                    cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
                    cout<<number1<<endl;
                    cout<<"x"<<number2<<endl;
                    cout<<"----"<<endl;
                    cout<<setw(4);
                    cout<<sum<<endl;
                    break;
                }  
            }
            case (4): {
                //Division
                cout<<"This is a program to practice dividing two numbers.\n"
                    <<"A problem will display, and when ready, input the answer."<<endl;
                cout<<number1<<endl;
                cout<<"%"<<number2<<endl;
                cout<<"----"<<endl;
                cin>>answer;

                //Process/Map inputs to outputs
                sum=static_cast<float>(number1)/static_cast<float>(number2);

                //If the answer inputted is correct.
                cout<<fixed<<setprecision(2)<<showpoint<<endl;
                if (answer>=sum-0.1f&&answer<=sum+0.1f) {//Error range of one tenth
                    cout<<"Good job! That's the right answer!"<<endl;
                    break;
                }

                //If the answer inputted is incorrect.
                else 
                {
                    cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
                    cout<<number1<<endl;
                    cout<<"%"<<number2<<endl;
                    cout<<"----"<<endl;
                    cout<<setw(4);
                    cout<<sum<<endl;
                    break;
                }
            }
        }
    } while (choice!=5);
    //Exit stage right!
    return 0;
}

