/*
Kaden Hurlimann
Lab 4.3

    create a program that holds inventory and holds purchases
    for a user. clalculates the total price and output price
    and the items they purchase. all values are stored in a class
    
*/



#include <iostream>
using namespace std;


class cart
{
    private:
    string name_[10]   {"sand","grapes","windows vista","fishing pole","steak","ladder","toilet paper","keyboard","piano","mazda"};
    int inventory_[10] {    50,       4,            200,             1,      8,     465,            10,        24,    235,  2000 };
    double price_[10]  {    38,      38,             38,            38,     38,      38,            38,        38,     38,   39  };
    
    
    
    public:
    int setInventory(int value, int amount);
    //int setPrice(int value);
    //int setName(int value);
    int getInventory(int value);
    double getPrice(int value);
    string getName(int value);
    
};

int main()
{
    cart shack;
    int total=0;
    int items=10;
   // string name[10]   {"sand","grapes","windows vista","fishing pole","steak","ladder","toilet paper","keyboard","piano","mazda"};
   // int inventory[10] {  50,   4,        200,             1,             8,      465,      10,           24,       235,    2000 };
   // double price[10]  {   38,    38,        38,            38,           38,    38,        38,            38,       38,     39  };
    int cart[200];
    int purchased=0;
    int selected;
    int j=0;
    
    while (selected != 100)
    {
    cout << "welcome to the $38 shack"<< endl;
    cout << "       item  list       "<< endl;
    cout << "0." << shack.getName(0) << "       $" << shack.getPrice(0) << endl;
    cout << "1." << shack.getName(1) << "       $" << shack.getPrice(1) << endl;
    cout << "2." << shack.getName(2) << "       $" << shack.getPrice(2) << endl;
    cout << "3." << shack.getName(3) << "       $" << shack.getPrice(3) << endl;
    cout << "4." << shack.getName(4) << "       $" << shack.getPrice(4) << endl;
    cout << "5." << shack.getName(5) << "       $" << shack.getPrice(5) << endl;
    cout << "6." << shack.getName(6) << "       $" << shack.getPrice(6) << endl;
    cout << "7." << shack.getName(7) << "       $" << shack.getPrice(7) << endl;
    cout << "8." << shack.getName(8) << "       $" << shack.getPrice(8) << endl;
    cout << "9." << shack.getName(9) << "       $" << shack.getPrice(9) << endl << endl << endl;
    
    cout << "Please enter item value to add to cart." << endl;
    cout << "to finish shopping and check out enter 100" << endl;
    
   
    cin >> selected;
    
    if (selected > 9 || selected <0)
        {
            cout << endl << endl << "invalid item your purchase was not registered" << endl << endl;
        }
    else
    {
    if (shack.getInventory(selected)<1)
    {
        cout << endl << endl << "item out of stock your purchase was not registered" << endl << endl;
    }
    else
    {
       
    
        total = total+shack.getPrice(selected);
        shack.setInventory(selected,shack.getInventory(selected)-1);
        cart[j]=selected;
        purchased=purchased+1;
        ++j;
    }
    }
    }
    
    cout << endl << endl << endl << endl << endl
         << "thank you for shopping at the $38 shack" << endl;
    
    for (int i=0; i<purchased; ++i)
    {
     
     cout << shack.getName(cart[i]) << "  $" << shack.getPrice(cart[i]) << endl;
    }
    
    cout<< "Your total is $" << total<< endl;

    
    
}

int cart::getInventory(int value)
{
    return inventory_[value];
}

    
    
    
    
double cart::getPrice(int value)
{
    return price_[value];
}
    
    
    
    
    
    
    
    
string cart::getName(int value)
{
    return name_[value];
}


int cart::setInventory(int value, int amount)
{
    inventory_[value]=amount;
}
