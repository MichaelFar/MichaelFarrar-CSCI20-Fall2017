//Michael Farrar
// 9/15/17
//Assignment001


//This program is basically a cash register for a yogurt shop
#include <iostream>
#include <string>//I know that I didn't use any string variable, but if I need to change this later with a string I may do so.
#include <iomanip>//This is used for the rounding function I used at the end


using namespace std;

struct yogurt { //This struct would've been more useful if this program handled more than one order
    
    int topping = 0;
    double ouncePrice = 0.17;
    double ounce = 0.00;
    double coupon = 0.00;
    double salesTax = 1.0725;
    double toppingPrice = 0.50;
    double tip = 0.00;
    double finalPrice = 0.00;
    double dummyfinalPrice = 0.00;
};



int main() {
//These lines are for getting inputs from the user
int invalid = 0;//This variable is what changes to tell if the coupon is valid.

yogurt order_one;
cout << "Welcome! Let's get started what size do you want in oz. ?" << endl;
cin >> order_one.ounce;

cout << "How many toppings do you want? If none type 0" << endl;
cin >> order_one.topping;

cout << "How much is your coupon worth? Valid answers are between 10 and 50 percent off. Please omit the percentage symbol '%'. If you have no coupon type 0. " << endl;
cin >> order_one.coupon;

do {//This is code for verifying if the coupon has the correct percentage.

if (order_one.coupon >= 1 && order_one.coupon < 10 or order_one.coupon > 50)
    {
    invalid = 1;
    cout << "That coupon is invalid. Please input a valid value" << endl;
    cin >> order_one.coupon;
        
    }
else
    {
        invalid = 0;
    }
    
}
while (invalid == 1);
cout << "Would you like to tip? If so how much?" << endl;
cin >> order_one.tip;

//Below is the algorithm for calculating price

order_one.coupon = order_one.coupon * 0.01; 
order_one.finalPrice = (order_one.ouncePrice * order_one.ounce) + (order_one.topping * order_one.toppingPrice);
order_one.dummyfinalPrice = order_one.finalPrice;
order_one.coupon = order_one.coupon * order_one.dummyfinalPrice; 
order_one.dummyfinalPrice = order_one.dummyfinalPrice - order_one.coupon;

if (order_one.coupon > 0.00)//I was confused as to why if the user used no coupon the result would print 0. It turns out it was due to dummyfinalPrice being the same as finalPrice. That's why I wrote this 'if' statement
{
    order_one.finalPrice = order_one.dummyfinalPrice;
};
order_one.finalPrice = (order_one.finalPrice * order_one.salesTax) + order_one.tip;
cout << "Your total is $"; 
cout << fixed << setprecision(2) << order_one.finalPrice << ". Thank You and come again!"; //My fancy rounding code, I had to look up how to actually round this way


return 0;

}
//A. Welcome! Let's get started what size do you want in oz. ?
/*
4
How many toppings do you want? If none type 0
1
How much is your coupon worth? Valid answers are between 10 and 50 percent off. Please omit the percentage symbol '%'. If you have no coupon type 0. 
15
Would you like to tip? If so how much?
0.25
Your total is $1.33. Thank You and come again!

Process exited with code: 0
 
//B. 16, 7, 0%, $0

Welcome! Let's get started what size do you want in oz. ?
16
How many toppings do you want? If none type 0
7
How much is your coupon worth? Valid answers are between 10 and 50 percent off. Please omit the percentage symbol '%'. If you have no coupon type 0. 
0
Would you like to tip? If so how much?
0
Your total is $6.67. Thank You and come again!

//C. 32, 4, 25%, .05

Welcome! Let's get started what size do you want in oz. ?
32
How many toppings do you want? If none type 0
4
How much is your coupon worth? Valid answers are between 10 and 50 percent off. Please omit the percentage symbol '%'. If you have no coupon type 0. 
25
Would you like to tip? If so how much?
.05
Your total is $6.03. Thank You and come again!

//D. 14, 10, 50%, $1

Welcome! Let's get started what size do you want in oz. ?
14
How many toppings do you want? If none type 0
10
How much is your coupon worth? Valid answers are between 10 and 50 percent off. Please omit the percentage symbol '%'. If you have no coupon type 0. 
50
Would you like to tip? If so how much?
1
Your total is $4.96. Thank You and come again!

*/