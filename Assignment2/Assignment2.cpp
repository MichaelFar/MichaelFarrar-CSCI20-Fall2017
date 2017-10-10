/*Michael Farrar
10 / 9 / 2017
CSCI 20
Assignment 2
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>// set precision library
using namespace std;

class shoe {//This class is for the calculation of your shoe size
    private:
    
    double SizeInch;
    
    
    public:
    
    
    double setInches(double SizeInch);
    string GetSizeType(double SizeInch);
    double Rounder(double SizeInch);
    double InchToCent(double SizeInch);
    
    
    
    
    
    
    
    
    
    
    
    
    
};

double setInches(double SizeInch) {//The user's inches are stored here
    double UserInch = 0.00;
    UserInch = SizeInch;
};

double InchToCent(double SizeInch){//Centimeter conversion
    double CentFromInch = 0.00;
    CentFromInch = SizeInch * 2.54;
    return CentFromInch;
};

double Rounder(double SizeInch){//The rounder
    double RoundedNum = 0.00;
    RoundedNum = SizeInch;
    return RoundedNum;
};

double GetSizeType(double SizeInch){//This determines your shoe size
    double AmericanSize = 6.00;
    double UKsize = 5.5;
    string EUsize = "39";
    
    if (SizeInch >= 9.25 && SizeInch < 9.5)
    {
        AmericanSize = AmericanSize + 0;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 9.5 && SizeInch < 9.625)
    {
       AmericanSize = AmericanSize + .5; 
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 9.625 && SizeInch < 9.75)
    {
        AmericanSize = AmericanSize + 1;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 9.75 && SizeInch < 9.9375)
    {
        AmericanSize = AmericanSize + 1.5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 9.9375  && SizeInch < 10.125)
    {
        AmericanSize = AmericanSize + 2;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.125 && SizeInch < 10.25)
    {
        AmericanSize = AmericanSize + 2.5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.25 && SizeInch < 10.4375)
    {
        AmericanSize = AmericanSize + 3;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.4375 && SizeInch < 10.5625)
    {
        AmericanSize = AmericanSize + 3.5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.5625 && SizeInch < 10.75)
    {
        AmericanSize = AmericanSize + 4;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.75 && SizeInch < 10.9375)
    {
        AmericanSize = AmericanSize + 4.5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 10.9375 && SizeInch < 11.125)
    {
        AmericanSize = AmericanSize + 5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 11.125 && SizeInch < 11.25)
    {
        AmericanSize = AmericanSize + 5.5;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 11.25 && SizeInch < 11.5625)
    {
        AmericanSize = AmericanSize + 6;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 11.5625 && SizeInch < 11.875)
    {
        AmericanSize = AmericanSize + 7;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 11.875 && SizeInch < 12.1875)
    {
        AmericanSize = AmericanSize + 8;
        cout << "<You are a shoe-size " << AmericanSize << " in the US" << endl;
    }
    else if(SizeInch >= 12.1875)
    {
        AmericanSize = AmericanSize + 9;
        cout << "<You are over shoe-size " << AmericanSize << " in the US" << endl;
    }
    else
    {
    cout << "You are under size " << AmericanSize << " in the US"<<endl;    
    };
    
    
    
    
    
    
    if (SizeInch >= 9.25 && SizeInch < 9.5)
    {
        UKsize = UKsize + 0;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 9.5 && SizeInch < 9.625)
    {
       UKsize = UKsize + .5; 
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 9.625 && SizeInch < 9.75)
    {
        UKsize = UKsize + 1;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 9.75 && SizeInch < 9.9375)
    {
        UKsize = UKsize + 1.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 9.9375  && SizeInch < 10.125)
    {
        UKsize = UKsize + 2;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.125 && SizeInch < 10.25)
    {
        UKsize = UKsize + 2.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.25 && SizeInch < 10.4375)
    {
        UKsize = UKsize + 3;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.4375 && SizeInch < 10.5625)
    {
        UKsize = UKsize + 3.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.5625 && SizeInch < 10.75)
    {
        UKsize = UKsize + 4;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.75 && SizeInch < 10.9375)
    {
        UKsize = UKsize + 4.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 10.9375 && SizeInch < 11.125)
    {
        UKsize = UKsize + 5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 11.125 && SizeInch < 11.25)
    {
        UKsize = UKsize + 5.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 11.25 && SizeInch < 11.5625)
    {
        UKsize = UKsize + 6.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 11.5625 && SizeInch < 11.875)
    {
        UKsize = UKsize + 7.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 11.875 && SizeInch < 12.1875)
    {
        UKsize = UKsize + 8.5;
        cout << "<You are a shoe-size " << UKsize << " in the UK" << endl;
    }
    else if(SizeInch >= 12.1875)
    {
        UKsize = UKsize + 9.5;
        cout << "<You are over shoe-size " << UKsize << " in the UK" << endl;
    }
    else
    {
    cout << "You are under size " << UKsize << " in the UK" << endl;    
    };
    
        
    
    
    
    
    
    
    
    
    if (SizeInch >= 9.25 && SizeInch < 9.5)
    {
        EUsize = "39";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 9.5 && SizeInch < 9.625)
    {
        EUsize = "39";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 9.625 && SizeInch < 9.75)
    {
        EUsize = "40";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 9.75 && SizeInch < 9.9375)
    {
        EUsize = "40 - 41";// HERE YOU DUMMY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 9.9375  && SizeInch < 10.125)
    {
        EUsize = "41";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.125 && SizeInch < 10.25)
    {
        EUsize = "41 - 42";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.25 && SizeInch < 10.4375)
    {
        EUsize = "42";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.4375 && SizeInch < 10.5625)
    {
        EUsize = "42 - 43";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.5625 && SizeInch < 10.75)
    {
        EUsize = "43 - 44";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.75 && SizeInch < 10.9375)
    {
        EUsize = "43 - 44.5";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 10.9375 && SizeInch < 11.125)
    {
        EUsize = "44 - 45";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 11.125 && SizeInch < 11.25)
    {
        EUsize = "44 - 45";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 11.25 && SizeInch < 11.5625)
    {
        EUsize = "45 - 46";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 11.5625 && SizeInch < 11.875)
    {
        EUsize = "46 - 47";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 11.875 && SizeInch < 12.1875)
    {
        EUsize = "47 - 48";
        cout << "<You are a shoe-size " << EUsize << " in the EU" << endl;
    }
    else if(SizeInch >= 12.1875)
    {
        EUsize = "48 - 49";
        cout << "<You are over shoe-size " << EUsize << " in the EU" << endl;
    }
    else
    {
    cout << "You are under size " << EUsize<<" in the EU" << endl;    
    }
}   
    
int main()
{
    double userFootSize = 0.00;
    cout << "Welcome to the shoe size calculator!" << endl << "Please enter the length of your foot in inches :  " << endl;
    cin >> userFootSize;
    GetSizeType(userFootSize);//Function call for that massive if/else statement function
    cout << setprecision(3) <<InchToCent(userFootSize) << " is how many centimeters that is." << endl;
    
}
    
//I used the website http://www.candefashions.com/about/shoe-size-conversion-chart/ for sizes. So if you're going to input a number make sure it is between 9.25 and 12.1.
// Otherwise it'll say that it is less than the smallest size listed on that site.
/*
10.5
<You are a shoe-size 9.5 in the US
<You are a shoe-size 9 in the UK
<You are a shoe-size 42 - 43 in the EU
26.7 is how many centimeters that is.




10.0


<You are a shoe-size 8 in the US
<You are a shoe-size 7.5 in the UK
<You are a shoe-size 41 in the EU
25.4 is how many centimeters that is.




10.7

<You are a shoe-size 10 in the US
<You are a shoe-size 9.5 in the UK
<You are a shoe-size 43 - 44 in the EU
27.2 is how many centimeters that is.



8.5


You are under size 6 in the US
You are under size 5.5 in the UK
You are under size 39 in the EU
21.6 is how many centimeters that is.



9.8

<You are a shoe-size 7.5 in the US
<You are a shoe-size 7 in the UK
<You are a shoe-size 40 - 41 in the EU
24.9 is how many centimeters that is.




11.10


<You are a shoe-size 11 in the US
<You are a shoe-size 10.5 in the UK
<You are a shoe-size 44 - 45 in the EU
28.2 is how many centimeters that is.



8.9


You are under size 6 in the US
You are under size 5.5 in the UK
You are under size 39 in the EU
22.6 is how many centimeters that is.





8.2


You are under size 6 in the US
You are under size 5.5 in the UK
You are under size 39 in the EU
20.8 is how many centimeters that is.





12.9


<You are over shoe-size 15 in the US
<You are over shoe-size 15 in the UK
<You are over shoe-size 48 - 49 in the EU
32.8 is how many centimeters that is.





9.0


9.0
You are under size 6 in the US
You are under size 5.5 in the UK
You are under size 39 in the EU
22.9 is how many centimeters that is.




*/


    
    
