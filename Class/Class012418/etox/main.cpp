/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 24, 2018, 10:20 AM
 * Purpose: etoX
 */
 
 //System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int n,nterms,fact;
    float etox,x;
    
    //Initialize Variables
    cout<<"This program solves the factorial e^x sequence"<<endl;
    cout<<"Input x and the number of terms in the sequence."<<endl;
    cout<<"Number of terms > 1"<<endl;
    cin>>x>>nterms;
    
    //Process/Map inputs to outputs
    etox=1;
    for(int n=1;n<nterms;n++){
        fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        etox+=pow(x,n)/fact;
    }
            
    //output data
    cout<<n<<"!="<<fact<<endl;
    cout<<"e^"<<x<<" = "<<etox<<" with "<<nterms<<" terms."<<endl;
    cout<<"e^"<<x<<" = "<<exp(x)<<" with the math library"<<endl;
            
    //Exit stage right!
    return 0;
}

