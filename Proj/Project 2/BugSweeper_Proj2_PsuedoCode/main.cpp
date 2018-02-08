/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 7, 2018, 7:17 PM
 * Purpose: Create a full version of MineSweeper.
 * v3: Adding the neighboring bug checker.
 * v4: Adding the win condition.
 * v5: Cleaning up the code (removing unused variables/arrays, etc...
 * v6: Adding more comments.
 * v7: Adding in chapter concepts previously left out (static variables,
 *     overloaded functions, exit function)
 * v8: Adding in a while loop, ternary operator, io file scorekeeping capability.
 * v9: Finishing touches!
 */
 
   System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

   User Libraries

   Global Constants - Math/Physics Constants, Conversions,
                      2-D Array Dimensions
const int COLS=10;   Constant for the number of columns in the 2-D Array

   Function Prototypes
   Function to randomize each spot on grid.
   Function to test whether a spot is a bug.
                               Function to calculate number of Bugs on grid
                               A well as to activate Bug spaces.
   Function to calculate neighboring bugs around each space
   Function to run the game's Start Menu
   Function to run the game
   Function to clear each user-inputted space
   Function for displaying the grid.
   Function for displaying the Rules of the game.
   Function for keeping records
   Function for saving records
   Function to exit the program

   Execution Begins Here
int main(int argc, char** argv) {   
       Seeding the random number generator

    
       Declaring Game, Grid, and Array Variables
       Win condition of the game
       Losing condition
       Flag for keeping scores
       Game title
       Rows in the grid.
       Grid
       Bug or not
       The total number of bugs in the game
      Max number of games to record keep is 100
       Array to hold number of games won
       Vector to hold number of games lost
       Count of how many games user has played
       Total games played
    
       Declaring Display Variables
      What a space will display after being cleared.
     The number of bugs neighboring a space on the grid
    
       Declaring User-inputted Variables
      User-inputted choice for the row that the space they want to clear is in
     User-inputted choice for the space they want to clear
    Menu choice
      Name for record keeping
    
       Start the Game loop
    
       Initializing Variables
      Set the initial win condition to false
       Set the initial lose condition to false
      Title of Game!
      Open file for keeping total games played
    
       Initializing random numbers and display values
     Call random function to randomize the grid
    Loop to set each space's initial Bug value to false
     
     Loop to set each space's initial display to an X
       
   Loop to set game wins to false
    
       Initializing the Bugs
      Call the bugTest function to arm bugs
      Loop to display the grid with bug locations for debugging purposes
      
   Call nBug function to add up the total number of bugs in the game.
       
       Start Menu
      Call start menu function
     Ask user for input
    This is the switch case for the menu
          Run game
          Display rules
         Option to keep records
         Or, exit program
       Display menu while user inputs menu choices 1 or 2
 
       Exit stage right!

    
   Randomizing the grid.
     Going through every element in array to randomize
 

   Testing each space for bugs.
  
               Bug criteria: if the random number
                                    Assigned to a space is cleanly divisible by 3
                                    (no remainder), then that space is a bug
                  Set bug test to true       
           

   Adding up the number of bugs on the grid
  
            Checking bool value for bug
              Counting number of bugs for the win condition

}

   Testing neighboring
                                                               spaces on grid for bugs
   Testing neighboring spaces of column 0 spaces for bugs
     Testing neighboring spaces of column 1 spaces for bugs
   
   Testing neighboring spaces of column 2 spaces for bugs
       
   Testing neighboring spaces of column 3 spaces for bugs

   Testing neighboring spaces of column 4 spaces for bugs

    Testing neighboring spaces of column 5 spaces for bugs
  
   Testing neighboring spaces of column 6 spaces for bugs

   Testing neighboring spaces of column 7 spaces for bugs
    
   Testing neighboring spaces of column 8 spaces for bugs

   Testing neighboring spaces of column 9 spaces for bugs


   Displaying start menu to user

}

   Game function


   Clearing a space function

   Calling nbrBugs function to calculate display values
   Static local variable for number of spaces the user has cleared

   The win condition of the game
   If the number of cleared spaces plus number of bugs is equal to 60
                    Then the user has won the game.
   

   Function to display grid.


   Function to display rules.


   Function for prompting user to keep scores

 
   Function to save records


   Exit function
