/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 30, 2018, 11:34 AM
 * Purpose: Grade a DMV test
 */
 
 //System Libraries
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void read(ifstream &,char[],vector<char> &,int);
void read(ifstream &,string,vector<char> &,int);
int score(vector<char> &,vector<char> &, int);
void write(ofstream &,string,vector<char> &,vector<char> &,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream answer,test;
    ofstream results;
    const int SIZE=20;
    vector<char> ans;
    vector<char> compare;
    
    //Initialize Variables
    char fileName[]="answerkey.dat";
    string testName="test.dat";
    
    read(answer,fileName,ans,SIZE);
    /*read(test,testName,compare,SIZE);
    
    //Process/Map inputs to outputs
    int correct=score(ans,compare,SIZE);
    cout<<"Correct Answers = "<<correct
        <<" out of "<<SIZE<<endl;
        cout<<" with a percentage score = "
        <<100.0f*correct/SIZE<<"%"
        <<endl;
        
    //Do the same and record to a file
    string resName="result.dat";
    write(results,resName,ans,compare,SIZE);
            
    //output data
    
            
    //Exit stage right!*/
    return 0;
}

void write(ofstream & output,string fn,vector<char> &ans,vector<char> &test,int n){
    //Open the file for writing
    output.open(fn.c_str());
    
    //Process/Map inputs to outputs
    int correct=score(ans,test,n);
    output<<"Correct Answers = "<<correct
        <<" out of "<<n<<endl;
        output<<" with a percentage score = "
        <<100.0f*correct/n<<"%"
        <<endl;
        //Close file
        output.close();
    
}

int score(vector<char> &ans,vector<char> &test, int n){
    //Declare and initialize sum
    int sum=0;
    //Process the data
    for(int i=0;i<n;i++){
        if(ans[i]==test[i])sum++;
    }
    //Return sum
    return sum;
}

void read(ifstream & input,string fn,vector<char> &ans,int n){
    //Open the file
    input.open(fn.c_str());
    
    //Read the data from the file
    for(int i=0;i<n;i++){
        input>>ans[i];
        //cout<<ans[i];
    }
            
    //Close the file
    input.close();
}

void read(ifstream & input,char fn[],vector<char> &ans,int n){
    //Open the file
    input.open(fn);
    
    //Read the data from the file
    for(int i=0;i<n;i++){
        input>>ans[i];
        //cout<<ans[i];
    }
            
    //Close the file
    input.close();
}
