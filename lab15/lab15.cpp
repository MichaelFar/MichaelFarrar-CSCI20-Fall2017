#include <iostream>
#include <string>
using namespace std;


int main() {
string adj1;
string nationality;
string name;
string noun1;
string adj2;
string noun2;
string adj3;
string noun3;
string adj4;
string pluralNoun;
string noun4;
string number1;
string shapes;
string food1;
string food2;
string number2;

cout << "Let's play MadLibs!" <<endl;
cout << "Choose an adjective" << endl;
cin >> adj1;

cout << "Choose a nationality" <<endl;
cin >> nationality;

cout << "Choose a name" << endl;
cin >> name;

cout << "Choose a noun" << endl;
cin >> noun1;

cout << "Choose an adjective" << endl;
cin >> adj2;

cout << "Choose a noun" << endl;
cin >> noun2;

cout << "Choose an adjective"<<endl;
cin >> adj3;

cout << "Choose a noun"<<endl;
cin >> noun3;

cout << "Choose an adjective" <<endl;
cin >> adj4;

cout <<"Choose a plural noun"<< endl;
cin >> pluralNoun;

cout <<"Choose a noun" << endl;
cin >> noun4;

cout <<"Choose a number" << endl;
cin >> number1;

cout <<"Choose a shape" << endl;
cin >> shapes;

cout <<"Choose a food" <<endl;
cin >> food1;

cout <<"Choose another food" <<endl;
cin >> food2;

cout <<"Choose a number" << endl;
cin >> number2;


cout <<"Pizza was invented by a "<< adj1 << " " << nationality << endl << " chef named " << name <<"."<<endl<<" To make a pizza, you need to take a lump of "<<noun1<<" and make a thin, round" << endl << adj2 <<" " << noun2 << ". Then you cover it with "<<endl;
cout << adj3 << " " << noun3 << " sauce, " << adj4 << " Cheese," << " and fresh chopped " << pluralNoun << ". Next you have to bake it in a very hot " << noun4 <<endl<< ". When it is done, cut it into " << number1<< " "<< shapes << ". Some kids like " << food1 << " pizza."<<endl;
cout << " If I could, I would eat a pizza " << number2 << " times a day!";

return 0;

}