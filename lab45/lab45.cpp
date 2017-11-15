/*Michael Farrar
csci 20
11/15/17
User name code
*/

#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;

int main() {
    int length_first_one = 0;//These are for calculating the length of the names for use later
    int length_last_one = 0;
    int length_first_two = 0;
    int length_last_two = 0;
    int length_first_three = 0;
    int length_last_three = 0;
    int length_first_four = 0;
    int length_last_four = 0;
    int sessionEnd = 0;
    int i = 0;
    while (sessionEnd == 0)
    {
        cout << "Please tell me your first name" << endl;
            string userOneFirstName;
            cin >> userOneFirstName;
        while (userOneFirstName.length() > 10)
        {
            if (userOneFirstName.length() > 10)
            {
                cout << "That first name is taken or is longer than ten characters, please enter another" << endl;
                cin >> userOneFirstName;
            }
            
        }
        
        
        cout << "Please tell me your last name" << endl;
        string userOneLastName;
        cin >> userOneLastName;
        while (userOneLastName.length() > 20)
        {
            if (userOneLastName.length() > 20)
            {
                cout << "That last name is taken or is longer than twenty characters, please enter another" << endl;
                cin >> userOneLastName;
            }
            
        }
        
        
        cout << "Please tell me your first name" << endl;
        string userTwoFirstName;
        cin >> userTwoFirstName;
        
        while (userOneFirstName.length() > 10 || (userOneFirstName.compare(userTwoFirstName) == 0))//This function compares strings to eachother to see if they are the same, if they are the same it will ask to reinput it.
        {
            cout << "That first name is taken or is longer than ten characters, please enter another" << endl;
            cin >> userTwoFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        string userTwoLastName;
        cin >> userTwoLastName;
        
        
        while (userOneLastName.length() > 20 || (userOneLastName.compare(userTwoLastName) == 0))
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userTwoLastName;
            }
        cout << "Please tell me your first name" << endl;
        string userThreeFirstName;
        cin >> userThreeFirstName;
        while (userThreeFirstName.length() > 10 || (userThreeFirstName.compare(userTwoFirstName)) == 0 || (userThreeFirstName.compare(userOneFirstName) == 0))
        {
            cout << "That first name is taken or is longer than ten characters, please enter another" << endl;
            cin >> userThreeFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        string userThreeLastName;
        cin >> userThreeLastName;
        while (userThreeLastName.length() > 20 || (userThreeLastName.compare(userTwoLastName) == 0) || (userThreeLastName.compare(userOneLastName) == 0))
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userThreeLastName;
            }
        cout << "Please tell me your first name" << endl;
        string userFourFirstName;
        cin >> userFourFirstName;
        while (userFourFirstName.length() > 10 || (userFourFirstName.compare(userThreeFirstName) == 0) || (userFourFirstName.compare(userTwoFirstName) == 0) || (userFourFirstName.compare(userOneFirstName) == 0))
        {
            cout << "That first name is taken or is longer than ten characters, please enter another" << endl;
            cin >> userFourFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        string userFourLastName;
        cin >> userFourLastName;
        
        while (userFourLastName.length() > 20 || (userFourLastName.compare(userThreeLastName) == 0) || (userFourLastName.compare(userTwoLastName) == 0) || (userFourLastName.compare(userOneLastName) == 0))
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userFourLastName;
            }
        
        
        
        
        length_first_one = userOneFirstName.length();//These take the lenngth of the strings and put them in the for loop
        length_last_one = userOneLastName.length();
        length_first_two = userTwoFirstName.length();
        length_last_two = userTwoLastName.length();
        length_first_three = userThreeFirstName.length();
        length_last_three = userThreeLastName.length();
        length_first_four = userFourFirstName.length();
        length_last_four = userFourLastName.length();
        for(int i = 0 ; i < length_first_one ; i ++ ){
      cout << userOneFirstName[i];
        }
        cout << " ";
        for(int i = 0 ; i < length_last_one ; i ++ ){
      cout << userOneLastName[i];
        }
        cout << endl << "Choose one: " << endl<< endl;//Suggestion calculator
        cout << userOneFirstName[0] << userOneFirstName[1] << userOneLastName << endl;
        cout << userOneFirstName << userOneLastName << endl;
        cout << userOneFirstName[0] << userOneLastName << endl<< endl<< endl;
        cout << " ";
        for(int i = 0 ; i < length_first_two ; i ++ ){
      cout << userTwoFirstName[i];
        }
        cout << " ";
        for(int i = 0 ; i < length_last_two ; i ++ ){
      cout << userTwoLastName[i];
        }
        cout << endl <<  "Choose one: " << endl<< endl;
        cout << userTwoFirstName[0] << userTwoFirstName[1] << userTwoLastName << endl;
        cout << userTwoFirstName << userTwoLastName << endl;
        cout << userTwoFirstName[0] << userTwoLastName << endl<< endl<< endl;
        cout << " ";
        for(int i = 0 ; i < length_first_three ; i ++ ){
      cout << userThreeFirstName[i];
        }
        cout << " " << endl;
        for(int i = 0 ; i < length_last_three ; i ++ ){
      cout << userThreeLastName[i];
        }
        cout <<endl << "Choose one: " << endl<< endl;
        cout << userThreeFirstName[0] << userThreeFirstName[1] << userThreeLastName << endl;
        cout << userThreeFirstName << userThreeLastName << endl;
        cout << userThreeFirstName[0] << userThreeLastName << endl<< endl<< endl;
        cout << " ";
        for(int i = 0 ; i < length_first_four ; i ++ ){
      cout << userFourFirstName[i];
        }
        cout << " ";
        for(int i = 0 ; i < length_last_four ; i ++ ){
      cout << userFourLastName[i];
        }
        cout << endl <<"Choose one: " << endl << endl;
        cout << userFourFirstName[0] << userFourFirstName[1] << userFourLastName << endl;
        cout << userFourFirstName << userFourLastName << endl;
        cout << userFourFirstName[0] << userFourLastName << endl<< endl<< endl;

        
        cout << "Quit? 1 is yes, 0 is no" << endl;
        cin >> sessionEnd;
        
    }
        
    }

/*
Please tell me your first name
Michael
Please tell me your last name
Farrar
Please tell me your first name
April
Please tell me your last name
Browne
Please tell me your first name
AnaElizabeth
That first name is taken or is longer than ten characters, please enter another
Ana
Please tell me your last name
Hazeltine-Smith
Please tell me your first name
James
Please tell me your last name
James
Michael Farrar
Choose one: 

MiFarrar
MichaelFarrar
MFarrar


 April Browne
Choose one: 

ApBrowne
AprilBrowne
ABrowne


 Ana 
Hazeltine-Smith
Choose one: 

AnHazeltine-Smith
AnaHazeltine-Smith
AHazeltine-Smith


 James James
Choose one: 

JaJames
JamesJames
JJames


Quit? 1 is yes, 0 is no








*/