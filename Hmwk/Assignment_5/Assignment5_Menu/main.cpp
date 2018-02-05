/* 
 * File:   main.cpp
 * Author: Joel Avalos
 * Created on: February 4, 2018, 2:46 PM
 * Purpose:  Menu for Assignment 5.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!
const int COLS=5;//Number of columns in the 2-D array.

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
float fallDst(float);
void problem2();
float kntcNrg(float,float,float);
void problem3();
bool isPrime(int);
void problem4();
char cmptrGs();
char userGs();
string winner(char,char);
void gameRPS();
void problem5();
int smlst(int [],int);
int lrgst(int [],int);
void problem6();
int topSale(int [],string [],int);
int lowSale(int [],string [],int);
void problem7();
void lrgrN(int [],int,int);
void problem8();
void lstFood(float [][COLS],int);
void mstFood(float [][COLS],int);
void avgFood(float [][COLS],int);
void problem9();
void problem10();
void problem11();
void sort(int [],int);
void binSrch(int [],int,int);
void problem12();
void selSort(int [],int);
void binSrc2(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            case 7:    problem7();break;
            case 8:    problem8();break;
            case 9:    problem9();break;
            case 10:    problem10();break;
            case 11:    problem11();break;
            case 12:    problem12();break;
            default:   def(inN);
	}
    }while(inN<13);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1: Gaddis_8thEd_Chap6_Prob5_FallingDistance"<<endl;
    cout<<"Type 2 to execute Problem 2: Gaddis_8thEd_Chap6_Prob6_KineticEnergy"<<endl;
    cout<<"Type 3 to execute Problem 3: Gaddis_8thEd_Chap6_Prob22_isPrime"<<endl;
    cout<<"Type 4 to execute Problem 4: Gaddis_8thEd_Prob24_RockPaperScissors"<<endl;
    cout<<"Type 5 to execute Problem 5: Gaddis_8thEd_Chap7_Prob1_LargestSmallest"<<endl;
    cout<<"Type 6 to execute Problem 6: Gaddis_8thEd_Chap7_Prob3_ChipsNSalsa"<<endl;
    cout<<"Type 7 to execute Problem 7: Gaddis_8thEd_Chap7_Prob4_LargerThanN"<<endl;
    cout<<"Type 8 to execute Problem 8: Gaddis_8thEd_Chap7_Prob5_MonkeyBusiness"<<endl;
    cout<<"Type 9 to execute Problem 9: Gaddis_8thEd_Chap8_Prob1_ChargeAccountValidation"<<endl;
    cout<<"Type 10 to execute Problem 10: Gaddis_8thEd_Chap8_Prob2_LotteryWinners"<<endl;
    cout<<"Type 11 to execute Problem 11: Gaddis_8thEd_Chap8_Prob3_LotteryWinners_v2"<<endl;
    cout<<"Type 12 to execute Problem 12: Gaddis_8thEd_Chap8_Prob4_ChargeAccountValidation_v2"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare Variables
    float objTime,//Time the object has been falling.
          dstnce;    
    
    //Initialize Variables
    cout<<"Enter in the amount of time that the object has been falling."<<endl;
    cin>>objTime;
    
    //Process/Map inputs to outputs
    
            
    //output data
    cout<<"The object has fell "<<fallDst(objTime)<<" meters"<<endl;
    for (int count=1;count<=10;count++)
        cout<<"The object has fell "<<fallDst(count)<<" meters"<<endl;
            
    //Exit stage right!
}

float fallDst(float time){
    float dstnce=0.5f*9.8*time;
    return dstnce;
}

void problem2(){
    //Declare Variables
    float mass,//In kilograms 
          velocty,//In meters per second
            KE;//Kinetic energy
    
    //Initialize Variables
    KE=0;
    cout<<"Hello, please enter a value for the mass of an object."<<endl;
    cin>>mass;
    cout<<"Next, enter in a velocity for the object."<<endl;
    cin>>velocty;
    
    //Process/Map inputs to outputs
    kntcNrg(mass,velocty,KE);
    
            
    //output data
    
            
    //Exit stage right!
    
}

float kntcNrg(float m, float v,float KE){
    KE=0.5f*m*v*v;
    cout<<"The object has "<<KE<<" kg/meters/seconds^2 kinetic energy."<<endl;
    return KE;
}

void problem3(){
     //Declare Variables
    
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
    for (int i=2;i<=100;i++){
        cout<<setw(3)<<i<<(isPrime(i)?" is ":" is not ")<<"Prime"<<endl;
    }
            
    //output data
    
            
    //Exit stage right!
    
}

bool isPrime(int n) {
    bool test=true;
    float nLoop=sqrt(n);
    for (int num=2;num<=nLoop&&test;num++){
        if (n%num==0)
            test=false;
    }
    return test;
}

void problem4(){
    //Generate the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
    gameRPS();
    
    //output data
    
            
    //Exit stage right!
    
}

void gameRPS(){
    //Declare
    bool loop=true;
    //Start the Game!
    cout<<"This is a game of Rock - Paper - Scissors"<<endl;
    
    //Loop the game until over
    do{
    
        //Begin the game
        char user=userGs();
        if (user!='R'&&user!='S'&&user!='P'){
            loop=false;
        }else{
        char comp=cmptrGs();
        cout<<winner(comp,user)<<endl;
        
        }
    
        //End the game
    }while(loop);
}

string winner(char c,char u){
    if (c==u)
        return "Tie";
    if (c=='P'){
        if(u=='R')
            return "The Computer is the winnamon!";
        else return "User mon is the winnaMON";
    }
    if (c=='S'){
        if (u=='P')
            return "The Computer is the winnamon!";
        else return "User is the winnamon!";
    }
    if (c=='R'){
        if (u=='S')
            return "Computer has won!";
        else return "User mon is the winnamon!";
                   
    }
}

char userGs(){
    char user;
    cout<<"Input your decision"<<endl;
    cout<<"R for Rock, P for Paper, S for Scissors"<<endl;
    cout<<"Anything else ends the Game"<<endl;
    cin>>user;
    return user;
}

char cmptrGs(){
    char cChoice;
    do {
        cChoice=rand()%4+80;//P,Q,R,S

    }while(cChoice=='Q');
    return cChoice;
}

void problem5(){
    //Declare Variables
    const int SIZE=10;
    int array[SIZE];
    
    //Initialize Variables
    cout<<"Hello! Enter in 10 values for this array."<<endl;
    for (int count=0;count<SIZE;count++)
        cin>>array[count];
    
    //Process/Map inputs to outputs
    
            
    //output data
    smlst(array,SIZE);
    lrgst(array,SIZE);
            
    //Exit stage right!
    
}

int smlst(int a[],int n){
    int smlst=a[0];
    for(int count=0;count<n;count++){
        if (a[count]<smlst)
            smlst=a[count];
    }
    cout<<"The smallest number is: "<<smlst<<endl;
    return smlst;
}

int lrgst(int a[],int n){
    int lrgst=a[0];
    for(int count=0;count<n;count++){
        if (a[count]>lrgst)
            lrgst=a[count];
    }
    cout<<"The largest number is: "<<lrgst<<endl;
    return lrgst;
}

void problem6(){
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

void problem7(){
    //Declare Variables
    int SIZE;
    cout<<"Enter in the size of an array."<<endl;
    cin>>SIZE;
    int array[SIZE];
    int n;
    
    //Initialize Variables
    cout<<"Fill the array with numbers."<<endl;
    for (int count=0;count<SIZE;count++)
        cin>>array[count];
    cout<<"Enter a number, n, and I will display the numbers in the array \n"
        <<"greater than that number."<<endl;
    cin>>n;
    
    
    
    //Process/Map inputs to outputs
    lrgrN(array,SIZE,n);
            
    //output data
    
            
    //Exit stage right!
    
}

void lrgrN(int a[],int size,int n){
cout<<"Numbers in the array greater than "<<n<<": "<<endl;
    for (int count=0;count<size;count++){
        if (a[count]>n)
            cout<<a[count]<<" ";
    }
}

void problem8(){
    //Declare Variables
    const int ROWS=3;//Number of rows in the 2-D array
    float mnkFood[ROWS][COLS];
    int monkey,//counter for monkey
            day;//counter of column
    
    //Initialize Variables
    for (monkey=0;monkey<ROWS;monkey++){
        if (monkey==0)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        if (monkey==1)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        if (monkey==2)
            cout<<"Enter in the amount of food ate by monkey "<<monkey+1<<endl;
        for (day=0;day<COLS;day++){
            cin>>mnkFood[monkey][day];
            if (mnkFood[monkey][day]<0){
                cout<<"Not a valid input, ending program."<<endl;
                return;
            }              
        }
    }
    
    //Process/Map inputs to outputs
    
            
    //output data
    avgFood(mnkFood,ROWS);
    lstFood(mnkFood,ROWS);
    mstFood(mnkFood,ROWS);
            
    //Exit stage right!
    
}

void lstFood(float mnky[][COLS],int rows){
    float lstFood=mnky[0][0];
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (lstFood>mnky[x][y])
                lstFood=mnky[x][y];
        }
    }
    cout<<"The least amount of food eaten this week was: "<<lstFood<<" lbs. "<<endl;
}

void mstFood(float mnky[][COLS],int rows){
    float mstFood=mnky[0][0];
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            if (mstFood<mnky[x][y])
                mstFood=mnky[x][y];
        }
    }
    cout<<"The most amount of food eaten this week was: "<<mstFood<<" lbs."<<endl;
}

void avgFood(float mnky[][COLS],int rows){
    float avgFood=0;
    float total=0;
    for (int x=0;x<rows;x++){
        for (int y=0;y<COLS;y++){
            total+=mnky[x][y];
        }
    }
    avgFood=total/(rows+COLS);
    cout<<"The average number of food ate by the monkeys this week is: "<<avgFood<<" lbs."<<endl;
}

void problem9(){
    //Declare Variables
    const int SIZE=18;//Size of the array
    int accNums[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                       8080512,4562555,5552012,7825877,1250255,1005231,
                       6545231,3852085,7576651,7881200,4581002};
        
    //Initialize Variables
    int accNum;
    bool found=false;
    cout<<"Hello, enter a charge account number."<<endl;
    cin>>accNum;
    
    //Process/Map inputs to outputs
    for (int count=0;count<SIZE;count++){
        if (accNums[count]==accNum){
            cout<<"That is a valid number, found at position "<<count<<"."<<endl;
            found=true;
        }
        else if (count==SIZE-1&&!found)
            cout<<"Sorry, that number is invalid."<<endl;
    }
            
    //output data
    
            
    //Exit stage right!
    
}

void problem10(){
    //Declare Variables
    const int SIZE=10;
    int lotNums[SIZE]={13579,26791,26792,33445,55555,
                       62483,77777,79422,85647,93121};//The lucky numbers
    int winNum;//This week's winning number.
    bool winner=false;
        
    //Initialize Variables
    cout<<"Winning Lottery Ticket Finder"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter in the winning number."<<endl;
    cin>>winNum;
    
    //Process/Map inputs to outputs
    for (int count=0;(count<SIZE)&&winner==false;count++){
        if (lotNums[count]==winNum){
            cout<<lotNums[count]<<" is a winning combination! Congrats!"<<endl;
            winner=true;
        }
        else if (count==9&&winner==false)
            cout<<"Sorry, there is not a winning ticket this week."<<endl;
    }
            
    //output data
    
            
    //Exit stage right!
    
}

void problem11(){
    //Declare Variables
    const int SIZE=10;
    int lotNums[SIZE]={13579,26791,26792,33445,55555,
                       62483,77777,79422,85647,93121};//The lucky numbers
    int winNum;//This week's winning number.
    bool winner=false;
        
    //Initialize Variables
    cout<<"Winning Lottery Ticket Finder"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter in the winning number."<<endl;
    cin>>winNum;
    
    //Process/Map inputs to outputs
    sort (lotNums,SIZE);
    binSrch(lotNums,SIZE,winNum);
            
    //output data
            
    //Exit stage right!
    
}

void sort(int a[],int n){
    int temp;
    for (int count=0;count<(n-1);count++){
        if (a[count]>a[count+1]){
            temp=a[count];
            a[count]=a[count+1];
            a[count+1]=temp;           
        }           
    }   
}

void binSrch(int a[],int n,int value){
    int first=0;
    int last=n-1;
    int middle;
    bool found=false;
    int pos=-1;
    while (!found&&first<=last){
        middle=(first+last)/2;
        if (a[middle]==value){
            found=true;
            pos=middle;
            cout<<"You have a winning combination of "<<a[middle]<<"\n"
                <<"at position "<<pos<<"! Congrats!"<<endl;
        }
        else if (a[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    if (!found)
        cout<<"Sorry, there is not a winning ticket this week."<<endl;
}

void problem12(){
    //Declare Variables
    const int SIZE=18;//Size of the array
    int accNums[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                       8080512,4562555,5552012,7825877,1250255,1005231,
                       6545231,3852085,7576651,7881200,4581002};
        
    //Initialize Variables
    int accNum;
    bool found=false;
    cout<<"Hello, enter a charge account number."<<endl;
    cin>>accNum;
    
    //Process/Map inputs to outputs
    /*for (int count=0;count<SIZE;count++){
        if (accNums[count]==accNum){
            cout<<"That is a valid number, found at position "<<count<<"."<<endl;
            found=true;
        }
        else if (count==SIZE-1&&!found)
            cout<<"Sorry, that number is invalid."<<endl;
    }*/
            
    //output data
    selSort(accNums,SIZE);
    binSrc2(accNums,SIZE,accNum);
            
    //Exit stage right!
    
}

void selSort(int a[],int n){
    int scan,minDex,minValu;
    for (scan=0;scan<(n-1);scan++){
        minDex=scan;
        minValu=a[scan];
        for (int index=scan+1;index<n;index++){
            if (a[index]<minValu){
                minValu=a[index];
                minDex=index;
            }
        }
        a[minDex]=a[scan];
        a[scan]=minValu;
    }
}

void binSrc2(int a[],int n,int value){
    int first=0;
    int last=n-1;
    int middle;
    bool found=false;
    int pos=-1;
    while (!found&&first<=last){
        middle=(first+last)/2;
        if (a[middle]==value){
            found=true;
            pos=middle;
            cout<<"That is a valid number, found at position "<<pos<<"."<<endl;
        }
        else if (a[middle]>value)
            last=middle-1;
        else
            first=middle+1;
    }
    if (!found)
        cout<<"Sorry, that number is invalid."<<endl;
}