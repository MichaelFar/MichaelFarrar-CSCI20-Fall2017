
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   ifstream fin;
   ofstream fout;
   string firstName_one;
   string lastName_one;
   string firstName_two;
   string lastName_two;
   string firstName_three;
   string lastName_three;
   double GPA_one = 0.0;
   double GPA_two = 0.0;
   double GPA_three = 0.0;
   
   int hoursOne_one = 0;
   int hoursOne_two = 0;
   int hoursOne_three = 0;
   int hoursOne_four = 0;
   int hoursTwo_one = 0;
   int hoursTwo_two = 0;
   int hoursTwo_three = 0;
   int hoursTwo_four = 0;
   int hoursThree_one = 0;
   int hoursThree_two = 0;
   int hoursThree_three = 0;
   int hoursThree_four = 0;
   int hoursThree_five = 0;
   
   int gradeHolderOne_one = 0;
   int gradeHolderOne_two = 0;
   int gradeHolderOne_three = 0;
   int gradeHolderOne_four = 0;
   int gradeHolderTwo_one = 0;
   int gradeHolderTwo_two = 0;
   int gradeHolderTwo_three = 0;
   int gradeHolderTwo_four = 0;
   int gradeHolderThree_one = 0;
   int gradeHolderThree_two = 0;
   int gradeHolderThree_three = 0;
   int gradeHolderThree_four = 0;
   int gradeHolderThree_five = 0;
   
   string gradesOne_one = "-";
   string gradesOne_two = "-";
   string gradesOne_three = "-";
   string gradesOne_four = "-";
   string gradesTwo_one = "-";
   string gradesTwo_two = "-";
   string gradesTwo_three = "-";
   string gradesTwo_four = "-";
   string gradesThree_one = "-";
   string gradesThree_two = "-";
   string gradesThree_three = "-";
   string gradesThree_four = "-";
   string gradesThree_five = "-";
   
   int numClasses_one = 0;
   int numClasses_two = 0;
   int numClasses_three = 0;
   firstName_one = " hello";
   int i = 0;
   
   
   
   
  
   
   
   fin.open("input.txt");
   fout.open("output.html");
   fout << "<!DOCTYPE html>" << endl;
   fout << "<html>" << endl;
   fout << "<head>" << endl;
   fout << "<body>" << endl;
   fout << "<h1> GPA CALCULATOR </h1>" << endl;
   fin >> firstName_one; 
   fout << "<p>" <<firstName_one << " " << endl;
   
   fin >> lastName_one;
   fout << lastName_one << "</p>" << endl;
   
   fin >> numClasses_one;
   fout << "<p>" <<" " <<numClasses_one << " classes" << "</p>" <<endl;
   
   fin >> hoursOne_one;
   fin >> gradesOne_one;
   if (gradesOne_one == "A")
   {
      gradeHolderOne_one = 4.0;
   }
   else if (gradesOne_one == "B")
   {
      gradeHolderOne_one = 3.0;
   }
   else if (gradesOne_one == "C")
   {
      gradeHolderOne_one = 2.0;
   }
   else if (gradesOne_one == "D")
   {
      gradeHolderOne_one = 1.0;
   }
   else if (gradesOne_one == "F")
   {
      gradeHolderOne_one = 0;
   }
   fin >> hoursOne_two;
   fin >> gradesOne_two;
   if (gradesOne_two == "A")
   {
      gradeHolderOne_two = 4.0;
   }
   else if (gradesOne_two == "B")
   {
      gradeHolderOne_two = 3.0;
   }
   else if (gradesOne_two == "C")
   {
      gradeHolderOne_two = 2.0;
   }
   else if (gradesOne_two == "D")
   {
      gradeHolderOne_two = 1.0;
   }
   else if (gradesOne_two == "F")
   {
      gradeHolderOne_two = 0;
   }
   fin >> hoursOne_three;
   fin >> gradesOne_three;
   if (gradesOne_three == "A")
   {
      gradeHolderOne_three = 4.0;
   }
   else if (gradesOne_three == "B")
   {
      gradeHolderOne_three = 3.0;
   }
   else if (gradesOne_three == "C")
   {
      gradeHolderOne_three = 2.0;
   }
   else if (gradesOne_three == "D")
   {
      gradeHolderOne_three = 1.0;
   }
   else if (gradesOne_three == "F")
   {
      gradeHolderOne_three = 0;
   }
   
   fin >> hoursOne_four;
   fin >> gradesOne_four;
   if (gradesOne_four == "A")
   {
      gradeHolderOne_four = 4.0;
   }
   else if (gradesOne_four == "B")
   {
      gradeHolderOne_four = 3.0;
   }
   else if (gradesOne_four == "C")
   {
      gradeHolderOne_four = 2.0;
   }
   else if (gradesOne_four == "D")
   {
      gradeHolderOne_four = 1.0;
   }
   else if (gradesOne_four == "F")
   {
      gradeHolderOne_four = 0;
   }
   GPA_one = (gradeHolderOne_one + gradeHolderOne_two + gradeHolderOne_three + gradeHolderOne_four) / numClasses_one;
   fout << "<p>" <<GPA_one << " is the first semester GPA for " << firstName_one << " " << lastName_one  << "<p>"<< endl;
   
   
   fin >> firstName_two; 
   fout << "<p>"  << firstName_two << " " << "</p>" << endl;
   
   fin >> lastName_two;
   fout << "<p>" <<lastName_two << "</p>" << endl;
   
   fin >> numClasses_two;
   fout << "<p>" <<" " <<numClasses_two << " classes"  << "</p>" << endl;
   
   fin >> hoursTwo_one;
   fin >> gradesTwo_one;
   if (gradesTwo_one == "A")
   {
      gradeHolderTwo_one = 4.0;
   }
   else if (gradesTwo_one == "B")
   {
      gradeHolderTwo_one = 3.0;
   }
   else if (gradesTwo_one == "C")
   {
      gradeHolderTwo_one = 2.0;
   }
   else if (gradesTwo_one == "D")
   {
      gradeHolderTwo_one = 1.0;
   }
   else if (gradesTwo_one == "F")
   {
      gradeHolderTwo_one = 0;
   }
   fin >> hoursTwo_two;
   fin >> gradesTwo_two;
   if (gradesTwo_two == "A")
   {
      gradeHolderTwo_two = 4.0;
   }
   else if (gradesTwo_two == "B")
   {
      gradeHolderTwo_two = 3.0;
   }
   else if (gradesTwo_two == "C")
   {
      gradeHolderTwo_two = 2.0;
   }
   else if (gradesTwo_two == "D")
   {
      gradeHolderTwo_two = 1.0;
   }
   else if (gradesTwo_two == "F")
   {
      gradeHolderTwo_two = 0;
   }
   fin >> hoursTwo_three;
   fin >> gradesTwo_three;
   if (gradesTwo_three == "A")
   {
      gradeHolderTwo_three = 4.0;
   }
   else if (gradesTwo_three == "B")
   {
      gradeHolderTwo_three = 3.0;
   }
   else if (gradesTwo_three == "C")
   {
      gradeHolderTwo_three = 2.0;
   }
   else if (gradesTwo_three == "D")
   {
      gradeHolderTwo_three = 1.0;
   }
   else if (gradesTwo_three == "F")
   {
      gradeHolderTwo_three = 0;
   }
   
   fin >> hoursTwo_four;
   fin >> gradesTwo_four;
   if (gradesTwo_four == "A")
   {
      gradeHolderTwo_four = 4.0;
   }
   else if (gradesTwo_four == "B")
   {
      gradeHolderTwo_four = 3.0;
   }
   else if (gradesTwo_four == "C")
   {
      gradeHolderTwo_four = 2.0;
   }
   else if (gradesTwo_four == "D")
   {
      gradeHolderTwo_four = 1.0;
   }
   else if (gradesTwo_four == "F")
   {
      gradeHolderTwo_four = 0;
   }
   GPA_two = (gradeHolderTwo_one + gradeHolderTwo_two + gradeHolderTwo_three + gradeHolderTwo_four) / numClasses_two;
   fout <<"<p>" <<GPA_two << " is the first semester GPA for " << firstName_two << " " << lastName_two << "</p>" << endl;
   
   fin >> firstName_three; 
   fout <<"<p>" <<firstName_three << " " << "</p>" << endl;
   
   fin >> lastName_three;
   fout << "<p>" <<lastName_three << "</p>";
   
   fin >> numClasses_three;
   fout <<"<p>" <<" " <<numClasses_three << " classes" <<"</p>" <<endl;
   
   fin >> hoursThree_one;
   fin >> gradesThree_one;
   if (gradesThree_one == "A")
   {
      gradeHolderThree_one = 4.0;
   }
   else if (gradesThree_one == "B")
   {
      gradeHolderThree_one = 3.0;
   }
   else if (gradesThree_one == "C")
   {
      gradeHolderThree_one = 2.0;
   }
   else if (gradesThree_one == "D")
   {
      gradeHolderThree_one = 1.0;
   }
   else if (gradesThree_one == "F")
   {
      gradeHolderThree_one = 0;
   }
   fin >> hoursThree_two;
   fin >> gradesThree_two;
   if (gradesThree_two == "A")
   {
      gradeHolderThree_two = 4.0;
   }
   else if (gradesThree_two == "B")
   {
      gradeHolderThree_two = 3.0;
   }
   else if (gradesThree_two == "C")
   {
      gradeHolderThree_two = 2.0;
   }
   else if (gradesThree_two == "D")
   {
      gradeHolderThree_two = 1.0;
   }
   else if (gradesThree_two == "F")
   {
      gradeHolderThree_two = 0;
   }
   fin >> hoursThree_three;
   fin >> gradesThree_three;
   if (gradesThree_three == "A")
   {
      gradeHolderThree_three = 4.0;
   }
   else if (gradesThree_three == "B")
   {
      gradeHolderThree_three = 3.0;
   }
   else if (gradesThree_three == "C")
   {
      gradeHolderThree_three = 2.0;
   }
   else if (gradesThree_three == "D")
   {
      gradeHolderThree_three = 1.0;
   }
   else if (gradesThree_three == "F")
   {
      gradeHolderThree_three = 0;
   }
   
   fin >> hoursThree_four;
   fin >> gradesThree_four;
   if (gradesThree_four == "A")
   {
      gradeHolderThree_four = 4.0;
   }
   else if (gradesThree_four == "B")
   {
      gradeHolderThree_four = 3.0;
   }
   else if (gradesThree_four == "C")
   {
      gradeHolderThree_four = 2.0;
   }
   else if (gradesThree_four == "D")
   {
      gradeHolderThree_four = 1.0;
   }
   else if (gradesThree_four == "F")
   {
      gradeHolderThree_four = 0;
   }
   fin >> hoursThree_five;
   fin >> gradesThree_five;
   if (gradesThree_five == "A")
   {
      gradeHolderThree_five = 4.0;
   }
   else if (gradesThree_five == "B")
   {
      gradeHolderThree_five = 3.0;
   }
   else if (gradesThree_five == "C")
   {
      gradeHolderThree_five = 2.0;
   }
   else if (gradesThree_five == "D")
   {
      gradeHolderThree_five = 1.0;
   }
   else if (gradesThree_five == "F")
   {
      gradeHolderThree_five = 0;
   }
   GPA_three = (gradeHolderThree_one + gradeHolderThree_two + gradeHolderThree_three + gradeHolderThree_four + gradeHolderThree_five) / numClasses_three;
   fout<<"<p>" << GPA_three << " is the first semester GPA for " << firstName_three << " " << lastName_three << "</p>" << endl;
   fout << "</body>" << endl;
   fout << "</html>" << endl;
  
      
   
   
   fin.close();
   fout.close();

   
}




