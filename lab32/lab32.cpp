/*
Michael Farrar
CSCI 20
Lab32


*/
#include <iostream>
#include <cstdlib>

using namespace std;

double taxIndividual(double agi, int marriage) {
switch (marriage) {//This is the switch, it will choose an if statement tree depending on whether or not the user is married
case 1:
    
    if (agi >= 0 && agi <= 9325) {//Taxes for married
         
        cout << "Your calculated tax is " << agi * .10 << endl;
        
    }
    else if (agi >= 9326 && agi <= 37950){
        cout << "Your calculated tax is " << 932.50 + (agi * 1.15) - 9325 << endl;
        
    }   
        else if (agi >= 37951 && agi <= 91900){
        cout << "Your calculated tax is " << 5226.25 + (agi * 1.25) - 37950 << endl;
        
    }   
        else if (agi >= 91901 && agi <= 191650){
        cout << "Your calculated tax is " << 18713.75 + (agi * 1.28) - 91900 << endl;
        
    }       
        else if (agi >= 191651 && agi <= 416700){
        cout << "Your calculated tax is " << 46643.75 + (agi * 1.33) - 191650 << endl;
        
    }      
        else if (agi > 416700){
        cout << "Your calculated tax is " << 120910.25 + (agi * 1.396) - 416700 << endl;
        
        }
    break;
    
    default:
    
    
        if (agi >= 0 && agi <= 18650){//Taxes for single
        cout << "Your calculated tax is " << agi * .10 << endl;
        }
        
        else if (agi >= 18651 && agi <= 75900){
        cout << "Your calculated tax is " << 1865 + (agi * 1.15) - 18650 << endl;
        }
        
        else if (agi >= 75901 && agi <= 153100){
        cout << "Your calculated tax is " << 10452.50 + (agi * 1.25) - 75901<< endl;
        }
        
        else if (agi >= 153101 && agi <= 233350){
        cout << "Your calculated tax is " << 29752.50 + (agi * 1.28) - 153101 << endl;
        }
        
        else if (agi >= 233351 && agi <= 416700){
        cout << "Your calculated tax is " << 52222.50 + (agi * 1.33) - 233350 << endl;
        }
        
        else if (agi > 416700){
        cout << "Your calculated tax is " << 112728 + (agi * 1.396) - 470700 << endl;
        }
        break;}
    
}

int main(){
    double userAGI = 0.00;
    char marriageStatus = 'n';
    
    cout << "What AGI do you have?" << endl;
    cin >> userAGI;
    cout << "Are you married? 1 is yes, 2 is no?" << endl;
    cin >> marriageStatus;
    taxIndividual(userAGI, marriageStatus);
    
}