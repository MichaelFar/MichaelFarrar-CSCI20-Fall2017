/*
Michael Farrar
9/25/17
CSCI 20
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generated() { // This function seeds the algorithm and generates the random number between 1 and 100.

    srand (time(NULL));

    int genNum = (rand() % 100) + 1;
   
    cout << genNum;

}

int main()
{
    
    generated(); //Here the function is called

    return 0;
};