/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 7:01 PM
 * Purpose: Create a limited version of MineSweeper.
 * v3: Changing the O's to numbers signifying the number of adjacent mines to a
 * space.
 * v4: Adding the win condition.
 */
 
 //System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int COLS=10;

//Function Prototypes
void bugTest(int [],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool mine;//Mine or not
    bool gameWin;//Win condition of the game
    string title;//Game title
    int choice;//User choice for menu
    int ROWS=6;
    unsigned short int cleared;//The number of spaces the user has cleared
            int clrd[ROWS][COLS];
    char row;//User-inputted choice for the row that the space they want to clear is in
    unsigned short int spot;//User-inputted choice for the space they want to clear
            int spots[ROWS][COLS];
    unsigned short int nMines,//The number of mines next to a space
            nBugs;//The total number of bugs in the game
            int nMines[ROWS][COLS];
    
    do{
    
    //Initialize Variables
    mine=false;//Setting initial mine test to false
    gameWin=false;//Setting the initial gameWin condition to false
    cleared=0;//Number of initial cleared spaces
    nBugs=0;//Initial number of bugs (before randomizing)
    title="BugSweeper";
    for (int x=0;x<ROWS;x++){
        for (int y=0;y<COLS<y++){
            clrd[x][y]=0;
        }
    }
    
    clrdA1=clrdA2=clrdA3=clrdA4=clrdA5=clrdA6=0;//Setting the cleared space check to 0
    clrdB1=clrdB2=clrdB3=clrdB4=clrdB5=clrdB6=0;
    clrdC1=clrdC2=clrdC3=clrdC4=clrdC5=clrdC6=0;
    clrdD1=clrdD2=clrdD3=clrdD4=clrdD5=clrdD6=0;
    spotA1=rand(); spotA2=rand(); spotA3=rand(); spotA4=rand();//Randomizing the grid
    spotA5=rand(); spotA6=rand();
    spotB1=rand(); spotB2=rand(); spotB3=rand(); spotB4=rand(); spotB5=rand();
    spotB6=rand();
    spotC1=rand(); spotC2=rand(); spotC3=rand(); spotC4=rand(); spotC5=rand();
    spotC6=rand();
    spotD1=rand(); spotD2=rand(); spotD3=rand(); spotD4=rand(); spotD5=rand(); 
    spotD6=rand();
    nMineA1=nMineA2=nMineA3=nMineA4=nMineA5=nMineA6=
            nMineB1=nMineB2=nMineB3=nMineB4=nMineB5=nMineB6=
            nMineC1=nMineC2=nMineC3=nMineC4=nMineC5=nMineC6=
            nMineD1=nMineD2=nMineD3=nMineD4=nMineD5=nMineD6=0;//Setting the initial mine-clue checker vals to 0
    
    //Calculate win condition
    if (spotA1%3==0)//If the randomized number assigned to a space is divided cleanly by 3
        nBugs++;    //(no remainder), then that spot is considered a bug.
    if (spotA2%3==0)
        nBugs++;
    if (spotA3%3==0)
        nBugs++;
    if (spotA4%3==0)
        nBugs++;
    if (spotA5%3==0)
        nBugs++;
    if (spotA6%3==0)
        nBugs++;
    if (spotB1%3==0)
        nBugs++;
    if (spotB2%3==0)
        nBugs++;
    if (spotB3%3==0)
        nBugs++;
    if (spotB4%3==0)
        nBugs++;
    if (spotB5%3==0)
        nBugs++;
    if (spotB6%3==0)
        nBugs++;
    if (spotC1%3==0)
        nBugs++;
    if (spotC2%3==0)
        nBugs++;
    if (spotC3%3==0)
        nBugs++;
    if (spotC4%3==0)
        nBugs++;
    if (spotC5%3==0)
        nBugs++;
    if (spotC6%3==0)
        nBugs++;
    if (spotD1%3==0)
        nBugs++;
    if (spotD2%3==0)
        nBugs++;
    if (spotD3%3==0)
        nBugs++;
    if (spotD4%3==0)
        nBugs++;
    if (spotD5%3==0)
        nBugs++;
    if (spotD6%3==0)
        nBugs++;          
 
    //Start Menu
    cout<<setw(5)<<" "<<title<<endl;
    cout<<setw(5)<<" "<<"----------"<<endl;
    cout<<"Welcome! Choose an option:"<<endl;
    cout<<"1. Play the Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit"<<endl;
    cin>>choice;
    
    switch (choice) {
        case 1: {
    //This is the starting grid
    for (int count=1;count<=24;count++) {
        if (count==1)
            cout<<"A ";
        if (count==7)
            cout<<"B ";
        if (count==13)
            cout<<"C ";
        if (count==19)
            cout<<"D ";
        cout<<"X ";
        if (count%6==0)
            cout<<endl;
    }
    cout<<"  1 2 3 4 5 6"<<endl;
 
    cin>>row>>spot;
    do { 
        for (int count=1;count<=6;count++) {
            //Checking A row
            nMines=0;
                    if (count==clrdA1){
                        cout<<nMineA1<<" ";
                        count++;
                        
                    }
                    if (count==clrdA2){
                        cout<<nMineA2<<" ";
                        count++;
                        
                    }
                    if (count==clrdA3){
                        cout<<nMineA3<<" ";
                        count++;
                        
                    }
                    if (count==clrdA4){
                        cout<<nMineA4<<" ";
                        count++;
                        
                    }
                    if (count==clrdA5){
                        cout<<nMineA5<<" ";
                        count++;
                        
                    }
                    if (count==clrdA6){
                        cout<<nMineA6<<" "<<endl;
                        count++;
                        
                    }                   
                    if (count==spot&&row=='A') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotA1;
                            clrdA1=count;
                            if (spotA2%3==0)
                                nMines++;
                            if (spotB1%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            nMineA1=nMines;
                        }
                        if (spot==2){
                            spot=spotA2;
                            clrdA2=count;
                            if (spotA1%3==0)
                                nMines++;
                            if (spotA3%3==0)
                                nMines++;
                            if (spotB1%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            nMineA2=nMines;
                        }
                        if (spot==3){
                            spot=spotA3;
                            clrdA3=count;
                            if (spotA2%3==0)
                                nMines++;
                            if (spotA4%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            nMineA3=nMines;
                        }
                        if (spot==4){
                            spot=spotA4;
                            clrdA4=count;
                            if (spotA3%3==0)
                                nMines++;
                            if (spotA5%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            nMineA4=nMines;
                        }
                        if (spot==5){
                            spot=spotA5;
                            clrdA5=count;
                            if (spotA4%3==0)
                                nMines++;
                            if (spotA6%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotB6%3==0)
                                nMines++;
                            nMineA5=nMines;
                        }
                        if (spot==6){
                            spot=spotA6;
                            clrdA6=count;
                            if (spotA5%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotB6%3==0)
                                nMines++;
                            nMineA6=nMines;
                        }
                        if (spot%3==0){//MINE TEST
                            mine=true;
                            cout<<"B ";
                            if (count%6==0)
                                cout<<endl;
                        }
                        else {
                            cout<<nMines<<" ";
                            if (count%6==0)
                                cout<<endl;
                            cleared++;
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
            nMines=0;
                    if (count==clrdB1){
                        cout<<nMineB1<<" ";
                        count++;
                        
                    }
                    if (count==clrdB2){
                        cout<<nMineB2<<" ";
                        count++;
                        
                    }
                    if (count==clrdB3){
                        cout<<nMineB3<<" ";
                        count++;
                        
                    }
                    if (count==clrdB4){
                        cout<<nMineB4<<" ";
                        count++;
                        
                    }
                    if (count==clrdB5){
                        cout<<nMineB5<<" ";
                        count++;
                       
                    }
                    if (count==clrdB6){
                        cout<<nMineB6<<" "<<endl;
                        count++;
                        
                    }
                    
                    if (count==spot&&row=='B') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotB1;
                            clrdB1=count;
                            if (spotA1%3==0)
                                nMines++;
                            if (spotA2%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotC1%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            nMineB1=nMines;
                        }
                        if (spot==2){
                            spot=spotB2;
                            clrdB2=count;
                            if (spotA1%3==0)//Mine clue checker
                                nMines++;
                            if (spotA2%3==0)
                                nMines++;
                            if (spotA3%3==0)
                                nMines++;
                            if (spotB1%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotC1%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            nMineB2=nMines;
                        }
                        if (spot==3){
                            spot=spotB3;
                            clrdB3=count;
                            if (spotA2%3==0)//Mine clue checker
                                nMines++;
                            if (spotA3%3==0)
                                nMines++;
                            if (spotA4%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            nMineB3=nMines;
                        }
                        if (spot==4){
                            spot=spotB4;
                            clrdB4=count;
                            if (spotA3%3==0)//Mine clue checker
                                nMines++;
                            if (spotA4%3==0)
                                nMines++;
                            if (spotA5%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            nMineB4=nMines;
                        }
                        if (spot==5){
                            spot=spotB5;
                            clrdB5=count;
                            if (spotA4%3==0)//Mine clue checker
                                nMines++;
                            if (spotA5%3==0)
                                nMines++;
                            if (spotA6%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotB6%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotC6%3==0)
                                nMines++;
                            nMineB5=nMines;
                        }
                        if (spot==6){
                            spot=spotB6;
                            clrdB6=count;
                            if (spotA5%3==0)//Mine clue checker
                                nMines++;
                            if (spotA6%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotC6%3==0)
                                nMines++;
                            nMineB6=nMines;
                        }
                        if (spot%3==0){//MINE TEST
                            mine=true;
                            cout<<"B ";
                            if (count%6==0)
                                cout<<endl;
                        }
                        else {
                            cout<<nMines<<" ";
                            if (count%6==0)
                                cout<<endl;
                            cleared++;
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
            nMines=0;
           
                    if (count==clrdC1){
                        cout<<nMineC1<<" ";
                        count++;
                        
                    }
                    if (count==clrdC2){
                        cout<<nMineC2<<" ";
                        count++;
                        
                    }
                    if (count==clrdC3){
                        cout<<nMineC3<<" ";
                        count++;
                        
                    }
                    if (count==clrdC4){
                        cout<<nMineC4<<" ";
                        count++;
                        
                    }
                    if (count==clrdC5){
                        cout<<nMineC5<<" ";
                        count++;
                        
                    }
                    if (count==clrdC6){
                        cout<<nMineC6<<" "<<endl;
                        count++;
                        
                    }
                    
                    if (count==spot&&row=='C') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotC1;
                            clrdC1=count;
                            if (spotB1%3==0)
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotD1%3==0)
                                nMines++;
                            if (spotD2%3==0)
                                nMines++;
                            nMineC1=nMines;
                        }
                        if (spot==2){
                            spot=spotC2;
                            clrdC2=count;
                            if (spotB1%3==0)//Mine clue checker
                                nMines++;
                            if (spotB2%3==0)
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotC1%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotD1%3==0)
                                nMines++;
                            if (spotD2%3==0)
                                nMines++;
                            if (spotD3%3==0)
                                nMines++;
                            nMineC2=nMines;
                        }
                        if (spot==3){
                            spot=spotC3;
                            clrdC3=count;
                            if (spotB2%3==0)//Mine clue checker
                                nMines++;
                            if (spotB3%3==0)
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotD2%3==0)
                                nMines++;
                            if (spotD3%3==0)
                                nMines++;
                            if (spotD4%3==0)
                                nMines++;
                            nMineC3=nMines;
                        }
                        if (spot==4){
                            spot=spotC4;
                            clrdC4=count;
                            if (spotB3%3==0)//Mine clue checker
                                nMines++;
                            if (spotB4%3==0)
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotD3%3==0)
                                nMines++;
                            if (spotD4%3==0)
                                nMines++;
                            if (spotD5%3==0)
                                nMines++;
                            nMineC4=nMines;
                        }
                        if (spot==5){
                            spot=spotC5;
                            clrdC5=count;
                            if (spotB4%3==0)//Mine clue checker
                                nMines++;
                            if (spotB5%3==0)
                                nMines++;
                            if (spotB6%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotC6%3==0)
                                nMines++;
                            if (spotD4%3==0)
                                nMines++;
                            if (spotD5%3==0)
                                nMines++;
                            if (spotD6%3==0)
                                nMines++;
                            nMineC5=nMines;
                        }
                        if (spot==6){
                            spot=spotC6;
                            clrdC6=count;
                            if (spotB5%3==0)//Mine clue checker
                                nMines++;
                            if (spotB6%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotD5%3==0)
                                nMines++;
                            if (spotD6%3==0)
                                nMines++;
                            nMineC6=nMines;
                        }
                        if (spot%3==0){//MINE TEST
                            mine=true;
                            cout<<"B ";
                            if (count%6==0)
                                cout<<endl;
                        }
                        else {
                            cout<<nMines<<" ";
                            if (count%6==0)
                                cout<<endl;
                            cleared++;
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
            nMines=0;
           
                    if (count==clrdD1){
                        cout<<nMineD1<<" ";
                        count++;
                        
                    }
                    if (count==clrdD2){
                        cout<<nMineD2<<" ";
                        count++;
                        
                    }
                    if (count==clrdD3){
                        cout<<nMineD3<<" ";
                        count++;
                        
                    }
                    if (count==clrdD4){
                        cout<<nMineD4<<" ";
                        count++;
                        
                    }
                    if (count==clrdD5){
                        cout<<nMineD5<<" ";
                        count++;
                        
                    }
                    if (count==clrdD6){
                        cout<<nMineD6<<" "<<endl;
                        count++;
                        
                    }
                    
                    if (count==spot&&row=='D') {//Finding the position of the choice
                        if (spot==1){//Setting the choice equal to rand num to test for mine
                            spot=spotD1;
                            clrdD1=count;
                            if (spotC1%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotD2%3==0)
                                nMines++;
                            nMineD1=nMines;
                        }
                        if (spot==2){
                            spot=spotD2;
                            clrdD2=count;
                            if (spotC1%3==0)
                                nMines++;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotD1%3==0)
                                nMines++;
                            if (spotD3%3==0)
                                nMines++;
                            nMineD2=nMines;
                        }
                        if (spot==3){
                            spot=spotD3;
                            clrdD3=count;
                            if (spotC2%3==0)
                                nMines++;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotD2%3==0)
                                nMines++;
                            if (spotD4%3==0)
                                nMines++;
                            nMineD3=nMines;
                        }
                        if (spot==4){
                            spot=spotD4;
                            clrdD4=count;
                            if (spotC3%3==0)
                                nMines++;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotD3%3==0)
                                nMines++;
                            if (spotD5%3==0)
                                nMines++;
                            nMineD4=nMines;
                        }
                        if (spot==5){
                            spot=spotD5;
                            clrdD5=count;
                            if (spotC4%3==0)
                                nMines++;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotC6%3==0)
                                nMines++;
                            if (spotD4%3==0)
                                nMines++;
                            if (spotD6%3==0)
                                nMines++;
                            nMineD5=nMines;
                        }
                        if (spot==6){
                            spot=spotD6;
                            clrdD6=count;
                            if (spotC5%3==0)
                                nMines++;
                            if (spotC6%3==0)
                                nMines++;
                            if (spotD5%3==0)
                                nMines++;
                            nMineD6=nMines;
                        }
                        if (spot%3==0){//MINE TEST
                            mine=true;
                            cout<<"B ";
                            if (count%6==0)
                                cout<<endl;
                        }
                        else {
                            cout<<nMines<<" ";
                            if (count%6==0)
                                cout<<endl;
                            cleared++;
                        }
                    }
                    else if (count<7&&(count!=clrdD1||count!=clrdD2||count!=clrdD3||count!=clrdD4||count!=clrdD5||count!=clrdD6)) {
                        cout<<"X ";
                        if (count%6==0)
                            cout<<endl;
                    }
          
                }
                if (cleared+nBugs==24){
                    gameWin=true;
                }
        if (gameWin==true){
            cout<<"Congratulations! You've found all the bugs! Hooray!"<<endl;
        }
        else{
               if (mine!=true) 
                   cin>>row>>spot;
               else if (mine==true){
                    cout<<"Game ogre bud! Try again!"<<endl;                 
               }
        }
    } while((mine!=true)&&(gameWin==false));
    break;
        }
        case 2: {
            cout<<"Rules"<<endl;
            cout<<"-----"<<endl;
            for (int count=1;count<=24;count++) {
                cout<<"X ";
                if (count%6==0)
                    cout<<endl;
    }
    cout<<"Enter in a spot you wish to clear."<<endl;
    cout<<"Rows from top to bottom: A B C D"<<endl;
    cout<<"Spots are columns 1 2 3 4 5 6"<<endl;
    cout<<"For example: Entering A1 would clear the top left corner."<<endl;
    cout<<"The objective of the game is to clear each spot without triggering a bug. Have fun!"<<endl;
            break;
        }
        case 3: {
            cout<<"Quitting program..."<<endl;
            break;
        }
        default:
            cout<<"Not a valid input. Ending program!"<<endl;
    }
    }while (choice==1||choice==2);
   
    //Exit stage right!
    return 0;
}

