/*
Michael Farrar
csci 20



*/

#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 10;
class shop {
    
    private:
    double total;
    int shoppingAmount;
    int countShirt, countShoe, countWatch, countCoat, countHat, countTie, countBag, countGlasses, countSocks, countGloves;
    int menuSelect;
    string inventory[];
    int amount[];
    string shoppingCart[];
    double price[];
    
    public:
    
shop(){
    int countShirt = 0, countShoe = 0, countWatch = 0, countCoat = 0, countHat = 0, countTie = 0, countBag = 0, countGlasses = 0, countSocks = 0, countGloves = 0;
    
    double total = 0.0;
    int shoppingAmount = 1000;
    int menuSelect = 0;
    string shoppingCart[shoppingAmount];
    int amount[SIZE] {4, 5, 7, 8, 2, 3, 5, 7, 8, 9};// The amount of each item in stock
    string inventory[SIZE] {"Shirts(s)", " Pairs of Shoes", " Watches", " Coats", " Hats", " Ties", " Bags", " Glasses", " Socks", " Gloves"};// The items for sale
    double price[SIZE] {15.50, 40.20, 20.99, 60.40, 20.32, 12.50, 30.60, 80.99, 10.10, 13.70};// Their prices
    }
int GetUserInput(int userInput)
{
        if (userInput == 0)
    {
         countShirt = countShirt + 1;
    }
    else if(userInput == 1)
    {
         countShoe = countShoe + 1;
    }
    else if(userInput == 2)
    {
         countWatch = countWatch + 1;
    }
    else if(userInput == 3)
    {
         countCoat = countCoat + 1;
    }
    else if(userInput == 4)
    {
         countHat = countHat + 1;
    }
    else if(userInput == 5)
    {
         countTie = countTie + 1;
    }
    else if(userInput == 6)
    {
         countBag = countBag + 1;
    }
    else if(userInput == 7)
    {
         countGlasses = countGlasses + 1;
    }
    else if(userInput == 8)
    {
         countSocks = countSocks + 1;
    }
    else if(userInput == 9)
    {
         countGloves = countGloves + 1;
    }
}
int SetUserInput() {
    return countBag, countCoat, countGlasses, countGloves, countHat, countShirt, countShoe, countSocks, countTie, countWatch;
}

};
int main() {
    int countShirt = 0, countShoe = 0, countWatch = 0, countCoat = 0, countHat = 0, countTie = 0, countBag = 0, countGlasses = 0, countSocks = 0, countGloves = 0;
    
    double total = 0.0;
    int shoppingAmount = 1000;
    int menuSelect = 0;
    string shoppingCart[shoppingAmount];
    int amount[SIZE] {4, 5, 7, 8, 2, 3, 5, 7, 8, 9};// The amount of each item in stock
    string inventory[SIZE] {"Shirts(s)", " Pairs of Shoes", " Watches", " Coats", " Hats", " Ties", " Bags", " Glasses", " Socks", " Gloves"};// The items for sale
    double price[SIZE] {15.50, 40.20, 20.99, 60.40, 20.32, 12.50, 30.60, 80.99, 10.10, 13.70};
    shop userCart_one;
    
    shop();
while (menuSelect < 11)
{
    if (shoppingAmount == 1000)
    {
        cout << "Hello! Welcome to generic clothing store. Please type 0 - 10 to put an item in your cart, input 11 to end your session and print" << endl;
        shoppingAmount = shoppingAmount = 1;
    }
    cin >> menuSelect;
    
    cout << inventory[menuSelect] << endl;
    cout << price[menuSelect] << endl;
    
    userCart_one.GetUserInput(menuSelect);
    userCart_one.SetUserInput();
    
    
    if (amount[menuSelect] == 0)
    {
        amount[menuSelect] = 0;
        cout << "Sorry, we are all out of that item" << endl;
        
    }
    else
    {
        
        amount[menuSelect] = amount[menuSelect] - 1;
        total = total + price[menuSelect];
        
    }
    cout << "Your total is " << total << " dollars" << endl;
    cout << "Your cart: " << countShirt << " Shirts" << endl << countShoe << " pairs of shoes" << endl << countWatch << " watches" << endl << countCoat << " coats" << endl << countHat << " hats" << endl << countTie << " Ties" << endl << countBag << " bags" << endl << countGlasses << " pairs of glasses" << endl << countSocks << " pairs of socks" << endl << countGloves << " pairs of gloves" << endl;  

    
}



    
}


