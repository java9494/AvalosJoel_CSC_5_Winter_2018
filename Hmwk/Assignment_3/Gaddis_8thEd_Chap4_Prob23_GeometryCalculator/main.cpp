/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 14, 2018, 6:31 PM
 * Purpose: Create a program that will display a menu, then calculate a few
 * geometrical problems.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const float PI=3.14159;
    int choice;
            
    
    //menu
    cout<<"Geometry Calculator"<<endl;
    cout<<" "<<endl;
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>choice;
    
    
    //menu choices
    if (choice == 1) {
        float area,
              radius;
        cout<<"Please enter the radius of the circle."<<endl;
        cin>>radius;
        area=PI*radius*radius;
        cout<<"The area of the circle is "<<area<<"."<<endl;    
    }
    else if (choice == 2) {
        float area,
              length,
              width;
        cout<<"Please enter the length and width of the rectangle."<<endl;
        cin>>length;
        cin>>width;
        area=length*width;
        cout<<"The area of the rectangle is "<<area<<"."<<endl;
    }    
    else if (choice == 3) {
        float base,
              height,
              area;
        cout<<"Please enter the length of the base and the height of the triangle"<<endl;
        cin>>base;
        cin>>height;
        area=base*height*.5;
        cout<<"The area of the triangle is "<<area<<"."<<endl;
    }
    else if (choice == 4)
        cout<<"You chose to end the program. Ending..."<<endl;
    else
        cout<<"You did not enter a valid choice. Program ending."<<endl;
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

