/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 17, 2018, 12:40 PM
 * Purpose: Create Body Mass Index calculator that tests a the BMI of
 * a sedentary individual.
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
    float bmi,//Body Mass Index
          weight,//In pounds
          height;//In inches
            
    
    //Initialize Variables
    cout<<"Body Mass Index calculator!"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Hello, please enter your weight in pounds."<<endl;
    cin>>weight;
    cout<<"Next, enter your height in inches."<<endl;
    cin>>height;
    cout<<"Calculating BMI..."<<endl;
    
    //Process/Map inputs to outputs
    bmi=weight*703/(height*height);
            
    //output data
    cout<<"Weight : "<<weight<<" lbs."<<endl;
    cout<<"Height: "<<height<<" in."<<endl;
    cout<<"Your Body Mass Index is "<<bmi<<"."<<endl;
    cout<<fixed<<setprecision(2)<<endl;
    if (bmi<18.5)
        cout<<"You are underweight for your BMI. Go eat a cheeseburger!\n"
            <<"Or a veggie burger!"<<endl;
    else if (bmi>25)
        cout<<"You are overweight for your BMI. Eat at a slight caloric deficit\n"
            <<"and get some exercise!"<<endl;
    else if (bmi>=18.5&&bmi<=25)
        cout<<"Your BMI is optimal for your weight and height. Congrats!"<<endl;
    else
        cout<<"You did not enter a valid height and weight. Ending program...\n";
            
    //Exit stage right!
    return 0;
}

