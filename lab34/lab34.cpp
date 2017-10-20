/***************************************************
Sum of numbers 
Write a program that reads in positive integers from the user, 
each separated by a space, and the whole terminated by a negative number 
(e.g. 3 22 10 -2),and outputs the sum of the numbers entered 
(notincluding the terminated negative number!).
***************************************************/


#include <iostream>
using namespace std; 
int main()

{
                                                                                // initialization
        int num;
        int sum=0;
        
        cout << "Enter numbers separated by spaces and terminated with a negative number." << endl;
                                                                                // read first number
        cin  >> num ;
        
         while (num >= 0)
            {
                                                                                // add in to the sum
               sum = sum + num;                                                 // originally sum plus num was added to num wich means sum was never actually assigned to anything other than 0
                                                                                // read in next number (getting ready for next loop test)
               cin >> num;                                                      // this value had a typo and was sum instead of num
            }
                cout << "Sum is " << sum << endl;
                return 0;
}


/*
    Before I ran the program I made sure that I knew what was going on.
    I did this by going through and making things more readable. 
    Indenting the while funtion, cutting the cout from two unecessary lines to just one single line.
    After the code was easily readable I ran the code.
    Since I had already familiarized with the code I knew what to expect.
    This made spotting where the errors where happening much easier.
    Next I went through and read the code to refamiliarize myself. 
    I then whent through the code like i was the computer and doing the actions in my head.
    Thats when I spotted the first bug. Adding the num to the sum and setting the value to num and not sum.
    The second bug being couting the num and not sum so it would only show the most recently input number.
*/