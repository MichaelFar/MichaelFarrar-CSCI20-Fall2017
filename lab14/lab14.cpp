//Michael Farrar
//9/6/17
//This program tells you how many of each coin you have with tax for a cash machine
//
#include <iostream>
using namespace std;


int main(){

int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
int userInput = 0;
double Cash = 0.0;
int changeQuart = 0;
int changeDime = 0;
int changeNickel = 0;
int changePenny = 0;
int totalQuart = 0;
int totalDime = 0;
int totalNickel = 0;
int totalPenny = 0;
double percentage = 0.0;
cout << "Please enter desired amount of cents" << endl;
// The block below this line calculates how many of each coin you have given user input.
cin >> userInput; // User input is put here
totalQuart = userInput / quarter;
cout << "You have "<< totalQuart <<" quarters"<<endl;
changeQuart = userInput % quarter;
totalDime =changeQuart / dime;
changeDime = changeQuart % dime;
cout << "You have " << totalDime << " dimes"<<endl;
totalNickel = changeDime / nickel;
cout << "You have "<< totalNickel<< " nickels"<<endl;
changeNickel = changeDime % nickel;
totalPenny = changeNickel / penny;
cout << "You have "<<totalPenny<< " pennies" << endl;
changePenny = changeNickel % penny;

Cash = (totalQuart * quarter) + (totalDime * dime) + (totalNickel * nickel) + (totalPenny * penny);
percentage = Cash * .00109;
percentage = Cash / 10;
Cash = Cash * .108;
Cash = userInput - Cash;
cout << "You get " << Cash << " Cents";

return 0;    



    
}