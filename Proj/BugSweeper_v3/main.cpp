/* 
 * File:   main.cpp
 * Cuthor: Joel Cvalos
 * Created on January 31, 2018, 9:45 AM
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
    unsigned short int clrdA1,clrdA2,clrdA3,clrdA4,clrdA5,clrdA6,
            clrdB1,clrdB2,clrdB3,clrdB4,clrdB5,clrdB6,
    clrdC1,clrdC2,clrdC3,clrdC4,clrdC5,clrdC6,
    clrdD1,clrdD2,clrdD3,clrdD4,clrdD5,clrdD6;
    char row;
    unsigned short int spot,
            spotA1,spotA2,spotA3,spotA4,spotA5,spotA6,
            spotB1,spotB2,spotB3,spotB4,spotB5,spotB6,
            spotC1,spotC2,spotC3,spotC4,spotC5,spotC6,
            spotD1,spotD2,spotD3,spotD4,spotD5,spotD6;
    
    //Initialize Variables
    mine=false;
    clrdA1=clrdA2=clrdA3=clrdA4=clrdA5=clrdA6=0;
    clrdB1=clrdB2=clrdB3=clrdB4=clrdB5=clrdB6=0;
    clrdC1=clrdC2=clrdC3=clrdC4=clrdC5=clrdC6=0;
    clrdD1=clrdD2=clrdD3=clrdD4=clrdD5=clrdD6=0;
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
        for (int count=1;count<=6;count++) {
            //Checking A row
                    if (count==clrdA1){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdA2){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdA3){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdA4){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdA5){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdA6){
                        cout<<"O "<<endl;
                        count++;
                    }                   
                    if (count==spot&&row=='A') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotA1;
                            clrdA1=count;
                        }
                        if (spot==2){
                            spot=spotA2;
                            clrdA2=count;
                        }
                        if (spot==3){
                            spot=spotA3;
                            clrdA3=count;
                        }
                        if (spot==4){
                            spot=spotA4;
                            clrdA4=count;
                        }
                        if (spot==5){
                            spot=spotA5;
                            clrdA5=count;
                        }
                        if (spot==6){
                            spot=spotA6;
                            clrdA6=count;
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
                    else if (count<7&&(count!=clrdA1||count!=clrdA2||count!=clrdA3||count!=clrdA4||count!=clrdA5||count!=clrdA6)) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
        }
                    //Checking B row
        for (int count=1;count<=6;count++){
                    if (count==clrdB1){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdB2){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdB3){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdB4){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdB5){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdB6){
                        cout<<"O "<<endl;
                        count++;
                    }
                    
                    if (count==spot&&row=='B') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotB1;
                            clrdB1=count;
                        }
                        if (spot==2){
                            spot=spotB2;
                            clrdB2=count;
                        }
                        if (spot==3){
                            spot=spotB3;
                            clrdB3=count;
                        }
                        if (spot==4){
                            spot=spotB4;
                            clrdB4=count;
                        }
                        if (spot==5){
                            spot=spotB5;
                            clrdB5=count;
                        }
                        if (spot==6){
                            spot=spotB6;
                            clrdB6=count;
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
                    else if (count<7&&(count!=clrdB1||count!=clrdB2||count!=clrdB3||count!=clrdB4||count!=clrdB5||count!=clrdB6)) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
        }
                    //Checking C row
        for (int count=1;count<=6;count++){
                    if (count==clrdC1){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdC2){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdC3){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdC4){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdC5){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdC6){
                        cout<<"O "<<endl;
                        count++;
                    }
                    
                    if (count==spot&&row=='C') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotC1;
                            clrdC1=count;
                        }
                        if (spot==2){
                            spot=spotC2;
                            clrdC2=count;
                        }
                        if (spot==3){
                            spot=spotC3;
                            clrdC3=count;
                        }
                        if (spot==4){
                            spot=spotC4;
                            clrdC4=count;
                        }
                        if (spot==5){
                            spot=spotC5;
                            clrdC5=count;
                        }
                        if (spot==6){
                            spot=spotC6;
                            clrdC6=count;
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
                    else if (count<7&&(count!=clrdC1||count!=clrdC2||count!=clrdC3||count!=clrdC4||count!=clrdC5||count!=clrdC6)) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
                }
        //Checking D row
        for (int count=1;count<=6;count++){
                    if (count==clrdD1){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdD2){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdD3){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdD4){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdD5){
                        cout<<"O ";
                        count++;
                    }
                    if (count==clrdD6){
                        cout<<"O "<<endl;
                        count++;
                    }
                    
                    if (count==spot&&row=='D') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotD1;
                            clrdD1=count;
                        }
                        if (spot==2){
                            spot=spotD2;
                            clrdD2=count;
                        }
                        if (spot==3){
                            spot=spotD3;
                            clrdD3=count;
                        }
                        if (spot==4){
                            spot=spotD4;
                            clrdD4=count;
                        }
                        if (spot==5){
                            spot=spotD5;
                            clrdD5=count;
                        }
                        if (spot==6){
                            spot=spotD6;
                            clrdD6=count;
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
                    else if (count<7&&(count!=clrdD1||count!=clrdD2||count!=clrdD3||count!=clrdD4||count!=clrdD5||count!=clrdD6)) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
                }
               if (mine!=true) 
                   cin>>row>>spot;
                if (mine==true)
                    cout<<"Game ogre bud!";                  
    } while(row!='e'&&mine!=true);
   
    //Exit stage right!
    return 0;
}

