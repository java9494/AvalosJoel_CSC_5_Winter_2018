/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 23, 2018, 5:46 PM
 * Purpose: Create two loops that each display a pattern.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    
    //Initialize Variables
    
    
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
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

