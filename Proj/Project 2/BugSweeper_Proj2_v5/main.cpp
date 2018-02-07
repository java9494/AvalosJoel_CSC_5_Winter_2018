/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 7, 2018, 12:02 PM
 * Purpose: Create a full version of MineSweeper.
 * v3: Adding the neighboring bug checker.
 * v4: Adding the win condition.
 * V5:
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
void random(int [][COLS],int);//Function to randomize each spot on grid.
void bugTest(int [][COLS],bool[][COLS],int);//Function to test whether a spot is a bug.
int nBug(bool [][COLS],int);//Function to calculate number of Bugs on grid
                            //A well as to activate Bug spaces.
void nbrBugs(int [][COLS],bool [][COLS],int);//Function to calculate neighboring bugs around each space
void start (string);//Function to run the game's Start Menu
void game(int [][COLS],bool [][COLS],bool [][COLS],char [][COLS],int [][COLS],int,char,int,int &,int,bool,bool);//Function to run the game
void cleared(int [][COLS],bool[][COLS],bool[][COLS],char[][COLS],int [][COLS],int,char,int,int &,int,bool &,bool &);//Function to clear each user-inputted space
void display(int [][COLS],char [][COLS],int);//Function for displaying the grid.
void rules(int [][COLS],int);//Function for displaying the Rules of the game.
void exit();

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
    int cleared;//The number of spaces the user has cleared
    bool clrd[ROWS][COLS];//Individual clear values for each space of the grid
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
    cleared=0;//Set number of initial cleared spaces to zero
    title="BugSweeper";//Title of Game!
    for (int x=0;x<ROWS;x++){//Setting the cleared space check to false
        for (int y=0;y<COLS;y++){
        clrd[x][y]=false;
        }
    }
    random(spots,ROWS);//Randomizing the grid
    for (int x=0;x<ROWS;x++){//Set each space's initial Bug value to false
        for (int y=0;y<COLS;y++){
            isitBug[x][y]=false;
        }
    }
    for (int x=0;x<ROWS;x++){//Set each space's initial display to an X
        for (int y=0;y<COLS;y++){
            clrDsp[x][y]='X';
        }
    }
    
    //Initializing bugs
    bugTest(spots,isitBug,ROWS);//If the randomized number assigned to a space is divided cleanly by 3
    //(no remainder), then that spot is considered a bug.
        /*for (int x=0;x<ROWS;x++){//Debugging purposes
        for (int y=0;y<COLS;y++){
            cout<<isitBug[x][y]<<" ";
            if (y==9)
                cout<<endl;
        }
    }*/
    nBugs=nBug(isitBug,ROWS);//Adding up the total number of bugs in the game.
       
    //Start Menu
    start(title);
    cin>>in;
    switch (in){
        case 1: game(spots,isitBug,clrd,clrDsp,nbrBugs,ROWS,row,spot,cleared,nBugs,gameLss,gameWin);break;
        case 2: rules(spots,ROWS);break;
        default: exit();break;
    }
    }while (in==1||in==2);
 
    //Exit stage right!
    return 0;
}
    
void random(int grid[][COLS],int rows){
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            grid[x][y]=rand();
        }
    }
}

void bugTest(int spot[][COLS],bool bug[][COLS],int rows){//Testing each space for bugs
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (spot[x][y]%3==0){//Bug criteria
                bug[x][y]=true;//Setting bug test to true       
            }
        }
    }
}

int nBug(bool bug[][COLS],int rows){
    int nbugs=0;
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (bug[x][y]==true){//Bug criteria
                nbugs++;//Counting number of bugs for win condition
            }
        }
    }
    return nbugs;
}

void nbrBugs(int nbrBugs[][COLS],bool bug[][COLS],int rows){
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 0 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 1 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 2 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 3 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 4 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 5 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 6 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 7 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 8 for bugs.
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
    for (int x=0;x<rows;x++){//Testing neighboring spaces of column 9 for bugs.
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

void start(string title) {
    cout<<setw(5)<<" "<<title<<endl;
    cout<<setw(5)<<" "<<"----------"<<endl;
    cout<<"Welcome! Choose an option:"<<endl;
    cout<<"1. Play the Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit"<<endl;   
}

void game(int grid[][COLS],bool bug[][COLS],bool clear[][COLS],char spDsply[][COLS],int nbrBug[][COLS],
          int rows,char row,int spot,int &clrd,int nbugs,bool lose,bool win){
    do{
    display(grid,spDsply,rows);
    cout<<"Enter in a spot to clear."<<endl;
    cin>>row>>spot;
    cleared(grid,bug,clear,spDsply,nbrBug,rows,row,spot,clrd,nbugs,lose,win);
    }while(lose!=true&&win!=true);
}

void cleared(int grid[][COLS],bool bug[][COLS],bool cleared[][COLS],char spDsply[][COLS],int nbrBug[][COLS],
             int rows,char row,int spot,int &clrd,int nbugs,bool &lose,bool &win){
    nbrBugs(nbrBug,bug,rows);
    if (row=='A'){
        if (bug[0][spot-1]==true){
            spDsply[0][spot-1]='B';
            lose=true;
            display(grid,spDsply,rows);
            cout<<"BUG. YOU LOST."<<endl;
            
        }
        else {
            clrd++;
            cleared[0][spot-1]=true;
            spDsply[0][spot-1]=48+nbrBug[0][spot-1];
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
            clrd++;
            cleared[1][spot-1]=true;
            spDsply[1][spot-1]=48+nbrBug[1][spot-1];
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
            clrd++;
            cleared[2][spot-1]=true;
            spDsply[2][spot-1]=48+nbrBug[2][spot-1];
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
            clrd++;
            cleared[3][spot-1]=true;
            spDsply[3][spot-1]=48+nbrBug[3][spot-1];
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
            clrd++;
            cleared[4][spot-1]=true;
            spDsply[4][spot-1]=48+nbrBug[4][spot-1];
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
            clrd++;
            cleared[5][spot-1]=true;
            spDsply[5][spot-1]=48+nbrBug[5][spot-1];
        }
    }
    if ((clrd+nbugs)==60){
        win=true;
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

void rules(int grid[][COLS],int rows){
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

void exit(){
    cout<<"You have chosen to exit. See ya!"<<endl;
}