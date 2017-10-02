#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int);// Declared ComputeSphere function

void ComputeBox(int, int, int);// Declared ComputeBox function

void ComputePyramid(int, int);// Declared ComputeBox function

int main()
{
    int length = 1;
    int width = 1;
    int height = 1;

    ComputeSphere(length/*parameter*/);
    ComputeBox(length, width, height/*parameter*/);
    ComputePyramid(length, height/*parameter*/);

    cin>>length>>width>>height;
    
    ComputeSphere(length/*parameter*/);
    ComputeBox(length, width, height/*parameter*/);
    ComputePyramid(length, height/*parameter*/);
}

void ComputeSphere(int l/*parameter*/)
{// Computes the volume of the sphere
    double v = (4.0/3) * 3.14 * (l * l * l);
    cout<<"The volume of a sphere is "<<v<<endl;
}

void ComputeBox(int l, int w, int h/*parameter*/)
{// Computes volume of the rectanglular prism
    double v = l * w * h;
    cout<<"The volume of a rectangular box is "<<v<<endl;
}

void ComputePyramid(int l, int h/*parameter*/)
{ // Computes volume of the Pyramid
    double v = (1.0/3) * l * h;
    cout<<"The volume of a pyramid is "<<v<<endl;
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.