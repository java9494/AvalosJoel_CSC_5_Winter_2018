/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on January 30, 2018, 12:29 PM
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
void read(ifstream &,char[],vector<char> &);
void read(ifstream &,string,vector<char> &);
int score(vector<char> &,vector<char> &);
void write(ofstream &,string,vector<char> &,vector<char> &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream answer,test;
    ofstream results;
    vector<char> ans(0);
    vector<char> compare(0);
    
    //Initialize Variables
    char fileName[]="answerkey.dat";
    string testName="test.dat";
    
    read(answer,fileName,ans);
    read(test,testName,compare);
    
    //Process/Map inputs to outputs
    int correct=score(ans,compare);
    cout<<"Correct Answers = "<<correct
        <<" out of "<<ans.size()<<endl;
        cout<<" with a percentage score = "
        <<100.0f*correct/ans.size()<<"%"
        <<endl;
        
    //Do the same and record to a file
    string resName="result.dat";
    write(results,resName,ans,compare);
            
    //output data
    
            
    //Exit stage right!
    return 0;
}

void write(ofstream & output,string fn,vector<char> &ans,vector<char> &test){
    //Open the file for writing
    output.open(fn.c_str());
    
    //Process/Map inputs to outputs
    int correct=score(ans,test);
    output<<"Correct Answers = "<<correct
        <<" out of "<<ans.size()<<endl;
        output<<" with a percentage score = "
        <<100.0f*correct/ans.size()<<"%"
        <<endl;
        //Close file
        output.close();
    
}

int score(vector<char> &ans,vector<char> &test){
    //Declare and initialize sum
    int sum=0;
    //Process the data
    for(int i=0;i<ans.size();i++){
        if(ans[i]==test[i])sum++;
    }
    //Return sum
    return sum;
}

void read(ifstream & input,string fn,vector<char> &ans){
    //Open the file
    input.open(fn.c_str());
    
    //Read the data from the file
    char val;
    while(input>>val){
        ans.push_back(val);
    }
            
    //Close the file
    input.close();
}

void read(ifstream & input,char fn[],vector<char> &ans){
    //Open the file
    input.open(fn);
    
    //Read the data from the file
    char val;
    while(input>>val){
        ans.push_back(val);
    }
                
    //Close the file
    input.close();
}
