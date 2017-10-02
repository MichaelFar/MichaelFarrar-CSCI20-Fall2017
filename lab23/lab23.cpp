/*
Michael Farrar
9/27/17
CSCI 20
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randFunction(int firstNum, int secondNum) {// First function that generates a random number between two user inputs. It also seeds the algorithm
    
    
    srand(time(NULL));
    int genNum = rand() % (secondNum - firstNum) + firstNum;

}   

int swapFunction (int firstNum, int secondNum, int& userNum1, int& userNum2)//Second function that swaps the numbers
{
    userNum1 = secondNum;
    userNum2 = firstNum;
    
    
}

int main()
{
    int genNum = 0;
    int userNum1 = 0;
    int userNum2 = 0;
    int firstNum = 0;
    int secondNum = 0;
    cout << "Please input a range of numbers for the random number generator, the first number should be the lower number" << endl << "Hit enter after typing a number" << endl;
    cin >> userNum1;
    cin >> userNum2;
    firstNum = userNum1;
    secondNum = userNum2;
    swapFunction(firstNum, secondNum, userNum1, userNum2);//Function will swap the inputs before calling the randFunction
    genNum = randFunction(firstNum, secondNum);
    cout << genNum << endl;
}

