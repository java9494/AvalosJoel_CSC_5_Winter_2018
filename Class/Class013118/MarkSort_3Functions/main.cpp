/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 31, 2018, 10:18 AM
 * Purpose: Standard deviation
 */
 
 //System Libraries
#include <iostream> //I/O Library
#include <cstdlib>//contains the srand
#include <ctime>    //Time
#include <cmath>    //Math Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void fillAry(float [],int);
void prntAry(float [],int,int);
void mrkSort(float [],int);
void smlSwap(float &a, float &b,float [],int n,int pos);
void copy (float [], float[]);

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    float x[SIZE];
    
    //Fill le Array
    fillAry(x,SIZE);
            
    //Output le data
    prntAry(x,SIZE,10);
    
    //Smallswap
    smlSwap(x[0],x[99])
    
    /*//Swap 0<->99
    swap(x[0],x[99]);
    
    //Smallest in list
    smlst(x,SIZE,1);
    smlst(x,SIZE,2);
    smlst(x,SIZE,3);
    smlst(x,SIZE,4);*/
    
    //Sort
    mrkSort(x,SIZE);
    
    //Output le data
    prntAry(x,SIZE,10);
            
    //Exit stage right!
    return 0;
}

void copy (float a[], float b[],int n){
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
    
}

/*void mrkSort(float a[],int n){
for (int i=0;i<n-1;i++){
    smlSwap(a,n,i);
    }   
}*/

void swap(&a,&b,float swap[],int n,int pos){
    float temp=a;
    a=b;
    b=temp;
 for (int i=pos+1;i<n;i++){
    if (a[pos]>a[i])swap(a[pos],a[i]);
    }   
}

void prntAry(float array[],int n,int nCols){
cout<<endl;
for (int i=0;i<n;i++){
    cout<<array[i]<<" ";
    if (i%nCols==(nCols-1))cout<<endl;
    }
cout<<endl;
}

void fillAry(float array[],int n){
    for (int i=0;i<n;i++){
        array[i]=rand()%90+10;//[10,99]
    }
}

