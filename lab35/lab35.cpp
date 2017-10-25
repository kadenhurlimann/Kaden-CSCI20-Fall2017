
// kaden Hurlimann
// Lab




#include<iostream>
using namespace std;



class TemperatureConverter
{
   
   
    private:
        double kelvin_;
   
    public:
   
    TemperatureConverter()
    {
        kelvin_=0;
    }
   
    TemperatureConverter(double kelvin)
    {
        if (kelvin_<0)
        {
            cout << "invalid kelvin value" << endl << endl;
        }
        else
        {
            kelvin_=kelvin;
        }
    }
    
    double SetTempFromCelsius(double celsius)
    {
        if (celsius<-273.15)
        {
            cout << "invalid celsius value" << endl << endl;
        }
        else
        {
            kelvin_=celsius + 273.15;
        }
    }
    
    double SetTempFromFahrenheit(double fahrenheit)
    {
        if (fahrenheit<-459.67)
        {
            cout << "invalid fahrenheit value" << endl << endl;
        }
        else
        {
            kelvin_=(5*(fahrenheit-39)/9)+273.15;
        }
    }
   
    double SetTempFromKelvin(double kelvin)
    {
        if (kelvin<0)
        {
            cout << "invalid kelvin value" << endl << endl;
        }
        else 
        {
            kelvin_=kelvin;
        }
    }
    
    double GetTempFromKelvin()
    {
        return kelvin_;
    }
    
    double GetTempAsCelsius()
    {
        double celsius=0;
        celsius=kelvin_ - 273.15;
        return celsius;
    }
    double GetTempAsFahrenheit()
    {
        double fahrenheit=0;
        fahrenheit=(((kelvin_-273.15)*9)/5 + 32);
        return fahrenheit;
    }
    void PrintTemperatures()
    {
        cout << "Kelvin = " << GetTempFromKelvin() << endl;
        cout << "fahrenheit = " << GetTempAsFahrenheit() << endl;
        cout << "celsius = " << GetTempAsCelsius() << endl << endl;
    }
    



};