/*
Michael Farrar
Assignment 5
csci 020
April Browne
12/2/17
*/

#include <fstream>
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class hangman {//This class handles the generating of dashes and the counting of characters in the wordinput.txt file
                // You may notice that the variable and function names are underscore and related terms. This was because originally it generated underscores, but dashes are more clear to the user
    private:
    int numChar;
    string userAnswer;
    string fileInput;
    string generatedUnderscores;
    
    int countVariable;
    int underScoreCounter;
    int numUnderscore;
    public:
    
    hangman() {
        countVariable = 0;
        generatedUnderscores = "";
        underScoreCounter = 0;
    }
   
    void setcountChar(string input) {//This counts the number of characters in the word put into wordinput.txt
        
        numChar = input.length();
        for (int i = 0; i < numChar; i++)
        {
            countVariable += 1;
        }
        
    }
    
    
    void setUnderscoregen(string input)//This generates dashes for every character in the word in wordinput.txt
    {
        
        numUnderscore = input.length();
        for (int i = 0; i < numUnderscore; i++)
        {
            underScoreCounter += 1;
            generatedUnderscores.append("-");
        }
    }
    
    
    int getcountChar() {//The gets
        return countVariable;
    }
    string getUnderscoregen() {
        return generatedUnderscores;
    }
    int get_Underscoregen()
    {
        return underScoreCounter;
    }
    
    
};

