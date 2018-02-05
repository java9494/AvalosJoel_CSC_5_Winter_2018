/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 2:09 PM
 * Purpose: Create a program that lets the user enter a charge account number,
 * and then validate that number.
 * v2: This time, validate the number using a selection sorted binary search.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void selSort(int [],int);
void binSrch(int [],int,int);

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
    /*for (int count=0;count<SIZE;count++){
        if (accNums[count]==accNum){
            cout<<"That is a valid number, found at position "<<count<<"."<<endl;
            found=true;
        }
        else if (count==SIZE-1&&!found)
            cout<<"Sorry, that number is invalid."<<endl;
    }*/
            
    //output data
    selSort(accNums,SIZE);
    binSrch(accNums,SIZE,accNum);
            
    //Exit stage right!
    return 0;
}

void selSort(int a[],int n){
    int scan,minDex,minValu;
    for (scan=0;scan<(n-1);scan++){
        minDex=scan;
        minValu=a[scan];
        for (int index=scan+1;index<n;index++){
            if (a[index]<minValu){
                minValu=a[index];
                minDex=index;
            }
        }
        a[minDex]=a[scan];
        a[scan]=minValu;
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
            cout<<"That is a valid number, found at position "<<pos<<"."<<endl;
        }
        else if (a[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    if (!found)
        cout<<"Sorry, that number is invalid."<<endl;
}