/*
Kaden Hurlimann
11/9/2017

Lab 4.4
Accepts a name input first and last. 
needs to be less than 10 for first 
and less than 20 for last.
It should combine them somehow 
to make a username for a website.
gives 3 options to choose from.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first[100] = "Kaden0000000";                                           // set to 100 so if the user enters a value much to large it doesnt throw an error
    char last[100] = "Hurlimann00000000000";                                    // set to max length for testing
    char optionOne[100];
    char optionTwo[100];
    char optionThree[100];
    
    cout << "enter your first and last name seperated by a space." << endl;
    cout << "first name cannot be over 10 characters" << endl;
    cout << "last name cannot be over 20 characters" << endl << endl;
        
    while (strlen(first)>10 || strlen(last)>20)                                 // loops while the name is not with in the size range 
    {                                                                           // to leave branch the name has to be entered properly
        
        Prompt:                                                                 // under the circumstance that the name is the correct size but has other issues
        cin >> first >> last;
        
        if (strlen(first)>11 || strlen(last)>21)                                // informing netered name is to long and because it is to long it will loop anyway
        {
            cout << "your first or last name was to long" << endl;
            cout << "Please enter both names again." << endl;
        }
       
        if (strcmp(first, last) == 0)                                           // checking if the names match
        {
            cout << "Your first and last name cannot be the same." << endl;    
            cout << "Please enter both names again." << endl;
            goto Prompt;                                                        // forces the code to go back to prompt because the value would exit the branch otherwise
        }
       
       
        for(int i =0; i<strlen (first); ++i)                                    // checks first for uppercase letters and turns them into lowercase
        {
            first[i]=tolower(first[i]);
        }
        
        for(int i =0; i<strlen (last); ++i)                                     // checks last for uppercase letters and turns them into lowercase
        {
            last[i]=tolower(last[i]);
        }
        
    }
    
    
    strcpy(optionOne,first);                                                    // copies the first 3 characters into optionOne
    strcat(optionOne,last);                                                     // puts the last name at the end of optionOne
    
    strcpy(optionTwo,"cali$wag_");                                              // copies the string into optionTwo
    strncat(optionTwo,first,1);                                                 // puts the first letter of first at end of optionTwo    
    strncat(optionTwo,last,3);                                                  // puts first 3 at end of optionTwo
    
    strcpy(optionThree,last);
    strncat(optionThree,first,1);
    
    
    cout << endl << endl << endl;
    cout << optionOne    << endl;
    cout << optionTwo    << endl;
    cout << optionThree  << endl;
    
    //r (int i =0; strlen
    
    
    
    
    
    
    
    
    
}