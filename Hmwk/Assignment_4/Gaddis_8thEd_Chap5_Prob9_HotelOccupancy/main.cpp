/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 20, 2018, 3:36 PM
 * Purpose: Create a program that will calculate the occupancy rate for a hotel.
 */
 
 //System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short int nFloors,//Number of floors that the hotel has.
                       nRooms,//Number of rooms that the hotel has.
                       occpd,//Number of rooms that are occupied.
                       totRoom,
                       totOcc;
    float              occRate;
    
    //Initialize Variables
    totRoom=0;
    totOcc=0;
    cout<<"Hello! Enter the number of floors that the hotel has\n"
        <<"in order to calculate the occupancy rate."<<endl;
    cin>>nFloors;
    
    //Process/Map inputs to outputs
    for (unsigned short int floor=1;floor<=nFloors;floor++) {
        if (floor==13) {}
        else {
        cout<<"Please enter the number of rooms on Floor "<<floor<<"."<<endl;
        cin>>nRooms;
        cout<<"Next, enter how many rooms are occupied."<<endl;
        cin>>occpd;
        totRoom+=nRooms;
        totOcc+=occpd;
        }
    }
            
    //output data
    cout<<"The total number of rooms of the hotel = "<<totRoom<<"."<<endl;
    cout<<"Occupied Rooms = "<<totOcc<<endl;
    cout<<"Unoccupied Rooms = "<<totRoom-totOcc<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hotel Occupancy Rate = "<<100.0f*totOcc/totRoom<<"%"<<endl;
            
    //Exit stage right!
    return 0;
}

