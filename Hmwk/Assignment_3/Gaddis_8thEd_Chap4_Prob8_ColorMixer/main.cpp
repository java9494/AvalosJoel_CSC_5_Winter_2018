/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 17, 2018, 1:01 PM
 * Purpose: Create a program that will give the user the secondary color
 * that two primary colors create.
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
    string choice1,choice2,//The user's choices
         red,blue,yellow;//The primary colors
    
    //Initialize Variables
    cout<<"Color Mixing Program! GoGoGO!!!!"<<endl;
    cout<<"Enter a choice of two of the primary colors:"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"red, blue, yellow (case sensitive!)"<<endl;
    cout<<"And I will mix them and tell you what color you made!"<<endl;
    cin>>choice1;
    cin>>choice2;
    
    //Process/Map inputs to outputs
            
    //output data
    if (choice1=="red"&&choice2=="blue")
        cout<<"Whoooaaoaa! You just made PURPLE. Excellent!"<<endl;
    else if (choice1=="blue"&&choice2=="red")
        cout<<"Whoooaaoaa! You just made PURPLE. Excellent!"<<endl;
    else if (choice1=="blue"&&choice2=="yellow")
        cout<<"Yowza! You just made GREEN. Incredible!"<<endl;
    else if (choice1=="yellow"&&choice2=="blue")
        cout<<"Yowza! You just made GREEN. Incredible!"<<endl;
    else if (choice1=="yellow"&&choice2=="red")
        cout<<"Wowie Zowie! You made ORANGE. Gnarly!"<<endl;
    else if (choice1=="red"&&choice2=="yellow")
        cout<<"Wowie Zowie! You made ORANGE. Gnarly!"<<endl;
     else
        cout<<"Yikes! You entered in something funky. Try again!"<<endl; 
            
    //Exit stage right!
    return 0;
}

