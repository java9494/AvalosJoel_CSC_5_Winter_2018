/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 16th, 2018, 12:31 PM
 * Purpose:  Menu for Assignment 3.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Assignment 3 Problems"<<endl;
    cout<<"Choose from the following Menu"<<endl;
    cout<<"-----------"<<endl;
    cout<<"Problem 1 -> Gaddis_8thEd_Chap4_Prob11_MathTutorUpdated"<<endl;
    cout<<"Problem 2 -> Gaddis_8thEd_Chap4_Prob1_MinimumMaximum"<<endl;
    cout<<"Problem 3 -> Gaddis_8thEd_Chap4_Prob5_BodyMassIndex"<<endl;
    cout<<"Problem 4 -> Gaddis_8thEd_Chap4_Prob8_ColorMixer"<<endl;
    cout<<"Problem 5 -> Gaddis_8thEd_Chap4_Prob18_FatGramCalculator"<<endl;
    cout<<"Problem 6 -> Gaddis_8thEd_Chap4_Prob19_SpectralAnalysis"<<endl;
    cout<<"Problem 7 -> Gaddis_8thEd_Chap4_Prob21_SpeedSoundGas"<<endl;
    cout<<"Problem 8 -> Gaddis_8thEd_Chap4_Prob22_FrzBoilPoints"<<endl;
    cout<<"Problem 9 -> Gaddis_8thEd_Chap4_Prob23_GeometryCalculator"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
    unsigned short int number1, number2,//2 random numbers to be added together.
                       sum,//The sum of the two numbers.
                       answer;//What the user believes the answer to be.
    const unsigned short MINVALU=1;
    const unsigned short MAXVALU=999;
    
    //Seed the random number generator.
    unsigned seed = time(0);//Randomizing the numbers each time.
    srand(seed);
    
    //Initialize Variables
    number1= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
    number2= (rand() % (MAXVALU - MINVALU + 1)) + MINVALU;
    //This formula is to limit the randomized numbers into a 3 digit range.
   
    //Process/Map inputs to outputs
    sum=number1+number2;
            
    //output data
    cout<<"This is a program to practice adding two numbers together.\n"
        <<"A problem will display, and when ready, input the answer."<<endl;
    cout<<number1<<endl;
    cout<<"+"<<number2<<endl;
    cout<<"----"<<endl;
    cin>>answer;
    
    //If the answer inputted is correct.
    if (answer == sum) {
        cout<<"Good job! That's the right answer!"<<endl;
        break;
    }
   
    //If the answer inputted is incorrect.
    else 
    {
        cout<<"That is the incorrect answer, this is the correct answer:"<<endl;
        cout<<number1<<endl;
        cout<<"+"<<number2<<endl;
        cout<<"----"<<endl;
        cout<<setw(4);
        cout<<sum;
            break;
    }
        }    
        case 2: {
            //Declare Variables
            int num1, num2;//Two numbers are used.
    
            //Initialize Variables
    
    
            //Input two numbers
            cout<<"Hello! Enter two numbers and I will tell you which one is greater.\n";
            cin>>num1;
            cin>>num2;
            
            //output data
            if (num1==num2)
                cout<<"Please enter two different numbers."<<endl;
            else
                num1>num2?cout<<num1<<" is greater.":cout<<num2<<" is greater.";
            break;
                }
        case 3: {
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
            break;
        }
        case 4: {
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
            break;
        }
        case 5: {
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
                break;
            }
            break;
        }
        case 6: {
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
        }
        break;
        case 7: {
            //Declare Variables
            const float CO2=258.0,//Speed of sound in Carbon Dioxide in meters
                        AIR=331.5,//Speed of sound in air in meters 
                        HELIUM=972.0,//Speed of sound in helium in meters
                        HYDROGN=1270.0;//Speed of sound in hydrogen in meters
            float time,
                  dstnce;
            int choice;

            //Menu for Selection
            cout<<"Speed of Sound in Gas Calculator"<<endl;
            cout<<"----------------------"<<endl;
            cout<<"Choose an option."<<endl;
            cout<<"1. Carbon Dioxide"<<endl;
            cout<<"2. Air"<<endl;
            cout<<"3. Helium"<<endl;
            cout<<"4. Hydrogen"<<endl;
            cin>>choice;

            //Output Selection
            switch (choice){
                case 1: {
                    cout<<"Please enter the number of seconds that the sound traveled\n"
                        <<" in between the range of 0 to 30."<<endl;
                    cin>>time;
                    dstnce=time*CO2;
                    if (time<0||time>30)
                        cout<<"That is not a valid time range. Ending program..."<<endl;
                    else 
                        cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                        break;
                    }
                case 2: {
                    cout<<"Please enter the number of seconds that the sound traveled\n"
                        <<" in between the range of 0 to 30."<<endl;
                    cin>>time;
                    dstnce=time*AIR;
                    if (time<0||time>30)
                        cout<<"That is not a valid time range. Ending program..."<<endl;
                    else 
                        cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                        break;
                }
                case 3: {
                    cout<<"Please enter the number of seconds that the sound traveled\n"
                        <<" in between the range of 0 to 30."<<endl;
                    cin>>time;
                    dstnce=time*HELIUM;
                    if (time<0||time>30)
                        cout<<"That is not a valid time range. Ending program..."<<endl;
                    else 
                        cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                        break;
                }
                case 4: {
                    cout<<"Please enter the number of seconds that the sound traveled\n"
                        <<" in between the range of 0 to 30."<<endl;
                    cin>>time;
                    dstnce=time*HYDROGN;
                    if (time<0||time>30)
                        cout<<"That is not a valid time range. Ending program..."<<endl;
                    else 
                        cout<<"The sound traveled "<<dstnce<<" meters."<<endl;
                        break;
                }
                default: cout<<"You did not enter a valid choice. Closing program..."<<endl;
            }
        break;
        }
        case 8: {
            //Declare Variables
            float temp;

            //Input temperature
            cout<<"Please enter a temperature in degrees Fahrenheit, \n"
                <<"and I will list a few substances that will either \n"
                <<"freeze or boil at that temperature."<<endl;
            cin>>temp;


            //Process/Map inputs to outputs


            //Chemicals that will freeze
            cout<<"These chemicals will freeze at "<<temp<<" degrees Fahrenheit:"<<endl;
            cout<<"-------------------"<<endl;
            if (temp<=-173)
                cout<<"Ethyl alcohol"<<endl;
            if (temp<=-38)
                cout<<"Mercury"<<endl;
            if (temp<=-362)
                cout<<"Oxygen"<<endl;
            if (temp<=32)
                cout<<"Water"<<endl;

            //Chemicals that will boil
            cout<<"These chemicals will boil at "<<temp<<" degrees Fahrenheit:"<<endl;
            cout<<"-------------------"<<endl;
            if (temp>=172)
                cout<<"Ethyl alcohol"<<endl;
            if  (temp>=676)
                cout<<"Mercury"<<endl;
            if (temp>=-306)
                cout<<"Oxygen"<<endl;
            if (temp>=212)
                cout<<"Water"<<endl;
            break;
        }
        case 9: {
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
                cout<<"You did not enter a valid choice. Program ending."<<endl;break;
        }
                
    default:cout<<"You choose to exit."<<endl;
    }
   
    //Exit
    return 0;
}

