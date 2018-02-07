/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 7, 2018, 12:39 PM
 * Purpose: Create a full version of MineSweeper.
 * v3: Adding the neighboring bug checker.
 * v4: Adding the win condition.
 * v5: Cleaning up the code (removing unused variables/arrays, etc...
 * v6: Adding more comments.
 * v7: Adding in chapter concepts previously left out (static variables,
 *     overloaded functions, exit function)
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
const int COLS=10;//Constant for the number of columns in the 2-D Array

//Function Prototypes
void random(int [][COLS],int);//Function to randomize each spot on grid.
void bugTest(int [][COLS],bool[][COLS],int);//Function to test whether a spot is a bug.
int nbrBug(bool [][COLS],int);//Function to calculate number of Bugs on grid
                            //A well as to activate Bug spaces.
void nbrBug(int [][COLS],bool [][COLS],int);//Function to calculate neighboring bugs around each space
void start (string);//Function to run the game's Start Menu
void game(int [][COLS],bool [][COLS],char [][COLS],int [][COLS],int,char,int,int,bool,bool);//Function to run the game
void cleared(int [][COLS],bool[][COLS],char[][COLS],int [][COLS],int,char,int,int,bool &,bool &);//Function to clear each user-inputted space
void display(int [][COLS],char [][COLS],int);//Function for displaying the grid.
void rules(int [][COLS],int);//Function for displaying the Rules of the game.
void exit();//Function to exit the program

//Execution Begins Here
int main(int argc, char** argv) {   
    //Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaring Game, Grid, and Array Variables
    bool gameWin;//Win condition of the game
    bool gameLss;//Losing condition
    string title;//Game title
    const int ROWS=6;//Rows in the grid.
    int spots[ROWS][COLS];//Grid
    bool isitBug[ROWS][COLS];//Bug or not
    int nBugs;//The total number of bugs in the game
    int spaces=ROWS*COLS;
    
    //Declaring Display Variables
    char clrDsp[ROWS][COLS];//What a space will display after being cleared.
    int nbrBugs[ROWS][COLS];//The number of bugs neighboring a space on the grid
    
    //Declaring User-inputted Variables
    char row;//User-inputted choice for the row that the space they want to clear is in
    int spot;//User-inputted choice for the space they want to clear
    int in;//Menu choice
    
    do{//Start the Game loop
    
    //Initializing Variables
    gameWin=false;//Set the initial win condition to false
    gameLss=false;//Set the initial lose condition to false
    title="BugSweeper";//Title of Game!
    
    //Initializing random numbers and display values
    random(spots,ROWS);//Call random function to randomize the grid
    for (int x=0;x<ROWS;x++){//Loop to set each space's initial Bug value to false
        for (int y=0;y<COLS;y++){
            isitBug[x][y]=false;
        }
    }
    for (int x=0;x<ROWS;x++){//Loop to set each space's initial display to an X
        for (int y=0;y<COLS;y++){
            clrDsp[x][y]='X';
        }
    }
    
    //Initializing the Bugs
    bugTest(spots,isitBug,ROWS);//Call the bugTest function to arm bugs
        for (int x=0;x<ROWS;x++){//Loop to display the grid with bug locations for debugging purposes
        for (int y=0;y<COLS;y++){
            cout<<isitBug[x][y]<<" ";
            if (y==9)
                cout<<endl;
        }
    }
    nBugs=nbrBug(isitBug,ROWS);//Call nBug function to add up the total number of bugs in the game.
       
    //Start Menu
    start(title);//Call start menu function
    cin>>in;//Ask user for input
    switch (in){//This is the switch case for the menu
        case 1: game(spots,isitBug,clrDsp,nbrBugs,ROWS,row,spot,nBugs,gameLss,gameWin);break;//Run game
        case 2: rules(spots,ROWS);break;//Display rules
        default: exit();break;//Or, exit program
    }
    }while (in==1||in==2);//Display menu while user inputs menu choices 1 or 2
 
    //Exit stage right!
    return 0;
}
    
void random(int grid[][COLS],int rows){//Randomizing the grid.
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            grid[x][y]=rand();//Going through every element in array to randomize
        }
    }
}

void bugTest(int spot[][COLS],bool bug[][COLS],int rows){//Testing each space for bugs.
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (spot[x][y]%3==0){//Bug criteria: if the random number
                                 //Assigned to a space is cleanly divisible by 3
                                 //(no remainder), then that space is a bug
                bug[x][y]=true;//Set bug test to true       
            }
        }
    }
}

int nbrBug(bool bug[][COLS],int rows){//Adding up the number of bugs on the grid
    int nbugs=0;
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (bug[x][y]==true){//Checking bool value for bug
                nbugs++;//Counting number of bugs for the win condition
            }
        }
    }
    return nbugs;
}

