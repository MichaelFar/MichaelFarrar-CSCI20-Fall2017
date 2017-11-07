//Michael Farrar
//csci 20
//11/3/2017
/*
I do understand why this isn't working
I would like to talk on monday
*/
#include <iostream>

using namespace std;
const int size = 10;
class ArrayTools {
    private:
    int i;
    int myArray[size];
    public:
    int Print() {
        for (i = 0; i < size; ++i )
        {
            cout << myArray[i] << endl;
        
    }
    
    int Find_min(int firstElement, int secondElement) {
        int output = 0;
        if (myArray[firstElement] < myArray[secondElement])
        {
            output = myArray[firstElement];
            return output;
        }
        else
        {
            output = myArray[secondElement];
            return output;
        }
    }
    
    int Find_max(int firstElement, int secondElement) {
        int output = 0;
        if (myArray[firstElement] > myArray[secondElement])
        {
            output = myArray[firstElement];
            return output;
        }
        else
        {
            output = myArray[secondElement];
            return output;
        }
    }
    int Find_sum() {
        int sum = 0;
        sum = sum + (myArray[10] - myArray[9]) + (myArray[9] - myArray[8]) + (myArray[8] - myArray[7]) + (myArray[7] - myArray[6]) + (myArray[6] - myArray[5]) + (myArray[5] - myArray[4]) + (myArray[4] - myArray[3]) + (myArray[3] - myArray[2]) + (myArray[2]- myArray[1]) + (myArray[1] - myArray[0]) + myArray[0];
        return sum;
        
    }
    int Search(int search)
    {
        
        
            if (search = myArray[i])
            {
                cout << endl;
                return myArray[i];
            }
            else
            {
                cout << endl;
                return -1;
            }
        
    }
    int Is_sorted(){
        if (myArray[size] == myArray[size])
        {
            cout << " yes" << endl;
        }
    }
    
};















int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray, size);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}