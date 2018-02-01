/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 31, 2018, 8:47 PM
 * Purpose: Create a menu for Assignment 4.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
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
    int probNum;  
    
    do {
    //Menu with input of choice.
    cout<<"Assignment 4 Menu"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Choose a problem from this menu."<<endl;
    cout<<"Problem 1 -> Gaddis_8thEd_Chap5_Prob1_SumOfNumbers"<<endl;
    cout<<"Problem 2 -> Gaddis_8thEd_Chap5_Prob2_ASCIICodes"<<endl;
    cout<<"Problem 3 -> Gaddis_8thEd_Chap5_Prob4_CaloriesBurned"<<endl;
    cout<<"Problem 4 -> Gaddis_8thEd_Chap5_Prob5_MembershipFees"<<endl; 
    cout<<"Problem 5 -> Gaddis_8thEd_Chap5_Prob8_MathTutorv3"<<endl;
    cout<<"Problem 6 -> Gaddis_8thEd_Chap5_Prob9_HotelOccupancy"<<endl;
    cout<<"Problem 7 -> Gaddis_8thEd_Chap5_Prob16_SavingsAccount_v1"<<endl;
    cout<<"Problem 8 -> Gaddis_8thEd_Chap5_Prob19_BudgetAnalysis"<<endl;
    cout<<"Problem 9 -> Gaddis_8thEd_Chap5_Prob23_PatternDisplays"<<endl;
    cout<<"Problem 10 -> Gaddis_8thEd_Chap5_Prob26_SavingsAccount_v2"<<endl;
    cout<<"Typing in any other number will end the program."<<endl;
    cin>>probNum;
       
    //Process/Map inputs to outputs
    switch (probNum){
        case 1: {
            //Declare Variables
            int start,//The user inputted value
            sum;//The sum of the numbers from 1 to inputted value.
            unsigned int counter;
    
        //Initialize Variables
        cout<<"Hello! Please enter in a positive integer and I\n"
            <<"will sum up the integers from 1 to your chosen number\n"
            <<"and output it."<<endl;
        cout<<"--------------"<<endl;
        cin>>start;

        //Process/Map inputs to outputs
        if (start<=0)
            cout<<"You did not read the instructions! Ending program..."<<endl;
        else
            for (sum=0,counter=1;counter<=start;counter++)
                sum+=counter;

        //output data
        cout<<"The sum of integers from 1 to " <<start<<" is "<<sum<<" ."<<endl;
        break;
        }
    case 2: {
        //Declare Variables
        char letter;
    
        //Initialize Variables
        letter=1;
    
        //Process/Map inputs to outputs
        for (unsigned short int counter=1;counter<=127;letter++) {
            cout<<letter;
            if (letter%16==0)
                cout<<endl;
            counter++;
        }
        break;
    }
    case 3: { 
        //Declare Variables
        const float RATE=3.6;//calories burned per minute
        unsigned int min;//minutes on treadmill
        float cal;//total calories burned

        //Initialize Variables
        min=1;

        //Process/Map inputs to outputs
        while (min<=30) 
        {
            cal=RATE*min;
            min++;
            if (min%5==0)
            {
                cout<<"The total calories burned for "<<min<<" minutes on the treadmill\n"
                    <<"is "<<cal+3.6<<" calories."<<endl;
            }
        }
        break;
    }
    case 4: {
        //Declare Variables
        const float CRTFEES=2500;//Current membership charge per year.                      
        float incrse;//The increased price of membership per year

        //Process/Map inputs to outputs
        for (short unsigned int counter=1;counter<=6;counter++) {
            incrse=(CRTFEES*.04f*counter)+CRTFEES;
            cout<<"The membership fee after "<<counter<<" years will be $"<<incrse<<"."<<endl;
        }
        break;
    }
    case 5: {
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
        break;
    }
    case 6: {
        //Declare Variables
        unsigned short int nFloors,//Number of floors that the hotel has.
                           nRooms,//Number of rooms that the hotel has.
                           occpd,//Number of rooms that are occupied.
                           totRoom,
                           totOcc;

        //Initialize Variables
        totRoom=0;
        totOcc=0;
        cout<<"Hello! Enter the number of floors that the hotel has\n"
            <<"in order to calculate the occupancy rate."<<endl;
        cin>>nFloors;

        //Process/Map inputs to outputs
        for (unsigned short int floor=1;floor<=nFloors;floor++) {
            if (floor==13) {}
            else {
            cout<<"Please enter the number of rooms on Floor "<<floor<<"."<<endl;
            cin>>nRooms;
            cout<<"Next, enter how many rooms are occupied."<<endl;
            cin>>occpd;
            totRoom+=nRooms;
            totOcc+=occpd;
            }
        }
            
        //output data
        cout<<"The total number of rooms of the hotel = "<<totRoom<<endl;
        cout<<"Occupied Rooms = "<<totOcc<<endl;
        cout<<"Unoccupied Rooms = "<<totRoom-totOcc<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Hotel Occupancy Rate = "<<100.0f*totOcc/totRoom<<"%"<<endl;
        break;
    }
    case 7: {
        //Declare Variables
        float intRate,//The annual interest rate
              strtBal,//The starting balance of the account
              nMonths,//Number of months that have passed since account established
              balance,//The balance after calculation
              totDep,//The total amount of deposits
              totWdrw,//The total amount of withdrawals.
              mnthInt,//Monthly interest
              totInt;//Total amount of interest earned.

        //Initialize Variables
        cout<<"Savings Account Balance Calculator"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Enter the starting balance of the account."<<endl;
        cin>>strtBal;
        cout<<"Next, enter the annual interest rate (as a percent)."<<endl;
        cin>>intRate;
        cout<<"Now, enter the number of months that have passed."<<endl;
        cin>>nMonths;
        intRate/=100.0f;
        totDep=0;
        totWdrw=0;
        totInt=0;
        mnthInt=0;
        balance=strtBal;

        //Process/Map inputs to outputs
        for (int month=1;month<=nMonths;month++) {
            float deposit,//Amount of money deposited during the month.
                  withdrw;//Amount of money withdrawn during the month.
            cout<<"How much money did you deposit into your account during \n"
                <<month<<"?"<<endl;
            cin>>deposit;
            if (deposit<0) {
                cout<<"You cannot enter a negative value. Ending..."<<endl;
                return 0;
            }
            balance+=deposit;
            totDep+=deposit;
            cout<<"How much money did you withdraw from your account during \n"
                <<month<<"?"<<endl;
            cin>>withdrw;
            if (withdrw<0) {
                cout<<"You cannot enter a negative value. Ending..."<<endl;
                return 0;
            }
            balance-=withdrw;
            totWdrw+=withdrw;
            mnthInt=balance*(intRate/12);
            totInt+=mnthInt;
            balance+=mnthInt;//Adding the monthly interest to
                                                 //the balance
        }

        //output data
        cout<<"At the end of "<<nMonths<<" months, your savings account balance is:"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<"$"<<balance<<endl;
        cout<<"Total amount of deposits = $"<<totDep<<endl;
        cout<<"Total amount of withdrawals = $"<<totWdrw<<endl;
        cout<<"Total amount of interest earned = $"<<totInt<<endl;
        break;
    }
    case 8: {
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
        break;
    }
    case 9: {
        //Process/Map inputs to outputs
        for (int counter=0;counter<=10;counter++)
            switch (counter) {
                case 1: cout<<"+"<<endl;break;
                case 2: cout<<"++"<<endl;break;
                case 3: cout<<"+++"<<endl;break;
                case 4: cout<<"++++"<<endl;break;
                case 5: cout<<"+++++"<<endl;break;
                case 6: cout<<"++++++"<<endl;break;
                case 7: cout<<"+++++++"<<endl;break;
                case 8: cout<<"++++++++"<<endl;break;
                case 9: cout<<"+++++++++"<<endl;break;
                case 10: cout<<"++++++++++"<<endl;break;
            }

        for (int counter=0;counter<=10;counter++)
            switch (counter) {
                case 1: cout<<"++++++++++"<<endl;break;
                case 2: cout<<"+++++++++"<<endl;break;
                case 3: cout<<"++++++++"<<endl;break;
                case 4: cout<<"+++++++"<<endl;break;
                case 5: cout<<"++++++"<<endl;break;
                case 6: cout<<"+++++"<<endl;break;
                case 7: cout<<"++++"<<endl;break;
                case 8: cout<<"+++"<<endl;break;
                case 9: cout<<"++"<<endl;break;
                case 10: cout<<"+"<<endl;break;
            }
            break;
    }
    case 10: {
       //Declare Variables
        ofstream savBal;
        savBal.open("Savings Balance Information.txt");
        float intRate,//The annual interest rate
              strtBal,//The starting balance of the account
              nMonths,//Number of months that have passed since account established
              balance,//The balance after calculation
              totDep,//The total amount of deposits
              totWdrw,//The total amount of withdrawals.
              mnthInt,//Monthly interest
              totInt;//Total amount of interest earned.

        //Initialize Variables
        cout<<"Savings Account Balance Calculator"<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"Enter the starting balance of the account."<<endl;
        cin>>strtBal;
        cout<<"Next, enter the annual interest rate (as a percent)."<<endl;
        cin>>intRate;
        cout<<"Now, enter the number of months that have passed."<<endl;
        cin>>nMonths;
        intRate/=100.0f;
        totDep=0;
        totWdrw=0;
        totInt=0;
        mnthInt=0;
        balance=strtBal;

        //Process/Map inputs to outputs
        for (int month=1;month<=nMonths;month++) {
            float deposit,//Amount of money deposited during the month.
                  withdrw;//Amount of money withdrawn during the month.
            cout<<"How much money did you deposit into your account during \n"
                <<month<<"?"<<endl;
            cin>>deposit;
            if (deposit<0) {
                cout<<"You cannot enter a negative value. Ending..."<<endl;
                return 0;
            }
            balance+=deposit;
            totDep+=deposit;
            cout<<"How much money did you withdraw from your account during \n"
                <<month<<"?"<<endl;
            cin>>withdrw;
            if (withdrw<0) {
                cout<<"You cannot enter a negative value. Ending..."<<endl;
                return 0;
            }
            balance-=withdrw;
            totWdrw+=withdrw;
            mnthInt=balance*(intRate/12);
            totInt+=mnthInt;
            balance+=mnthInt;//Adding the monthly interest to
                                                 //the balance
        }

        //output data
        cout<<"At the end of "<<nMonths<<" months, your savings account balance is:"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<"$"<<balance<<endl;
        cout<<"Total amount of deposits = $"<<totDep<<endl;
        cout<<"Total amount of withdrawals = $"<<totWdrw<<endl;
        cout<<"Total amount of interest earned = $"<<totInt<<endl;

        //Writing a final report to a file
        savBal<<"At the end of "<<nMonths<<" months, your savings account balance is:"<<endl;
        savBal<<fixed<<setprecision(2);
        savBal<<"$"<<balance<<endl;
        savBal<<"Total amount of deposits = $"<<totDep<<endl;
        savBal<<"Total amount of withdrawals = $"<<totWdrw<<endl;
        savBal<<"Total amount of interest earned = $"<<totInt<<endl;

        savBal.close();
        break;   
    }
    }
    }while (probNum>=1&&probNum<=10);
    
    //output data
    
            
    //Exit stage right!
    return 0;
}

