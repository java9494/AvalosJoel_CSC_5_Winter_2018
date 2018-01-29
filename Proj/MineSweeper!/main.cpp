/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 29, 2018, 9:48 AM
 * Purpose: Create a limited version of MineSweeper.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    bool mine;//Mine or not
    char row;
    unsigned short int spot,cleared;
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
    cout<<"BUGSWEEPER "<<endl;
            
    //output data
    for (int count=1;count<=27;count++) {
        cout<<"X ";
        if (count%9==0)
            cout<<endl;
    }
    
    cin>>row>>spot;
    do {    
        if (row=='A'){
            if (spot>=1&&spot<=9) {
                for (int count=1;count<=27;count++) {
                    if (count==spot) {
                        cout<<"O ";
                        cleared=spot;
                        if (count%9==0)
                            cout<<endl;
                    }
                    else {
                        if (cleared==count)
                            cout<<"O ";
                        else {
                        cout<<"X ";
                        if (count%9==0)
                            cout<<endl;
                        }
                    }
                }
                cin>>row>>spot;        
            }           
        }
    }while(row!='e');
   
 
            
    //Exit stage right!
    return 0;
}

