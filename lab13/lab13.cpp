
//Michael Farrar
//8/30/17
//This code calculates the populations after the amount of years inputted

#include <iostream>
using namespace std;

int main()
{
int popChange = 0;
int userInp;
int currentPop = 325770074;
int finalPop = 0;
    cout << "Population Calculator:" <<endl<< "Please input the desired amount of years to predict population change:"<<endl;
    cin >> userInp;
    popChange = 31536000/12;
    currentPop = currentPop + popChange*userInp;
    cout << "The population will be " << currentPop << endl;
    
}