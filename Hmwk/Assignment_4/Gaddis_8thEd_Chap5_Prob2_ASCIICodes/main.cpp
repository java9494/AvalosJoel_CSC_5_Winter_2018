/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 20, 2018, 3:15 PM
 * Purpose: Create a program that loops to display the ASCII codes 0 to 127.
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
    //output data
    
            
    //Exit stage right!
    return 0;
}

