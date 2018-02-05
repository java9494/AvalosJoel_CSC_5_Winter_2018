/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 9:21 AM
 * Purpose: Create a program that finds the largest and smallest value in an
 * array.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int smlst(int [],int);
int lrgst(int [],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int array[SIZE];
    
    //Initialize Variables
    cout<<"Hello! Enter in 10 values for this array."<<endl;
    for (int count=0;count<SIZE;count++)
        cin>>array[count];
    
    //Process/Map inputs to outputs
    
            
    //output data
    smlst(array,SIZE);
    lrgst(array,SIZE);
            
    //Exit stage right!
    return 0;
}

int smlst(int a[],int n){
    int smlst=a[0];
    for(int count=0;count<n;count++){
        if (a[count]<smlst)
            smlst=a[count];
    }
    cout<<"The smallest number is: "<<smlst<<endl;
    return smlst;
}

int lrgst(int a[],int n){
    int lrgst=a[0];
    for(int count=0;count<n;count++){
        if (a[count]>lrgst)
            lrgst=a[count];
    }
    cout<<"The largest number is: "<<lrgst<<endl;
    return lrgst;
}