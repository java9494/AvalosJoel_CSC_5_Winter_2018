/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on February 4, 2018, 8:30 AM
 * Purpose: Create a program that tracks sales for salsa.
 */
 
 //System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int topSale(int [],string [],int);
int lowSale(int [],string [],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=5;//Size of each array
    string names[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};//Names of each salsa
    int jars[SIZE];//Amount of jars sold during the past month for each salsa.
    int ttlSale=0;//Number of total sales
    
    
    //Initialize Variables
    cout<<"Salsa Sales Tracker"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Please enter the number of jars sold for each salsa."<<endl;
    for (int count=0;count<5;count++){
        cin>>jars[count];
    }
    
    //Process/Map inputs to outputs
    
            
    //output data
    cout<<"Salsa Sales:"<<endl;
    cout<<"------------"<<endl;
    for (int count=0;count<SIZE;count++){
        cout<<names[count]<<": "<<jars[count]<<" jars sold."<<endl;
    }
    cout<<"Total Sales:"<<endl;
    cout<<"------------"<<endl;
    for (int count=0;count<SIZE;count++){
        ttlSale+=jars[count];
    }
    cout<<ttlSale<<" jars sold."<<endl;
    topSale(jars,names,SIZE);
    lowSale(jars,names,SIZE);
            
    //Exit stage right!
    return 0;
}

int topSale(int j[],string name[],int n){
    int topSlr=j[0];
    for (int count=0;count<n;count++){
        if (j[count]>topSlr){
            topSlr=j[count];
        }
    }
    for (int count=0;count<n;count++){
        if (topSlr==j[count]){
            cout<<"Top selling salsa is: "<<name[count]<<endl;
        }
            
    }
    return topSlr;
}

int lowSale(int j[],string name[],int n){
    int lowSlr=j[0];
    for (int count=0;count<n;count++){
        if (j[count]<lowSlr){
            lowSlr=j[count];
        }
    }
    for (int count=0;count<n;count++){
        if (lowSlr==j[count]){
            cout<<"Lowest selling salsa is: "<<name[count]<<endl;
        }
            
    }
    return lowSlr;
}