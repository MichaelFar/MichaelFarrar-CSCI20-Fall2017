/*
Michael Farrar
9/20/17
lab21 Wind speed
*/
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
    double oldWindchill = 0.00;
    double newWindchill = 0.00;
    double velocity = 0.00;
    double temperature = 0.00;
    double absoluteValue = 0.00;
    
    cout << "What velocity is the wind?" << endl;// Input block
    cin >> velocity;
    cout << "What is the temperature?" << endl;
    cin >> temperature;
    
    oldWindchill = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (temperature - 91.4) + 91.4;// Equation for old wind chill style
    newWindchill = 35.74 + 0.6215 * temperature - (35.75 * pow (velocity, 0.16)) + 0.4275 * temperature; // Temperature for new wind chill style
    
    absoluteValue = (newWindchill - oldWindchill);// These two lines are for calculating the difference between the two
    absoluteValue = abs(absoluteValue);
    
    cout << "The windspeed of old style wind chill is " << oldWindchill << endl;
    cout << "The windspeed of new style wind chill is " << newWindchill << endl;
    cout << "The difference between them is by " << absoluteValue;

/*What velocity is the wind?
A.

4
What is the temperature?
30
The windspeed of old style wind chill is 30.5753
The windspeed of new style wind chill is 22.5822
The difference between them is by 7.99314

B.

What velocity is the wind?
10
What is the temperature?
39.25
The windspeed of old style wind chill is 27.8601
The windspeed of new style wind chill is 25.2388
The difference between them is by 2.62135

c.

What velocity is the wind?
2
What is the temperature?
100
The windspeed of old style wind chill is 98.7538
The windspeed of new style wind chill is 100.697
The difference between them is by 1.94317

*/
}