void nbrBug(int nbrBugs[][COLS],bool bug[][COLS],int rows){//Testing neighboring
                                                            //spaces on grid for bugs
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 0 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][1]==true)
            nbrBug++;
        if ((bug[1+x][0]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][1]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][0]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][1]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][0]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 1 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][0]==true)
            nbrBug++;
        if (bug[0+x][2]==true)
            nbrBug++;
        if ((bug[1+x][1]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][0]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][2]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][0]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][1]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][2]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][1]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 2 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][1]==true)
            nbrBug++;
        if (bug[0+x][3]==true)
            nbrBug++;
        if ((bug[1+x][1]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][2]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][3]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][1]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][2]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][3]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][2]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 3 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][2]==true)
            nbrBug++;
        if (bug[0+x][4]==true)
            nbrBug++;
        if ((bug[1+x][2]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][3]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][4]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][2]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][3]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][4]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][3]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 4 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][3]==true)
            nbrBug++;
        if (bug[0+x][5]==true)
            nbrBug++;
        if ((bug[1+x][3]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][4]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][5]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][3]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][4]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][5]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][4]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 5 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][4]==true)
            nbrBug++;
        if (bug[0+x][6]==true)
            nbrBug++;
        if ((bug[1+x][4]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][5]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][6]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][4]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][5]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][6]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][5]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 6 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][5]==true)
            nbrBug++;
        if (bug[0+x][7]==true)
            nbrBug++;
        if ((bug[1+x][5]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][6]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][7]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][5]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][6]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][7]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][6]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 7 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][6]==true)
            nbrBug++;
        if (bug[0+x][8]==true)
            nbrBug++;
        if ((bug[1+x][6]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][7]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][8]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][6]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][7]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][8]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][7]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 8 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][7]==true)
            nbrBug++;
        if (bug[0+x][9]==true)
            nbrBug++;
        if ((bug[1+x][7]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][8]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][9]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][7]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][8]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][9]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][8]=nbrBug;
    }
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 9 spaces for bugs
        int nbrBug=0;
        if (bug[0+x][8]==true)
            nbrBug++;
        if ((bug[1+x][8]==true)&&(x!=5))
            nbrBug++;
        if ((bug[1+x][9]==true)&&(x!=5))
            nbrBug++;
        if ((bug[x-1][8]==true)&&(x!=0))
            nbrBug++;
        if ((bug[x-1][9]==true)&&(x!=0))
            nbrBug++;
        nbrBugs[x][9]=nbrBug;
    }
}

void start(string title) {//Displaying start menu to user
    cout<<setw(5)<<" "<<title<<endl;
    cout<<setw(5)<<" "<<"----------"<<endl;
    cout<<"Welcome! Choose an option:"<<endl;
    cout<<"1. Play the Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit"<<endl;   
}

void game(int grid[][COLS],bool bug[][COLS],char spDsply[][COLS],int nbrBug[][COLS],//Game function
          int rows,char row,int spot,int nbugs,bool lose,bool win){
    do{
    display(grid,spDsply,rows);
    cout<<"Enter in a spot to clear."<<endl;
    cin>>row>>spot;
    cleared(grid,bug,spDsply,nbrBug,rows,row,spot,nbugs,lose,win);
    }while(lose!=true&&win!=true);
}

void cleared(int grid[][COLS],bool bug[][COLS],char spDsply[][COLS],int nbrBugs[][COLS],//Clearing a space function
             int rows,char row,int spot,int nbugs,bool &lose,bool &win){
    nbrBug(nbrBugs,bug,rows);//Calling nbrBugs function to calculate display values
    static int cleared=0;//Static local variable for number of spaces the user has cleared
    if (row=='A'){
        if (bug[0][spot-1]==true){
            spDsply[0][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
            
        }
        else {
            cleared++;
            spDsply[0][spot-1]=48+nbrBugs[0][spot-1];
        }
    }
    if (row=='B'){
        if (bug[1][spot-1]==true){
            spDsply[1][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
        }
        else {
            cleared++;
            spDsply[1][spot-1]=48+nbrBugs[1][spot-1];
        }
    }
    if (row=='C'){
        if (bug[2][spot-1]==true){
            spDsply[2][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
        }
        else {
            cleared++;
            spDsply[2][spot-1]=48+nbrBugs[2][spot-1];
        }
    }
    if (row=='D'){
        if (bug[3][spot-1]==true){
            spDsply[3][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
        }
        else {
            cleared++;
            spDsply[3][spot-1]=48+nbrBugs[3][spot-1];
        }
    }
    if (row=='E'){
        if (bug[4][spot-1]==true){
            spDsply[4][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
        }
        else {
            cleared++;
            spDsply[4][spot-1]=48+nbrBugs[4][spot-1];
        }
    }
    if (row=='F'){
        if (bug[5][spot-1]==true){
            spDsply[5][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
        }
        else {
            cleared++;
            spDsply[5][spot-1]=48+nbrBugs[5][spot-1];
        }
    }
    if ((cleared+nbugs)==60){//The win condition of the game
        win=true;//If the number of cleared spaces plus number of bugs is equal to 60
                 //Then the user has won the game.
        cout<<"Congratulations! You have cleared all the bugs. Hooray!!!"<<endl;
    }
}

void display(int grid[][COLS],char spDsply[][COLS],int rows){//Function to display grid.
    for (int x=0;x<rows;x++) {
        for (int y=0;y<COLS;y++){
            cout<<spDsply[x][y]<<" ";
        if (y==9)
            cout<<endl;
        }   
    }
}

void rules(int grid[][COLS],int rows){//Function to display rules.
    cout<<"Rules"<<endl;
    cout<<"-----"<<endl;
    for (int x=0;x<rows;x++) {
        for (int y=0;y<COLS;y++){
            cout<<"X ";
        if (y==9)
            cout<<endl;
        }   
    }
    cout<<"Enter in a spot you wish to clear."<<endl;
    cout<<"Rows from top to bottom: A B C D E F"<<endl;
    cout<<"Spots are columns 1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"For example: Entering A1 would clear the top left corner."<<endl;
    cout<<"The objective of the game is to clear the entire grid without triggering a bug. Have fun!"<<endl;          
}

void exit(){//Exit function
    cout<<"You have chosen to exit. See ya!"<<endl;
    exit(0);
}