int main(){
    ifstream fin;
    hangman one;
    
    int limbCount = 0;
    int i = 0;
    int choice = 0;
    string originalUnderscores;
    int sayOnce = 0;
    int amountOfDashes = 0;
    string wordtoGuess_two;
    string wordtoGuess_three;
    string wordtoGuess_four;
    string wordtoGuess_five;
    fin.open("wordinput.txt");
    string userChar = "-";
    string wordtoGuess_one = "hello";
    int count = 0;
    string underScores = "hello";
    fin >> wordtoGuess_one;
    fin >> wordtoGuess_two;
    fin >> wordtoGuess_three;
    fin >> wordtoGuess_four;
    fin >> wordtoGuess_five;
    
    cout << "Which of the five words do you want to guess? 1 2 3 4 or 5?" << endl;
    cin >> choice;
    if (choice == 1)
    {
    one.setcountChar(wordtoGuess_one);
    count = one.getcountChar();
    }
    else if (choice == 2)
    {
    one.setcountChar(wordtoGuess_two);
    count = one.getcountChar();
    }
    else if (choice == 3)
    {
    one.setcountChar(wordtoGuess_three);
    count = one.getcountChar();
    }
    else if (choice == 4)
    {
    one.setcountChar(wordtoGuess_four);
    count = one.getcountChar();
    }
    else if (choice == 5)
    {
    one.setcountChar(wordtoGuess_five);
    count = one.getcountChar();
        
    }
    
    
   if (choice == 1)
    {
    one.setUnderscoregen(wordtoGuess_one);
    underScores = one.getUnderscoregen();
    
    }
    else if (choice == 2)
    {
    one.setUnderscoregen(wordtoGuess_two);
    underScores = one.getUnderscoregen();
    
    }
    else if (choice == 3)
    {
    one.setUnderscoregen(wordtoGuess_three);
    underScores = one.getUnderscoregen();
    
    }
    else if (choice == 4)
    {
    one.setUnderscoregen(wordtoGuess_four);
    underScores = one.getUnderscoregen();
    
    }
    else if (choice == 5)
    {
    one.setUnderscoregen(wordtoGuess_five);
    underScores = one.getUnderscoregen();
    
        
    }
    
    for (i = 0; i < count; i++)//This for loop checks for dashes in wordinput.txt and replaces them with spaces. This means that although you cannot type spaces in wordinput.txt for multiple words, you can use dashes and it displays a space
    {
        if (wordtoGuess_one[i] == '-' && choice == 1)
        {
            amountOfDashes += 1;
            wordtoGuess_one[i] = ' ';
            underScores[i] = ' ';
        }
        else if (wordtoGuess_two[i] == '-' && choice == 2)
        {
            amountOfDashes += 1;
            wordtoGuess_two[i] = ' ';
            underScores[i] = ' ';
            
        }
        else if (wordtoGuess_three[i] == '-' && choice == 3)
        {
            amountOfDashes += 1;
            wordtoGuess_three[i] = ' ';
            underScores[i] = ' ';
            
        }
        else if (wordtoGuess_four[i] == '-' && choice == 4)
        {
            amountOfDashes += 1;
            wordtoGuess_four[i] = ' ';
            underScores[i] = ' ';
            
        }
        else if (wordtoGuess_five[i] == '-' && choice == 5)
        {
            amountOfDashes += 1;
            wordtoGuess_five[i] = ' ';
            underScores[i] = ' ';
        }
    };
    originalUnderscores = underScores;//originalUnderscores is to store the old value in underScores, The reason this was necessary was to handle the method of when to draw limbs
    cout << "Guess the letters! Don't let him hang!" << endl;
    while (limbCount < 7)
    {
        
        if (amountOfDashes >= 1)
        {
            cout << "There are " << count - amountOfDashes << " Letters in this phrase" << endl;
        }
        else
        {
            cout << "There are " << count << " Letters in this phrase" << endl;
        }
        //Below are all the hangman drawings, done in ascii
        if (limbCount == 0)//The amount of limbs is generated by how many guesses you got wrong, this is limbCount's job
        {
        cout <<  " _________     " << endl;
        cout <<  "|         |    "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout << underScores << "      " << endl;
            
        }
        if (limbCount == 1)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 2)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 3)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|         |\\   "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 4)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 5)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|        /     "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 6)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|        / \\  "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        originalUnderscores = underScores;//This resets originalUnderscores to whatever underScores is now, this enables for later comparison
        
        cin >> userChar;
        for (i = 0; i < count; i++)//This loop runs the same amount of times as the amount of characters in the word in wordinput.txt
        {
            
            if (userChar[0] == wordtoGuess_one[i] && choice == 1)//wordtoGuess_one is your typed in word
            {
                underScores[i] = userChar[0];
            }
            else if (userChar[0] == wordtoGuess_two[i] && choice == 2)
            {
                underScores[i] = userChar[0];
            }
            else if (userChar[0] == wordtoGuess_three[i] && choice == 3)
            {
                underScores[i] = userChar[0];
            }
            else if (userChar[0] == wordtoGuess_four[i] && choice == 4)
            {
                underScores[i] = userChar[0];
            }
            else if (userChar[0] == wordtoGuess_five[i] && choice == 5)
            {
                underScores[i] = userChar[0];
            }
            
            
        }
        if (underScores == originalUnderscores)//This is why origianlUnderscores was necessary, if they are equal and thus means if you guessed the letter incorrectly, it adds a limb.
        {
            limbCount += 1;
            
        }
        
        
           
    
        
        if (underScores == wordtoGuess_one || underScores == wordtoGuess_two || underScores == wordtoGuess_three || underScores == wordtoGuess_four || underScores == wordtoGuess_five)//Win condition
        {
            if (limbCount == 0)//The amount of limbs is generated by how many guesses you got wrong, this is limbCount's job
        {
        cout <<  " _________     " << endl;
        cout <<  "|         |    "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout <<  "|              "<< endl;
        cout << underScores << "      " << endl;
            
        }
        if (limbCount == 1)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 2)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 3)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|         |\\   "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 4)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 5)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|        /     "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
        if (limbCount == 6)
        {
            cout <<  " _________     " << endl;
            cout <<  "|         |    "<< endl;
            cout <<  "|         0    "<< endl;
            cout <<  "|        /|\\  "<< endl;
            cout <<  "|        / \\  "<< endl;
            cout <<  "|              "<< endl;
            cout <<  "|              "<< endl;
            cout << underScores << "      " << endl;
        }
            
            cout << "You win!" << endl;
            fin.close();
            return 0;
        }
            
    }
    if (choice == 1)
    {
    cout << "The phrase was " << wordtoGuess_one << endl;//This tells you what the word was if you lose
    cout << "You lose!" << endl;
    }
    if (choice == 2)
    {
    cout << "The phrase was " << wordtoGuess_two << endl;//This tells you what the word was if you lose
    cout << "You lose!" << endl;
    }
    if (choice == 3)
    {
    cout << "The phrase was " << wordtoGuess_three << endl;//This tells you what the word was if you lose
    cout << "You lose!" << endl;
    }
    if (choice == 4)
    {
    cout << "The phrase was " << wordtoGuess_four << endl;//This tells you what the word was if you lose
    cout << "You lose!" << endl;
    }
    if (choice == 5)
    {
    cout << "The phrase was " << wordtoGuess_five << endl;//This tells you what the word was if you lose
    cout << "You lose!" << endl;
    }
    fin.close();
}
