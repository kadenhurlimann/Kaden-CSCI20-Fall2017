/*
kaden Hurlimann
Lab 4.5
Accepts a name input first and last. 
needs to be less than 10 for first 
and less than 20 for last.
It should combine them somehow 
to make a username for a website.
gives 3 options to choose from.
do not use c strings
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first = "Kaden0000000";                                           // set to 100 so if the user enters a value much to large it doesnt throw an error
    string last = "Hurlimann00000000000";                                    // set to max length for testing
    string optionOne;
    string optionTwo;
    string optionThree;
    
    cout << "enter your first and last name seperated by a space." << endl;
    cout << "first name cannot be over 10 characters" << endl;
    cout << "last name cannot be over 20 characters" << endl << endl;
        
    while (first.length()>10 || last.length()>20)                                 // loops while the name is not with in the size range 
    {                                                                           // to leave branch the name has to be entered properly
        
        Prompt:                                                                 // under the circumstance that the name is the correct size but has other issues
        cin >> first >> last;
        
        if (first.length()>11 || last.length()>21)                                // informing netered name is to long and because it is to long it will loop anyway
        {
            cout << "your first or last name was to long" << endl;
            cout << "Please enter both names again." << endl;
        }
       
        if (first==last)                                                        // checking if the names match
        {
            cout << "Your first and last name cannot be the same." << endl;    
            cout << "Please enter both names again." << endl;
            goto Prompt;                                                        // forces the code to go back to prompt because the value would exit the branch otherwise
        }
        
    }
    
    
    optionOne=first;                                                    // copies the first into optionOne
    optionOne.append(last);                                                     // puts the last name at the end of optionOne
    
    optionTwo="cali$wag_";                                              // copies the string into optionTwo
    optionTwo.append(first);                                                 // puts the first at end of optionTwo    
    optionTwo.insert(10,last);                                       // puts last in at the 10 place
    optionTwo.resize(13);                                            // delets everything after the 13th place
    
    optionThree=last;
    optionThree.append(first);
    
    
    cout << endl << endl << endl;
    cout << optionOne    << endl;
    cout << optionTwo    << endl;
    cout << optionThree  << endl;
    
}