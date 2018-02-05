/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 1, 2018, 6:08 PM
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
void random(unsigned short int [][COLS],bool [][COLS],unsigned short int);//Function to randomize each spot on grid.
int nBug(unsigned short int [][COLS],bool [][COLS],unsigned short int,int);//Function to calculate number of Bugs on grid
                                                                          //A well as to activate Bug spaces.
void nbrBugs(unsigned short int [],unsigned short int);//Function to calculate neighboring bugs around each space
void start (string);
void game();
void display(unsigned short int [][COLS],unsigned short int);//Function for displaying the grid.
void rules(unsigned short int [][COLS],unsigned short int);
void exit();

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool gameWin;//Win condition of the game
    string title;//Game title
    int choice;//User choice for menu
    unsigned short int ROWS=6;//Rows in the grid.
    unsigned short int spaces=ROWS*COLS;
    int cleared;//The number of spaces the user has cleared
    bool clrd[spaces];//Individual clear values for each space of the grid
    char row;//User-inputted choice for the row that the space they want to clear is in
    unsigned short int spot;//User-inputted choice for the space they want to clear
    unsigned short int spots[ROWS][COLS];
    unsigned short int nbrBugs[spaces];//The number of bugs neighboring a space on the grid
    unsigned short int nBugs;//The total number of bugs in the game
    bool isitBug[ROWS][COLS];//Bug or not
    int in;//Menu choice
    
    //do{
    
    //Initialize Variables
    gameWin=false;//Setting the initial gameWin condition to false
    cleared=0;//Number of initial cleared spaces
    nBugs=0;//Initial number of bugs (before randomizing)
    title="BugSweeper";
    random(spots,isitBug,ROWS);//Randomizing the grid
    nBugs=nBug(spots,isitBug,ROWS,nBugs);//Calculating the number of bugs on grid
    nbrBugs;
    
    display(spots,ROWS);
    
    //Calculate win condition
    //if (spotA1%3==0)//If the randomized number assigned to a space is divided cleanly by 3
        //nBugs++;    //(no remainder), then that spot is considered a bug.    
    /*do{
    //Start Menu
    start(title);
    cin>>in;
    switch (in){
        case 1: game();break;
        case 2: rules(spots,ROWS);break;
        default: exit();break;
    }
    }while (in==1||in==2);*/
     
    /*do { 
        
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
        
        case 3: {
            cout<<"Quitting program..."<<endl;
            break;
        }
        default:
            cout<<"Not a valid input. Ending program!"<<endl;
    }
    }while (choice==1||choice==2);
   */
    //Exit stage right!
    return 0;
}

void random(unsigned short int grid[][COLS],bool isbug[][COLS],unsigned short int rows){
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            grid[x][y]=rand();
            isbug[x][y]=false;//Setting initial mine test to false
            //cout<<grid[x][y]<<" "<<x<<" "<<y<<endl;
        }
    }
}

int nBug(unsigned short int grid[][COLS],bool bug[][COLS],unsigned short int rows,int nbugs){
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (grid[x][y]%3==0){//Bug criteria
                nbugs++;//Counting number of bugs for win condition
                bug[x][y]=true;//Setting bug test to true
            }
        }
    }
    return nbugs;
}

void nbrBugs(unsigned short int [],unsigned short int){
    
}

void start(string title) {
    cout<<setw(5)<<" "<<title<<endl;
    cout<<setw(5)<<" "<<"----------"<<endl;
    cout<<"Welcome! Choose an option:"<<endl;
    cout<<"1. Play the Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit"<<endl;   
}

void game(){
    
}

void display(unsigned short int grid[][COLS],unsigned short int rows){//Function to display grid.
    for (int x=0;x<rows;x++) {
        for (int y=0;y<COLS;y++){
            cout<<"X ";
        if (y%5==0)
            cout<<endl;
        }   
    }
}

void rules(unsigned short int grid[][COLS],unsigned short int rows){
    cout<<"Rules"<<endl;
    cout<<"-----"<<endl;
    display(grid,rows);
    cout<<"Enter in a spot you wish to clear."<<endl;
    cout<<"Rows from top to bottom: A B C D"<<endl;
    cout<<"Spots are columns 1 2 3 4 5 6"<<endl;
    cout<<"For example: Entering A1 would clear the top left corner."<<endl;
    cout<<"The objective of the game is to clear each spot without triggering a bug. Have fun!"<<endl;
            
}

void exit(){
    cout<<"You have chosen to exit. See ya!"<<endl;
}