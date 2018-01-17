/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 17, 2018, 1:30 PM
 * Purpose: Create a fat percentage calculator for any type of food. 
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
    float fatprct,//The percentage of calories that are fat
          calories,//The calories in a food
          fatcal,//Number of fat calories
          fatGram;//The grams od dat in a food
    
    //Initialize Variables
    cout<<"Percentage of calories that come from Fat CALCULATOR"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Hello, please enter the number of grams of fat."<<endl;
    cin>>fatGram;
    cout<<"Next, enter the number of calories."<<endl;
    cin>>calories;
    
    
    //Process/Map inputs to outputs
    fatcal=fatGram*9;
    fatprct=fatcal/calories*100.0f;
            
    //output data
    if (calories<0||fatGram<0)
        cout<<"Error, you entered in something wrong!"<<endl;
    else if (fatcal>calories)
        cout<<"Error! The number of fat calories is greater than the number\n"
            <<"of total calories! Try again."<<endl;
    else {
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"-----------------------"<<endl;
        cout<<"The percentage of calories that are fat = %"<<fatprct<<endl;
        if (fatprct<30)
        cout<<"This food is low in fat! Hooray!"<<endl;
    }
            
    //Exit stage right!
    return 0;
}

