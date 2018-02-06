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
void bugTest(int [][COLS],bool[][COLS],int);
void random(int [][COLS],int);//Function to randomize each spot on grid.
int nBug(bool [][COLS],int);//Function to calculate number of Bugs on grid
                                                                          //A well as to activate Bug spaces.
void nbrBugs(int [][COLS],bool [][COLS],int);//Function to calculate neighboring bugs around each space
void start (string);
void game(int [][COLS],bool [][COLS],int,char,int,bool);
void cleared(bool[][COLS],int,char,int,bool &);
void display(int [][COLS],int);//Function for displaying the grid.
void rules(int [][COLS],int);
void exit();

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool gameWin;//Win condition of the game
    bool gameLss;//Losing condition
    string title;//Game title
    int choice;//User choice for menu
    const int ROWS=6;//Rows in the grid.
    int spots[ROWS][COLS];
    bool isitBug[ROWS][COLS];//Bug or not
    int nBugs;//The total number of bugs in the game
    int nMines[ROWS][COLS];
    int spaces=ROWS*COLS;
    int cleared;//The number of spaces the user has cleared
    char clrDsp;//What a space will display after being cleared
    bool clrd[spaces];//Individual clear values for each space of the grid
    int nbrBugs[spaces];//The number of bugs neighboring a space on the grid
    
    char row;//User-inputted choice for the row that the space they want to clear is in
    int spot;//User-inputted choice for the space they want to clear
    int in;//Menu choice
    
    do{
    
    //Initialize Variables
    gameWin=false;//Setting the initial win condition to false
    gameLss=false;//Setting the initial lose condition to false
    cleared=0;//Number of initial cleared spaces
    title="BugSweeper";
    /*for (int x=0;x<spaces;x++){//Setting the cleared space check to false
        clrd[x]=false;
    }*/
    random(spots,ROWS);//Randomizing the grid
     /*or (int x=0;x<ROWS;x++){//Setting the initial mine-clue checker vals to 0
        for (int y=0;y<COLS;y++){
            nMines[x][y]=0;
        }
    }*/
    for (int x=0;x<ROWS;x++){//Setting each space initially to bug false
        for (int y=0;y<COLS;y++){
            isitBug[x][y]=false;
        }
    }
    
    //Initializing bugs
    bugTest(spots,isitBug,ROWS);//If the randomized number assigned to a space is divided cleanly by 3
    //(no remainder), then that spot is considered a bug.
    nBugs=nBug(isitBug,ROWS);//Adding up the total number of bugs in the game.
       
    //Start Menu
    start(title);
    cin>>in;
    switch (in){
        case 1: game(spots,isitBug,ROWS,row,spot,gameLss);break;
        case 2: rules(spots,ROWS);break;
        default: exit();break;
    }
    }while (in==1||in==2);
 
    //Exit stage right!
    return 0;
}

void bugTest(int spot[][COLS],bool bug[][COLS],int rows){
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (spot[x][y]%3==0){//Bug criteria
                bug[x][y]=true;//Setting bug test to true       
            }
        }
    }
}
    
void random(int grid[][COLS],int rows){
    //int bugct=0;
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            grid[x][y]=rand();
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

void nbrBugs(int grid[][COLS],bool bug[][COLS],int rows){
    
    
}

void start(string title) {
    cout<<setw(5)<<" "<<title<<endl;
    cout<<setw(5)<<" "<<"----------"<<endl;
    cout<<"Welcome! Choose an option:"<<endl;
    cout<<"1. Play the Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit"<<endl;   
}

void game(int grid[][COLS],bool bug[][COLS],int rows,char row,int spot,bool lose){
    do{
    display(grid,rows);
    cout<<"Enter in a spot to clear."<<endl;
    cin>>row>>spot;
    cleared(bug,rows,row,spot,lose);
    }while(lose!=true);
}

void cleared(bool bug[][COLS],int rows,char row,int spot,bool &lose){
    if (row=='A'){
        if (bug[0][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
        else {
                     
        }
    }
    if (row=='B'){
        if (bug[1][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
    }
    if (row=='C'){
        if (bug[2][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
    }
    if (row=='D'){
        if (bug[3][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
    }
    if (row=='E'){
        if (bug[4][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
    }
    if (row=='F'){
        if (bug[5][spot]==true){
            cout<<"BUG. YOU LOST."<<endl;
            lose=true;
        }
    }
}

void display(int grid[][COLS],int rows){//Function to display grid.
    for (int x=0;x<rows;x++) {
        for (int y=0;y<COLS;y++){
            cout<<"X ";
        if (y==9)
            cout<<endl;
        }   
    }
}

void rules(int grid[][COLS],int rows){
    cout<<"Rules"<<endl;
    cout<<"-----"<<endl;
    display(grid,rows);
    cout<<"Enter in a spot you wish to clear."<<endl;
    cout<<"Rows from top to bottom: A B C D E F"<<endl;
    cout<<"Spots are columns 1 2 3 4 5 6 7 8 9 10"<<endl;
    cout<<"For example: Entering A1 would clear the top left corner."<<endl;
    cout<<"The objective of the game is to clear the entire grid without triggering a bug. Have fun!"<<endl;
            
}

void exit(){
    cout<<"You have chosen to exit. See ya!"<<endl;
}