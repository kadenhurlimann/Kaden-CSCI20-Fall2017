/*
 
 Kaden Hurlimann
 11/2

    create a program that holds inventory and holds purchases
    for a user. clalculates the total price and output price
    and the items they purchase
*/


#include <iostream>
using namespace std;

int main()
{
    
    int total=0;
    int items=10;
    string name[10]   {"sand","grapes","windows vista","fishing pole","steak","ladder","toilet paper","keyboard","piano","mazda"};
    int inventory[10] {  50,   4,        200,             1,             8,      465,      10,           24,       235,    2000 };
    double price[10]  {   38,    38,        38,            38,           38,    38,        38,            38,       38,     39 };
    int cart[200];
    int purchased=0;
    int selected;
    
    while (selected != 100)
    {
    cout << "welcome to the $38 shack"<< endl;
    cout << "       item  list       "<< endl;
    cout << "0." << name[0] << "       $" << price[0] << endl;
    cout << "1." << name[1] << "       $" << price[1] << endl;
    cout << "2." << name[2] << "       $" << price[2] << endl;
    cout << "3." << name[3] << "       $" << price[3] << endl;
    cout << "4." << name[4] << "       $" << price[4] << endl;
    cout << "5." << name[5] << "       $" << price[5] << endl;
    cout << "6." << name[6] << "       $" << price[6] << endl;
    cout << "7." << name[7] << "       $" << price[7] << endl;
    cout << "8." << name[8] << "       $" << price[8] << endl;
    cout << "9." << name[9] << "       $" << price[9] << endl << endl << endl;
    
    cout << "Please enter item value to add to cart." << endl;
    cout << "to finish shopping and check out enter 100" << endl;
    
   
    cin >> selected;
    
    if (selected > 9 || selected <0)
        {
            cout << endl << endl << "invalid item your purchase was not registered" << endl << endl;
        }
    else
    {
    if (inventory[selected]<1)
    {
        cout << endl << endl << "item out of stock your purchase was not registered" << endl << endl;
    }
    else
    {
        int i=0;
    
        total = total+price[selected];
        inventory[selected]=inventory[selected]-1;
        cart[i]=selected;
        purchased=purchased+1;
        ++i;
    }
    }
    }
    
    cout << endl << endl << endl << endl << endl
         << "thank you for shopping at the $38 shack" << endl;
    
    for (int i=0; i<purchased; ++i)
    {
     cout << name[i] << "  $" << price[i] << endl;
    }
    
    cout<< "Your total is $" << total<< endl;

    
    
}
