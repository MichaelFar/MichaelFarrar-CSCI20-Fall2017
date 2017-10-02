/*
Michael Farrar
csci 20
10/2/17
*/

//This code generates a user chosen range then swaps it. The result is the amount of pounds, which is then converted to kilograms
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randomGen(int min, int max)//This function generates a number between the parameter ranges. it then swaps those values
{
    int changeMin = 0;
    int changeMax = 0;
    changeMax = min;
    changeMin = max;
    srand(time(NULL));
    return rand() % (changeMax - changeMin) + changeMin;
    
}

double poundToKilogram (double pound)//Calculator for pounds to kilograms
{
    double kilo = pound / 2.2046226218;
    return kilo;
}

double kiloToPound (double kilo)//calculator for kilograms to pounds
{
    double pound = kilo * 2.2046226218;
    return pound;
}



int main()
{
    cout << "Please input 2 numbers to be the range for the RNG, first number is the minimum. Second is the maximum" << endl;
    int min = 0;//min and max are variables for storing user input
    int max = 0;//
    cin >> min;
    cin >> max;
    double final = randomGen(min, max);
    cout << "This how many kilograms" << endl;
    cout << poundToKilogram(final) << endl;// Argument was set to the generated number
    cout << "This how many pounds" << endl;
    cout << kiloToPound(poundToKilogram(final)) << endl;// Kilograms were calculated and the argument for kiloToPound was set to poundToKilogram to prove that the converter is correct
    cout << final <<" was the number that the generator came up with "<< endl;
}