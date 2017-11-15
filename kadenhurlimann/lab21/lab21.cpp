
// kaden hurlimann
// lab 2.1
// 9/19



#include <iostream>                                                // initilize
#include <cmath>
using namespace std;


int main()
    {
        double inputTemp = 0.0;
        double inputWindSpeed = 0.0;
        double OldStyleWindChill = 0.0;
        double NewStyleWindChill = 0.0;
        double Difference = 0.0;
        
        
        cout << "Please input Temperature in fahrenheit" << endl;
        cin >> inputTemp ;
        cout << "Please input wind speed" << endl;
        cin >> inputWindSpeed ;
        
        
        OldStyleWindChill =0.081*(3.71*sqrt(inputWindSpeed)+5.81-0.25*inputWindSpeed)*(inputTemp-91.4)+91.4;
        NewStyleWindChill =35.74+(0.6125*inputTemp)-(35.75*(pow(inputWindSpeed,0.16)))+(0.4275*inputTemp);
        Difference = OldStyleWindChill-NewStyleWindChill;
        
        cout << "Wind speed" << endl;
        cout << inputWindSpeed << endl;
        cout << endl << "Old Formula" << endl;
        cout << OldStyleWindChill << endl;
        cout << endl << "New Formula" << endl;
        cout << NewStyleWindChill << endl;
        cout << endl << "Difference" << endl;
        cout << Difference;
    }
        
        