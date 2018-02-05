/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 10:05 AM
 * Purpose: Create a program that keeps track of 3 monkey's eating habits.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLS=5;//Number of columns in the 2-D array.

//Function Prototypes
void lstFood(float [][COLS],int);
void mstFood(float [][COLS],int);
void avgFood(float [][COLS],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=3;//Number of rows in the 2-D array
    float mnkFood[ROWS][COLS];
    int monkey,//counter for monkey
            day;//counter of column
    
    //Initialize Variables
    for (monkey=0;monkey<ROWS;monkey++){
        if (monkey==0)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        if (monkey==1)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        if (monkey==2)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        for (day=0;day<COLS;day++){
            cin>>mnkFood[monkey][day];
            if (mnkFood[monkey][day]<0){
                cout<<"Not a valid input, ending program."<<endl;
                        return 0;
            }              
        }
    }
    
    //Process/Map inputs to outputs
    
            
    //output data
    avgFood(mnkFood,ROWS);
    lstFood(mnkFood,ROWS);
    mstFood(mnkFood,ROWS);
            
    //Exit stage right!
    return 0;
}

void lstFood(float mnky[][COLS],int rows){
    float lstFood=mnky[0][0];
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (lstFood>mnky[x][y])
                lstFood=mnky[x][y];
        }
    }
    cout<<"The least amount of food eaten this week was: "<<lstFood<<" lbs. "<<endl;
}

void mstFood(float mnky[][COLS],int rows){
    float mstFood=mnky[0][0];
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (mstFood<mnky[x][y])
                mstFood=mnky[x][y];
        }
    }
    cout<<"The most amount of food eaten this week was: "<<mstFood<<" lbs."<<endl;
}

void avgFood(float mnky[][COLS],int rows){
    float avgFood=0;
    float total=0;
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            total+=mnky[x][y];
        }
    }
    avgFood=total/(rows+COLS);
    cout<<"The average number of food ate by the monkeys this week is: "<<avgFood<<" lbs."<<endl;
}