//Michael Farrar
//CSCI 020
//Lab 3.1
#include <iostream>
#include <stdlib.h>

using namespace std;

int TheATTUPPplan(int SmartPhoneAmount, int dataDesired, int tabletNumber, int dumbPhoneAmount){ //ATT Unlimited Plus Plan Function
    int addPhone = 0;
    int second_line = 0;
    int ThePlan = SmartPhoneAmount - 1;
    int firstLine = 90;
    if (dataDesired == 0)
    {
        dataDesired == 0;
    }
    else if (dataDesired == 1)
    {
        dataDesired = 30;
    }
    else if(dataDesired >= 2 && dataDesired <= 3) 
    {
        dataDesired = 40;
    }
    else if (dataDesired >= 4 && dataDesired <= 5)
    {
        dataDesired = 60;
    }
    else if (dataDesired >= 6 && dataDesired <= 9)
    {
        dataDesired = 80;
    }
    else if (dataDesired >= 10 && dataDesired <= 24)
    {
        dataDesired = 90;
    }
    else if (dataDesired == 25)
    {
        dataDesired = 110;
    }
    else
    {
        cout << "You do not have a valid GB desire" << endl;    
    }
    if (SmartPhoneAmount == 0 || SmartPhoneAmount >= 2)
    {
        firstLine = 0;
        ThePlan = 0;
    }
    else
    {
        SmartPhoneAmount = SmartPhoneAmount - 1;
    }
    if (SmartPhoneAmount >= 2)
    {
        second_line = 145;
    }
    if (SmartPhoneAmount >= 3)
    {
        addPhone = SmartPhoneAmount - 2;
    }
    ThePlan = (tabletNumber * 10) + (addPhone * 20) + second_line + firstLine + dataDesired;
    return ThePlan;
};

int TheATTUPPplan_second(int SmartPhoneAmount, int dataDesired, int tabletNumber, int dumbPhoneAmount){//ATT Unlimited Choice Plan
    int addPhone = 0;
    int second_line = 0;
    int ThePlan_second = SmartPhoneAmount - 1;
    int firstLine = 60;
    if (dataDesired == 0)
    {
        dataDesired == 0;
    }
    else if (dataDesired == 1)
    {
        dataDesired = 30;
    }
    else if(dataDesired >= 2 && dataDesired <= 3) 
    {
        dataDesired = 40;
    }
    else if (dataDesired >= 4 && dataDesired <= 5)
    {
        dataDesired = 60;
    }
    else if (dataDesired >= 6 && dataDesired <= 9)
    {
        dataDesired = 80;
    }
    else if (dataDesired >= 10 && dataDesired <= 24)
    {
        dataDesired = 90;
    }
    else if (dataDesired == 25)
    {
        dataDesired = 110;
    }
    else
    {
        cout << "You do not have a valid GB desire" << endl;    
    }
    if (SmartPhoneAmount == 0 || SmartPhoneAmount >= 2)
    {
        firstLine = 0;
        ThePlan_second = 0;
    }
    else
    {
        SmartPhoneAmount = SmartPhoneAmount - 1;
    }
    if (SmartPhoneAmount >= 2)
    {
        second_line = 115;
    }
    if (SmartPhoneAmount >= 3)
    {
        addPhone = SmartPhoneAmount - 2;
    }
    ThePlan_second = (tabletNumber * 10) + (addPhone * 20) + second_line + firstLine + dataDesired;
    return ThePlan_second;
};





int VerizonPlan(int SmartPhoneAmount, int dataDesired, int tabletNumber, int dumbPhoneAmount){//Verizon Unlimited Plan
    int addPhone = 0;
    int second_line = 0;
    int ThePlan_third = SmartPhoneAmount - 1;
    int firstLine = 80;
    if (dataDesired == 0)
    {
        dataDesired == 0;
    }
    else if (dataDesired == 1)
    {
        dataDesired = 30;
    }
    else if(dataDesired >= 2 && dataDesired <= 3) 
    {
        dataDesired = 40;
    }
    else if (dataDesired >= 4 && dataDesired <= 5)
    {
        dataDesired = 60;
    }
    else if (dataDesired >= 6 && dataDesired <= 9)
    {
        dataDesired = 80;
    }
    else if (dataDesired >= 10 && dataDesired <= 24)
    {
        dataDesired = 90;
    }
    else if (dataDesired == 25)
    {
        dataDesired = 110;
    }
    else
    {
        cout << "You do not have a valid GB desire" << endl;    
    }
    if (SmartPhoneAmount == 0 || SmartPhoneAmount >= 2)
    {
        firstLine = 0;
        ThePlan_third = 0;
    }
    else
    {
        SmartPhoneAmount = SmartPhoneAmount - 1;
    }
    if (SmartPhoneAmount >= 2)
    {
        second_line = 110;
    }
    if (SmartPhoneAmount >= 3)
    {
        addPhone = SmartPhoneAmount - 2;
    }
    ThePlan_third = (tabletNumber * 10) + (addPhone * 20) + second_line + firstLine + dataDesired;
    return ThePlan_third;
};


