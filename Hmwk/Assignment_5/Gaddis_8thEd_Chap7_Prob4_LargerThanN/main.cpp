/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 9:32 AM
 * Purpose: Create a program that will display the numbers in an array
 * that are greater than the number n.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void lrgrN(int [],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE;
    cout<<"Enter in the size of an array."<<endl;
    cin>>SIZE;
    int array[SIZE];
    int n;
    
    //Initialize Variables
    cout<<"Fill the array with numbers."<<endl;
    for (int count=0;count<SIZE;count++)
        cin>>array[count];
    cout<<"Enter a number, n, and I will display the numbers in the array \n"
        <<"greater than that number."<<endl;
    cin>>n;
    
    
    
    //Process/Map inputs to outputs
    lrgrN(array,SIZE,n);
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

void lrgrN(int a[],int size,int n){
cout<<"Numbers in the array greater than "<<n<<": "<<endl;
    for (int count=0;count<size;count++){
        if (a[count]>n)
            cout<<a[count]<<" ";
    }
}