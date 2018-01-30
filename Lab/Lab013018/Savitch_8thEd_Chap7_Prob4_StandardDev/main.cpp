/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 30, 2018, 1:04 PM
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
float zeroOne();
float mean(float [],int);
float stdDev(float [],int);
float stdNorm();
void fillAry(float [],int);

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
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"N("<<mean(x,SIZE)
            <<","<<stdDev(x,SIZE)
            <<")"<<endl;   
            
    //Exit stage right!
    return 0;
}

void fillAry(float array[],int n){
    for (int i=0;i<n;n++){
        array[i]=stdNorm();
    }
}

float stdNorm(){
    //Declare a sum
    float sum=0.0f;
    
    //Sum 12 [0,1] Random Variables
    for (int i=1;i<=12;i++){
        sum+=zeroOne();
    }
    //Return the centered result
    return sum-6;//[-6,6]
}

float stdDev(float array[],int n){
    //Declare a sum and initialize
    float sum=0.0f;
    float avg=mean(array,n);
    //Loop
    for (int i=0;i<n;i++){
        sum+=pow(array[i]-avg,2);
    }
    //Results
    return sqrt(sum/(n-1));
}

float mean(float array[],int n){
    //Declare a sum and initialize
    float sum=0.0f;
    
    //Loop
    for (int i=0;i<n;i++){
        sum+=array[i];
    }
    //Results
    return sum/n;
}

float zeroOne(){
    static const unsigned int MAXRAND=(1<<31)-1;
    float random=static_cast<float>(rand())/MAXRAND;//Range [0,1]
    return random;
}