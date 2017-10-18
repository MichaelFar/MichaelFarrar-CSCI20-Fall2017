/*

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int NumberGenerator() {
    int genNum = 0;
    srand(time(NULL));
    return genNum = (rand() % 50) + 1;
}

int main() {
    int GenNum = NumberGenerator();
    int Count = 5;
    int userNum = 0;
    cout << "Guess a number between 1 and 50" << endl;
    cin >> userNum;
if (userNum > 50 || userNum < 1)
        {
            cout << "Please enter a valid number" << endl;
            cin >> userNum;
        }    
if (userNum >= 1 && userNum <= 50)
    {
    while (userNum != GenNum)
    {
    
        int Count = 5;
        if (userNum > GenNum)
        {
            for (Count; Count != 0; --Count)
        {
            cout << Count << endl;
        }
            
            cout << "Too High" << endl;
            cin >> userNum;
        }
            
        else if (userNum < GenNum)
        {
                for (Count; Count != 0; --Count)
        {
            cout << Count << endl;
        }
                cout << "Too Low" << endl;
                cin >> userNum;
        }
}
}




if (userNum = GenNum)
{
for (Count; Count != 0; --Count)
    {
        cout << Count << endl;
    }
cout << "Just Right" << endl;
}            

}

    
