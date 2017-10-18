/*
 kaden hurlimann
 10/17/2017

 Lab 3.3
 
 input user value. if the value is more than 50 or less than 1
 inform the user its not within the range and have them reinput.
 generate a random number if the number is higher than the random
 number out to high otherwise output to low. repeat the process until the number is guessed
*/


#include <iostream>
#include <ctime>
using namespace std;





int main()
{
    srand(time(0));                                                             // define random
    int userNumber = -1;                                                        // the user number is default -1 so the first and second loops will run
    int randomNumber = (rand()%50)+1;                                           // random number generator between 1 and 50
    
    
    
    while(userNumber != randomNumber)                                           // this while will run as long as the guess is wrong 
    {                                                                           // this while prompts the user calculates the value relative to the radnom number and outputs a response
           
           
     while (userNumber < 1 || userNumber > 50)                                  // this while is for when the value is not with in the range it asks the user to enter again
        {
           
            cout << "Please enter a value between 50 and 1." << endl;
            cin >> userNumber;
           
            if (userNumber < 1 || userNumber > 50)                              // finds if the value is within the range
            {
                cout << "invalid number. Please try again." << endl;
            }
        }
    
    
     
        if (userNumber < randomNumber)                                          // the lower statment. if the value is less than random have the user guess again and tell them lower
        {
            cout << endl << endl <<  "Higher than " << userNumber << endl;
        }
        else if (userNumber > randomNumber)                                     // the higher statement. if the value is higher than random have the user guess again and them higher
        {
            cout << endl << endl << "Lower than " << userNumber << endl;
        }
        cout << "Try again. Please enter a value between 50 and 1." << endl;
            cin >> userNumber;
        
    
    }
    
      
    for ( int i=10; i>0; --i)                                                   // count down from the value i
    {    
        cout << i << endl;
    }
    cout << "Correct. the number was " << randomNumber << endl;                 // tell the user they have won
    
}