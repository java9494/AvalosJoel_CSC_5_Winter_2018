/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 1:10 PM
 * Purpose: Create a program that will search combinations of lottery numbers
 * for a winning combination.
 * v2: This time, using a binary search algorithm.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void sort(int [],int);
void binSrch(int [],int,int);

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
    sort (lotNums,SIZE);
    binSrch(lotNums,SIZE,winNum);
            
    //output data
            
    //Exit stage right!
    return 0;
}

void sort(int a[],int n){
    int temp;
    for (int count=0;count<(n-1);count++){
        if (a[count]>a[count+1]){
            temp=a[count];
            a[count]=a[count+1];
            a[count+1]=temp;           
        }           
    }   
}

void binSrch(int a[],int n,int value){
    int first=0;
    int last=n-1;
    int middle;
    bool found=false;
    int pos=-1;
    while (!found&&first<=last){
        middle=(first+last)/2;
        if (a[middle]==value){
            found=true;
            pos=middle;
            cout<<"You have a winning combination of "<<a[middle]<<"\n"
                <<"at position "<<pos<<"! Congrats!"<<endl;
        }
        else if (a[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    if (!found)
        cout<<"Sorry, there is not a winning ticket this week."<<endl;
}