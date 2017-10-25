#include <iostream>

using namespace std;

class TemperatureConverter {
    private:
    double kelvin_;
  
    public:
    
    TemperatureConverter()
    {
        kelvin_ = 0;
    }
    TemperatureConverter(double kelvin_)
    {
    while (kelvin_ < 0)
    {
        if (kelvin_ < 0)
        {
            kelvin_ = 0;
        }
        else
        {
        kelvin_ = 0;
            
        }
    }
    
    }





        

double SetTempFromKelvin(double kelvin_)
            {
                while (kelvin_ <= 0)
                {
                    if (kelvin_ <= 0)
                    {
                    kelvin_ = 0;   
                    }
                    else
                    {
                    kelvin_ = 0;
                    }
                
                }
            };
double GetTempFromKelvin()
    {
        return kelvin_;
    };
double SetTempFromCelsius(double celsius_)
    {
        kelvin_ = celsius_;
        while (kelvin_ < -273.14)
        {
            if(kelvin_ < -273.14)
            {
                cout << "Please do not input a number less than -273.14" << endl;
                cin >> kelvin_;
            }
            else
            {
                kelvin_ = kelvin_ + 273.15;
            }
        }
    };   
double GetTempAsCelsius(){
    return kelvin_ = kelvin_ + 273.15;
};
double SetTempFromFahrenheit (double fahrenheit_)
{
    kelvin_ = fahrenheit_;
    while (kelvin_ < -459.67)
    {
        if(kelvin_ < -459.67)
        {
            cout << "Please do not enter a number less than -459.67" << endl;
            cin >> fahrenheit_;
        }
        else
        {
            kelvin_ = (5 * (kelvin_ - 32) / 9) + 273.15;
        }
    }
};
double GetTempAsFahrenheit()
{
    return kelvin_ = (5 * (kelvin_ - 32) / 9) + 273.15;
};

double PrintTemperatures()
{
    cout << "The temperature in Kelvin " << GetTempFromKelvin() << endl << "The temperature in Fahrenheit" << GetTempAsCelsius() << endl << "The temperature in Celcius" << GetTempAsFahrenheit() << endl; 
};
    

    
};