int SprintTwoGB(int SmartPhoneAmount, int dataDesired, int tabletNumber, int dumbPhoneAmount){//Sprint 2gb Plan
    int addPhone = 0;
    int second_line = 0;
    int ThePlan_five = SmartPhoneAmount - 1;
    int firstLine = 40;
    if (dataDesired == 0)
    {
        dataDesired == 0;
    }
    else if (dataDesired == 1)
    {
        dataDesired = 30;
    }
    else if(dataDesired >= 2 && dataDesired <= 3) 
    {
        dataDesired = 40;
    }
    else if (dataDesired >= 4 && dataDesired <= 5)
    {
        dataDesired = 60;
    }
    else if (dataDesired >= 6 && dataDesired <= 9)
    {
        dataDesired = 80;
    }
    else if (dataDesired >= 10 && dataDesired <= 24)
    {
        dataDesired = 90;
    }
    else if (dataDesired == 25)
    {
        dataDesired = 110;
    }
    else
    {
        cout << "You do not have a valid GB desire" << endl;    
    }
    ThePlan_five = dataDesired + SmartPhoneAmount * 40;
    return ThePlan_five;
};



int SprintUnlimited(int SmartPhoneAmount, int dataDesired, int tabletNumber, int dumbPhoneAmount){//Sprint Unlimited Plan
    int addPhone = 0;
    int second_line = 0;
    int ThePlan_four = SmartPhoneAmount - 1;
    int firstLine = 60;
    if (dataDesired == 0)
    {
        dataDesired == 0;
    }
    else if (dataDesired == 1)
    {
        dataDesired = 30;
    }
    else if(dataDesired >= 2 && dataDesired <= 3) 
    {
        dataDesired = 40;
    }
    else if (dataDesired >= 4 && dataDesired <= 5)
    {
        dataDesired = 60;
    }
    else if (dataDesired >= 6 && dataDesired <= 9)
    {
        dataDesired = 80;
    }
    else if (dataDesired >= 10 && dataDesired <= 24)
    {
        dataDesired = 90;
    }
    else if (dataDesired == 25)
    {
        dataDesired = 110;
    }
    else
    {
        cout << "You do not have a valid GB desire" << endl;    
    }
    if (SmartPhoneAmount == 0 || SmartPhoneAmount >= 2)
    {
        firstLine = 0;
        ThePlan_four = 0;
    }
    else
    {
        SmartPhoneAmount = SmartPhoneAmount - 1;
    }
    if (SmartPhoneAmount >= 2)
    {
        second_line = 40;
    }
    if (SmartPhoneAmount >= 3)
    {
        addPhone = SmartPhoneAmount - 2;
    }
    ThePlan_four = (addPhone * 30) + second_line + firstLine + dataDesired;
    return ThePlan_four;
};






int main(){
    int SmartPhoneAmount;//Input Variables
    int dataDesired;//
    int tabletNumber;//
    int dumbPhoneAmount;//
    
    cout << "How many smart phones do you want?" << endl;
    cin >> SmartPhoneAmount;
    cout << "How much data do you want in GB?" << endl;
    cin >> dataDesired;
    cout << "How many tablets do you want?" << endl;
    cin >> tabletNumber;
    cout << "How many dummy phones do you want?" << endl;
    cin >> dumbPhoneAmount;
    cout << "You pay $" << TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  << " a month with the ATT Unlimited Plus Plan" << endl;
    cout << "You pay $" << TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) << " a month with the ATT Unlimited Choice Plan" << endl;
    cout << "You pay $" << VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) << " a month with the Verizon Unlimited Plan" << endl;
    
    if (tabletNumber == 0)// These if statments determine the best plan based on the input
    {
        cout << "You pay $" << SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) << " a month with the Sprint Unlimited Plan, but does not include tablets" << endl;
    }
    if (dataDesired == 0 && tabletNumber == 0)
    {
        cout << "You pay $" << SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) << " a month with the Sprint 2gb Plan, but does not include tablets" << endl;
    };
    if (TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) < TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)   && tabletNumber >= 1)
    {
        cout << "The ATT Unlimited Plus Plan is best for you";
    }
    else if (TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) < TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && tabletNumber >= 1)
    {
        cout << "The ATT Unlimited Choice Plan is best for you";
    }
    else if (VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) < TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && tabletNumber >= 1)
    {
        cout << "The Verizon Unlimited Plan is best for you";
    }
    else if (SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) < TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && tabletNumber == 0)
    {
        cout << "The Sprint Unlimited Plan is best for you";
    }
    else if (SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) < TheATTUPPplan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount) && SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < TheATTUPPplan_second(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < VerizonPlan(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)&& SprintTwoGB(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  < SprintUnlimited(SmartPhoneAmount, dataDesired, tabletNumber, dumbPhoneAmount)  &&  tabletNumber == 0)
    {
        cout << "The Sprint 2gb Plan is best for you";
    }
};
