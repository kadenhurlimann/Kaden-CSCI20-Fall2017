
// Kaden Hurlimann
// 9/5
// floating point




#include <iostream>
#include <iomanip>
using namespace std;


int main() 
    {

    cout.setf(ios::fixed);
    double input=0.0 ;            //users input in change
    int inputs=0;                 //a buffer used for calculating modulo
    int output=0 ;                //a buffer used for calculation
    int quarter=0 ;               
    int dime=0 ;
    int penny=0 ;
    int nickel=0 ;
    int quarterToDime=0 ;         //a buffer used for calculating remaiders
    int dimeToNickel=0 ;          //a buffer used for calculating remaiders
    int nickelToPenny=0 ;         //a buffer used for calculating remaiders
    double finalOutput=0 ;        //a buffer used for calculations
    double doubleFinalOutput=0 ;  //final output bye the machine
    double finalInput=0.0 ;       //a buffer used for calculating remaiders
    
    
    
    cout << "Please insert change." ;         //user prompt
    cin >> input ;
    
    finalOutput=input-(input*0.109) ;         //calculating the machine fee
    finalInput=input/100 ;                    // forcing machine to output in change
    inputs=input;
    
    quarter=input/25 ;                        //finding quarters
    quarterToDime=inputs%25 ;                 //finding remainders
    dime=quarterToDime/10 ;                   //finding dimes
    dimeToNickel=quarterToDime-dime*(10) ;    //finding remainders
    nickel=dimeToNickel/5 ;                   //finding nickels
    nickelToPenny=dimeToNickel-nickel*(5) ;   //finding remainders
    penny=nickelToPenny ;                     //finding pennies
    
    doubleFinalOutput=finalOutput/100;        // forcing to output in change
    
    
    
    cout << setprecision(0) << "You have entered " << input << " cents." << endl ;                                                                         //final output to the user
    cout <<  quarter << " Quarter(s) " << dime << " Dime(s) " << nickel << " Nickel(s) and " << penny << " Penny/Pennies." << endl ;    //final output to the user
    cout << setprecision(2) << "You have entered $" << finalInput << ". After the fee you get $" << doubleFinalOutput << " in cash." ;                     //final output to the user
    
    
    
    }