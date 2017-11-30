#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;//This will hold the length of the name
    char * name = new char[];//This is a char pointer array

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;//This line inputs from the console into the pointer name

    char * head  = name;//head is declared then assigned to the value of name
    char * tail = name;//tail is declared then assigned to the value of name
    nameLength = strlen(*name);//nameLength is given the value of the amount of characters in name. The * is asking for the value that name points to not the address

    cout << "Your word is " << firststr << endl;

    if (nameLength<10)
    {
         while (*head != '\0')//While the value that head points to is not \0 which is the null terminator, it prints head and adds one to it
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;//This if statement is for controlling the length of *name
     }

     cout << endl;

     tail = &name[strlen(name) - 1];//This pointer tail is set to the value of the dynamic array name. Minus one

     if (nameLength < 10)//This is a reideration of the character limit imposed on name
     {
          while (tail != name)//This is saying "while the address of tail is not equal to the address of name" output tail and subtract from the address until it becomes the address of name.
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;//pointer head is set to the address of pointer name
     tail = &name[strlen(name) - 1];//pointer tail is set to the dynamic array name as from before

     head++;//Adds one to head
     tail--;//subtracts one form tail

     if (*head == *tail)//if the values in head's address does not equal the value in tail's address
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}