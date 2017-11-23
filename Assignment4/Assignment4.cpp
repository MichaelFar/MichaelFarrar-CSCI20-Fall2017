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
   int numTimes = 0;
   double firstScore, secondScore, thirdScore = 0.0, fourthScore, fifthScore, sixthScore = 0.0;
   char studentAnswer[17];
    string studentwrittenAnswer[7];
    string studentwrittenAnswer_two[8];
   int i = 0;
   string firstName_one;
   string lastName_one;
   fout.open("outputtest.txt");
   double totalPoints[5];
   char answer[17];
    string writtenAnswer[3];
    string writtenAnswer_two;
   fin.open("answerkey.txt");
   
   
        
  
   for ( i = 0; i < 17; i++)
   {
   fin >> answer[i];
   
   }
   for ( i = 0; i < 3; i++)
   {
       fin >> writtenAnswer[i];
       
   }
   fin >> writtenAnswer_two;
   fin.close();
  
  numTimes = numTimes + 1;
   fin.open("studentanswers.txt");
   fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      firstScore += 1;
     }
     else if (studentAnswer[i] != '?')
     {
      firstScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     firstScore += 1;
    }
    else if (studentwrittenAnswer[i]!="?")
    {
     firstScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     firstScore += 1;
     
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     firstScore += .25;
    }
    
   }
   cout << " "<<firstName_one << "'s score is:" << firstScore << endl; 
   fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      secondScore += 1;
     }
     else if (studentAnswer[i] != '?')
     {
      secondScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     secondScore += 1;
    }
    else if (studentwrittenAnswer[i] != "?")
    {
     secondScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     secondScore += 1;
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     secondScore += .25;
    }
    
   }
   
   cout << " "<<firstName_one << "'s score is:" << secondScore << endl;
   fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      thirdScore += 1;
      
     }
     else if (studentAnswer[i] != '?')
     {
      thirdScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     thirdScore += 1;
     
    }
    else if (studentwrittenAnswer[i] != "?")
    {
     thirdScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     thirdScore += 1;
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     thirdScore += .25;
    }
    
   }
   
   cout << " "<<firstName_one << "'s score is:" << thirdScore << endl; 
fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      fourthScore += 1;
     }
     else if (studentAnswer[i]!= '?')
     {
      fourthScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     fourthScore += 1;
    }
    else if (studentwrittenAnswer[i] != "?")
    {
     fourthScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     fourthScore += 1;
     
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     fourthScore += .25;
    }
    
   }
   cout << " "<<firstName_one << "'s score is:" << fourthScore << endl; 
   fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      fifthScore += 1;
     }
     else if (studentAnswer[i]!= '?')
     {
      fifthScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     fifthScore += 1;
    }
    else if (studentwrittenAnswer[i] != "?")
    {
     fifthScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     fifthScore += 1;
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     fifthScore += .25;
    }
    
   }
   
   cout << " "<<firstName_one << "'s score is:" << fifthScore << endl;
   fin >> firstName_one;
   fin >> lastName_one;
   
   for ( i = 0; i < 17; i++)
   {
   fin >> studentAnswer[i];
     if (studentAnswer[i] == answer[i])
     {
      sixthScore += 1;
     }
     else if (studentAnswer[i] != '?')
     {
      sixthScore += .25;
      
     }
   }
   for (i = 0; i < 3; i++)
   {
    fin >> studentwrittenAnswer[i];
    if (writtenAnswer[i] == studentwrittenAnswer[i])
    {
     sixthScore += 1;
    }
    else if (studentwrittenAnswer[i] != "?")
    {
     sixthScore += .25;
    }
    
   }
   for (i = 0; i < 1; i++)
   {
    fin >> studentwrittenAnswer_two[i];
    if (studentwrittenAnswer_two[i] == writtenAnswer_two)
    {
     sixthScore += 1;
    }
    else if (studentwrittenAnswer_two[i] != "?")
    {
     sixthScore += .25;
    }
    
   }
   cout << " "<<firstName_one << "'s score is:" << sixthScore << endl;
}
  
   
   
   
    
   
