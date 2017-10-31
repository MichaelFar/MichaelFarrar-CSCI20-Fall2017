//Michael Farrar
//Assignment 3.0 Game
//10/29/17
//csci 020

#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;
class Game {
    
    private:
    int roll;
    
    public:
    int PlayerDiceRoll(int input) {//This is the dice roll for Player one. 
        
        srand(time(NULL));
        int rollValue = 0;
        int roll = 0;
        roll = (rand() % 6) + 1;
        if (input == 0)
        {
            roll = 0;
        }
        rollValue = roll;
        if (rollValue == 1)
        {
            return rollValue = 0;
        }
        while (rollValue == 0)
        {
            roll = (rand() % 6) + 1;
            rollValue = roll;
        }
    }

    int PlayerTwoDiceRoll(int input) {//Player two also has a dice roll
        
        srand(time(NULL));
        int rollValue = 0;
        int roll = 0;
        roll = (rand() % 6) + 1;
        rollValue = roll;
        if (input == 0)
        {
            roll = 0;
        }
        if (rollValue == 1)
        {
            return rollValue = 0;
        }
        while (rollValue == 0)
        {
            roll = (rand() % 6) + 1;
            rollValue = roll;
        }
        
    }
};

int main()
{
    Game playerOne;
    Game playerTwo;
    int firstTempTally = 0;//The "temp tally" variables hold the points you would get if you passed, if you don't pass and you get a roll of 1 you lose the value held with the temp tally variables
    int secondTempTally = 0;
    int secondUserInput = 0;// The userinput variables are how the user chooses whether or not to roll or pass.
    int firstUserInput = 0;
    int playerOneTally = 0;//The Tally variables hold the permanent score of the players
    int playerTwoTally = 0;
    int FirstPlayerRoll = 0;//The Roll variables hold the value of the rolls
    int SecondPlayerRoll = 0;
    playerOneTally = FirstPlayerRoll;
    playerTwoTally = SecondPlayerRoll;

while (playerOneTally < 100 || playerTwoTally < 100)//This while loop is the actual game
{
    while (playerTwoTally >= 0 && playerTwoTally <= 100 || secondUserInput == 0)//This while loop is for player one's turn
        {
        if (playerTwoTally >= 0 && playerTwoTally <= 100 || secondUserInput == 0)//These next lines of code perform the task of orchestrating the player one turn.
        {
            
            if (playerOneTally >= 100)// Win condition is 100, but you can roll in such a way that you would be above 100, therefore >= is used
        {
            cout << "Congratulations! You win Player 1!" << endl;
            return 0;
        }
            cout << "Player 1 Turn" << endl <<"Please input 1 to roll or 0 to pass" << endl << endl << endl;
            
            cin >> firstUserInput;
            
            if (firstUserInput == 1)
            {
                FirstPlayerRoll = playerOne.PlayerDiceRoll(firstUserInput);
                firstTempTally = firstTempTally + FirstPlayerRoll;//Temp tally is used to add FirstPlayerRoll to itself
                
            }
            else//The loop is broken if you pass
            {
                break;
            }
            cout << "You got " << FirstPlayerRoll << endl;//This tells you what you rolled
            
                if (FirstPlayerRoll == 0)//Note how this is zero and not one, you cannot roll zero, but you can roll one. In order to make sure that the score did not take that one into account I told it to treat 1 as 0
                {
                    
                    playerOneTally = playerOneTally - firstTempTally; // This line handles the subtraction of points if you roll a 1
                    cout << "Player one does not get the " << firstTempTally << " points this round" << endl << endl << endl << endl;;
                }
                else
                {
                    playerOneTally = playerOneTally + FirstPlayerRoll;// This makes your score permanent with tempTally
                    
                    cout << "Player 1's points : " << playerOneTally << endl << endl << endl;
                }
            
            if (FirstPlayerRoll > 1)
            {
                cout << "Roll again?" << endl << "Please input 1 to continue or 0 to pass" << endl << endl << endl;
                cin >> firstUserInput;//How you continue your turn
                
            }
            else
            {
                firstTempTally = 0;//Every break needs to reset temp tally
                break;
            }
            if (firstUserInput == 0)
            {
                firstTempTally = 0;
                break;
            }
            
                
                
            
            
            
            
        }
        
    }// The rest of the code is identical to the PlayerOneTurn, of course with the only difference being it's player two.
    //Note: I would've put both of these turns withing functions, but we aren't allowed to have inputs and outputs outside the main(), I'm sure you have your reasons, but it made the main() really messy :(

while (playerOneTally >= 0 && playerOneTally < 100 || playerTwoTally >= 0 && playerTwoTally < 100 || secondUserInput == 1)
    {
        
         if (playerTwoTally >= 100)
        {
            cout << "Congratulation! You win Player 2!" << endl << endl << endl;
            return 0;
        }
    
        if (playerOneTally >= 0 && playerOneTally <= 100 || firstUserInput == 0)
        {
            int seed = (rand() % 100) + 1;
            
            cout << "Player 2 Turn" << endl << "Please input 1 to roll or 0 to pass" << endl << endl << endl;
            secondUserInput = (rand() % 10) + 1;
            if (secondUserInput <= 5)
            {
                secondUserInput = 0;
                cout << secondUserInput << endl;
            }
            else
            {
                secondUserInput = 1;
                cout << secondUserInput << endl;
                srand(seed);
            }
            if (secondUserInput == 1)
            {
                SecondPlayerRoll = playerTwo.PlayerTwoDiceRoll(secondUserInput);
                secondTempTally = secondTempTally + SecondPlayerRoll;
                cout << "You got " << SecondPlayerRoll << endl;
            }
            else
            {
                break;
            }
            
            
            
            
            if (SecondPlayerRoll == 0)
            {
                playerTwoTally = playerTwoTally - secondTempTally;
                cout << "Player two does not get the " << secondTempTally << " points this round" << endl << endl << endl << endl;;
            }
            else
            {
                playerTwoTally = SecondPlayerRoll + playerTwoTally;
                cout << "Player 2's points :" << playerTwoTally << endl << endl << endl << endl;;
            }
            if (SecondPlayerRoll > 1)
            {
                cout << "Roll again?" << endl << "Please input 1 to continue or 0 to pass" << endl << endl << endl << endl;;
                secondUserInput = (rand() % 10) + 1;
                if (secondUserInput <= 5)
                {
                    secondUserInput = 0;
                    cout << secondUserInput << endl;
                }
                else
                {
                    secondUserInput = 1;
                    cout << secondUserInput << endl;
                    srand(seed);
                } 
                
            }
            else
            {
                secondTempTally = 0;
                break;
            }
            if (secondUserInput == 0)
            {
                secondTempTally = 0;
                break;
            }
            
            
        }
        
    
}
    
}
}
/*
Player 1 Turn
Please input 1 to roll or 0 to pass


1
You got 3
Player 1's points : 3



Roll again?
Please input 1 to continue or 0 to pass



1
Player 1 Turn
Please input 1 to roll or 0 to pass


1
You got 2
Player 1's points : 5



Roll again?
Please input 1 to continue or 0 to pass










*/