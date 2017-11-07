#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 10;

int main() {
    int countShirt = 0, countShoe = 0, countWatch = 0, countCoat = 0, countHat = 0, countTie = 0, countBag = 0, countGlasses = 0, countSocks = 0, countGloves = 0;
    
    double total = 0.0;
    int shoppingAmount = 1000;
    int menuSelect = 0;
    string shoppingCart[shoppingAmount];
    int amount[SIZE] {4, 5, 7, 8, 2, 3, 5, 7, 8, 9};
    string inventory[SIZE] {"Shirts(s)", " Pairs of Shoes", " Watches", " Coats", " Hats", " Ties", " Bags", " Glasses", " Socks", " Gloves"};
    double price[SIZE] {15.50, 40.20, 20.99, 60.40, 20.32, 12.50, 30.60, 80.99, 10.10, 13.70};
while(menuSelect != 11)
{
    if (shoppingAmount == 0)
    {
        cout << "Hello! Welcome to generic clothing store. Please type 0 - 10 to put an item in your cart, input 11 to end your session and print" << endl;
    }
    cin >> menuSelect;
    
    cout << inventory[menuSelect] << endl;
    cout << price[menuSelect] << endl;
    
    if (menuSelect == 0)
    {
        countShirt = countShirt + 1;
    }
    else if(menuSelect == 1)
    {
        countShoe = countShoe + 1;
    }
    else if(menuSelect == 2)
    {
        countWatch = countWatch + 1;
    }
    else if(menuSelect == 3)
    {
        countCoat = countCoat + 1;
    }
    else if(menuSelect == 4)
    {
        countHat = countHat + 1;
    }
    else if(menuSelect == 5)
    {
        countTie = countTie + 1;
    }
    else if(menuSelect == 6)
    {
        countBag = countBag + 1;
    }
    else if(menuSelect == 7)
    {
        countGlasses = countGlasses + 1;
    }
    else if(menuSelect == 8)
    {
        countSocks = countSocks + 1;
    }
    else if(menuSelect == 9)
    {
        countGloves = countGloves + 1;
    }
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
cout << "Your total " << total << " dollars." << endl;


    
}

