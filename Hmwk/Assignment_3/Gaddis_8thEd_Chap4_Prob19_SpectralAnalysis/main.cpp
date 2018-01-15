/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 14, 2018, 5:57 PM
 * Purpose: Create a program that will take a user inputed wavelength and then
 * determine what type of wave it is.
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
    const float RADIO=1e-2f,//Radiowaves
                MICROW=1e-3f,//Microwaves
                INFWAV=7e-7f,//Infrared waves
                VISLITE=4e-7f,//Visible light
                UV=1e-8f,//Ultraviolet light
                XRAY=1e-11f;//X-rays
    float wavelt;//The wavelength inputted by the user.
    
    //Input wavelength.
    cout<<"Hello! Please enter a wavelength (in meters) and I will determine\n"
        <<" what type of wave it is."<<endl;
    cin>>wavelt;
    
    //output data
    if (wavelt>=RADIO)
        cout<<"The wave is a radiowave."<<endl;
    else if (wavelt>=MICROW)
        cout<<"The wave is a microwave."<<endl;
    else if (wavelt>=INFWAV)
        cout<<"The wave is an infrared wave."<<endl;
    else if (wavelt>=VISLITE)
        cout<<"The wave is a visible light wave."<<endl;
    else if (wavelt>=UV)
        cout<<"The wave is a UV wave."<<endl;
    else if (wavelt>=XRAY)
        cout<<"The wave is an X-ray."<<endl;
    else
        cout<<"You did not enter a valid wavelength. Program ending."<<endl;
            
    //Exit stage right!
    return 0;
}

