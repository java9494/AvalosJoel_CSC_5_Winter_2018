/* 
 * File:   main.cpp
 * Cuthor: Joel Cvalos
 * Created on January 29, 2018, 9:48 CM
 * Purpose: Create a limited version of MineSweeper.
 */
 
 //System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Crray Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool mine;//Mine or not
    unsigned short int clrd1,clrd2,clrd3,clrd4,clrd5,clrd6;
    char row;
    unsigned short int spot,
            spotA1,spotA2,spotA3,spotA4,spotA5,spotA6,
            spotB1,spotB2,spotB3,spotB4,spotB5,spotB6,
            spotC1,spotC2,spotC3,spotC4,spotC5,spotC6,
            spotD1,spotD2,spotD3,spotD4,spotD5,spotD6;
    
    //Initialize Variables
    mine=false;
    clrd1=clrd2=clrd3=clrd4=clrd5=clrd6=0;
    spotA1=rand(); spotA2=rand(); spotA3=rand(); spotA4=rand();
    spotA5=rand(); spotA6=rand();
    spotB1=rand(); spotB2=rand(); spotB3=rand(); spotB4=rand(); spotB5=rand();
    spotB6=rand();
    spotC1=rand(); spotC2=rand(); spotC3=rand(); spotC4=rand(); spotC5=rand();
    spotC6=rand();
    spotD1=rand(); spotD2=rand(); spotD3=rand(); spotD4=rand(); spotD5=rand(); 
    spotD6=rand(); 
    
    //Process/Map inputs to outputs
    cout<<"BUGSWEEPER "<<endl;
          
    //output data
    for (int count=1;count<=24;count++) {
        cout<<"X ";
        if (count%6==0)
            cout<<endl;
    }
    
    cin>>row>>spot;
    do {    
        if (row=='A'){
            if (spot>=1&&spot<=6) {
                for (int count=1;count<=24;count++) {
                    if (count==clrd1){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrd2){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrd3){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrd4){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrd5){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrd6){
                        cout<<"O "<<endl;
                        count++;
                    }
                    
                    if (count==spot) {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotA2;
                            clrd1=count;
                        }
                        if (spot==2){
                            spot=spotA2;
                            clrd2=count;
                        }
                        if (spot==3){
                            spot=spotA3;
                            clrd3=count;
                        }
                        if (spot==4){
                            spot=spotA4;
                            clrd4=count;
                        }
                        if (spot==5){
                            spot=spotA5;
                            clrd5=count;
                        }
                        if (spot==6){
                            spot=spotA6;
                            clrd6=count;
                        }
                        if (spot%3==0){//MINE TEST
                            mine=true;
                            cout<<"B ";
                            if (count%6==0)
                                cout<<endl;
                        }
                        else {
                            cout<<"O ";
                            if (count%6==0)
                                cout<<endl;
                        }
                    }
                    else if (count!=clrd1||count!=clrd2||count!=clrd3||count!=clrd4||count!=clrd5||count!=clrd6) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
                }
               if (mine!=true) 
                   cin>>row>>spot;
            }           
        }
        if (mine==true)
                        cout<<"Game ogre bud!";
    } while(row!='e'&&mine!=true);
   
    //Exit stage right!
    return 0;
}

