
// Kaden Hurlimann
// Lab 3.2
// 10/12/17

/* calculate a persons tax bracket and what they owe or are owed.
it should accept input of marriage status, name, gross wage, tax withheld
out put tax */



#include <iostream>
using namespace std;





int single(string Name, double Wage)
{
    double excess =0;
    double tax =0;
    
    if (Wage<=0)
    {
        cout << "you make no money or negative money." << endl;
    }
    
    else if (Wage <= 9325)
    {
        tax=Wage-(Wage*.10);
    }
    else if(Wage <= 37950)
    {
        excess=(Wage - 9325)*.15;
        tax=excess+ 932.5;
    }
    else if(Wage <= 91900)
    {
        excess=(Wage-37950)*.25;
        tax=excess+ 5226.25;
    }
    else if(Wage <= 191650)
    {
        excess=(Wage - 91900)*.28;
        tax=excess+ 18713.75;
    }
    else if(Wage <= 416700)
    {
        excess=(Wage - 191650)*.33;
        tax=excess+ 46643.75;
    }
    else (Wage > 416700);
    {
        excess=(Wage - 416700)*.396;
        tax=excess+ 120910.25;
    }
    cout << Name << " your income is $" << Wage << " and you owe " << tax << " in taxes." << endl;
}






int main()
{
    
    int userWage =0;
    string userMStatus ="single";
    string userName ="Givio Grey";
    const int exemptionPersonal =4050;
    const int exemptionSingle =6350;
    const int exemptionMarried =12700;
    int userWithheld =0;
    
    
    
    cout << "Please input name." << endl;
    cin >> userName;
    
    cout << "Please enter your marital status." << endl
         << "In this form 'single' or 'married'" << endl;
    cin >> userMStatus;
    
    cout << "Please input gross wage." << endl;
    cin >> userWage;
    
    cout << "Please enter amount of tax withheld" << endl;
    cin >> userWithheld;
    
    
    
    if (userMStatus == "single")
        {
        single(userName,userWage);
        }
   
   /* else if (userMStatus == "married")
        {
        married(userName,userWage);
        }
    */
    else
    {
        cout << "marital status invalid please enter either married or single." << endl;
    }
}
