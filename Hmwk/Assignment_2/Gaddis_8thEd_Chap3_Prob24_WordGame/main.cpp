/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 12, 2018, 2:06 PM
 * Purpose: Create a Word Game program.
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
    string name,//His/her name
           age,//His/her age
           city,//Name of a city
           college,//Name of a college
           prfsn,//Profession
           animal,//A type of animal
           petname;//Name of a pet
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
    
            
    //Ask the user for the information needed to play the game.
    cout<<"Hello! Please enter the following information:"<<endl;
    cout<<"Your name."<<endl;
    getline(cin, name);
    cout<<"Your age."<<endl;
    getline(cin, age);
    cout<<"The name of a city."<<endl;
    getline(cin, city);
    cout<<"The name of a college."<<endl;
    getline(cin, college);
    cout<<"A type of profession."<<endl;
    getline(cin, prfsn);
    cout<<"A type of animal."<<endl;
    getline(cin, animal);
    cout<<"A pet's name."<<endl;
    getline(cin, petname);
    
    //output data
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<".\n"
        <<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<". "
        <<name<<" graduated and went to work \n"<<"as a "<<prfsn<<". Then, "
        <<name<<" adopted a(n) "<<animal<<" named "<<petname<<". \n"
        <<"They both lived happily ever after!"<<endl;
            
    //Exit stage right!
    return 0;
}

