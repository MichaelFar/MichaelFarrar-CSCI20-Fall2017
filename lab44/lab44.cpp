/*
Michael Farrar
11/13/17
csci 20
lab 4.4
April Browne

*/
#include <iostream>
#include <cstring>
#include <string.h>
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
    
    while (sessionEnd == 0)
    {
        
        cout << "Please tell me your first name" << endl;
        char userOneFirstName[11];
        cin >> userOneFirstName;
        
        cout << "Please tell me your last name" << endl;
        char userOneLastName[21];
        cin >> userOneLastName;
        
        
        cout << "Please tell me your first name" << endl;
        char userTwoFirstName[11];
        cin >> userTwoFirstName;
        while (strcmp (userOneFirstName, userTwoFirstName) == 0)//This function compares strings to eachother to see if they are the same, if they are the same it will ask to reinput it.
        {
            cout << "That first name is taken, please enter another" << endl;
            cin >> userTwoFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        char userTwoLastName[21];
        cin >> userTwoLastName;
        
        
        while (strcmp (userOneLastName, userTwoLastName) == 0)
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userTwoLastName;
            }
        cout << "Please tell me your first name" << endl;
        char userThreeFirstName[11];
        cin >> userThreeFirstName;
        while ((strcmp (userThreeFirstName, userTwoFirstName) == 0) || (strcmp (userThreeFirstName, userOneFirstName) == 0))
        {
            cout << "That first name is taken, please enter another" << endl;
            cin >> userThreeFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        char userThreeLastName[21];
        cin >> userThreeLastName;
        while ((strcmp (userThreeLastName, userTwoLastName) == 0) || (strcmp (userThreeLastName, userOneLastName) == 0))
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userThreeLastName;
            }
        cout << "Please tell me your first name" << endl;
        char userFourFirstName[11];
        cin >> userFourFirstName;
        while ((strcmp (userFourFirstName, userThreeFirstName) == 0) || (strcmp (userFourFirstName, userTwoFirstName) == 0) || (strcmp (userFourFirstName, userOneFirstName) == 0))
        {
            cout << "That first name is taken, please enter another" << endl;
            cin >> userFourFirstName;
            
            
        }
        cout << "Please tell me your last name" << endl;
        char userFourLastName[21];
        cin >> userFourLastName;
        while ((strcmp (userFourLastName, userThreeLastName) == 0) || (strcmp (userFourLastName, userTwoLastName) == 0) || (strcmp (userFourLastName, userOneLastName) == 0))
            {
                cout << "That last name is taken, please enter another" << endl;
                cin >> userFourLastName;
            }
        length_first_one = strlen(userOneFirstName);
        length_last_one = strlen(userOneLastName);
        length_first_two = strlen(userTwoFirstName);
        length_last_two = strlen(userTwoLastName);
        length_first_three = strlen(userThreeFirstName);
        length_last_three = strlen(userThreeLastName);
        length_first_four = strlen(userFourFirstName);
        length_last_four = strlen(userFourLastName);
        for(int i = 0 ; i < length_first_one ; i ++ ){
      cout << userOneFirstName[i];
        }
        cout << " ";
        for(int i = 0 ; i < length_last_one ; i ++ ){
      cout << userOneLastName[i];
        }
        cout << endl << "Choose one: " << endl<< endl;
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
