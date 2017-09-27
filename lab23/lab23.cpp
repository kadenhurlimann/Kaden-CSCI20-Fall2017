// kaden hurlimann
// 23

#include <iostream>
#include <ctime>
using namespace std;


void swap (int& first, int& last) {                                                           // function to swap the two numbers
   
   int hold;                                                                    // place holder variable
    hold=first;
    first=last;                                                                 // actual swap
    last=hold;
    
    return;
    
}

void random (int& first, int& last){                                                          // function to unswap and calc random number
    
     int final=0;                                                               // final answer to be output
     int dif=0;                                                                 // a variable to hold the diference of first and last
     int hold;                                                                  // another place holder for swapping
    
    hold=first;
    first=last;                                                                 // swapping variables
    last=hold;
    
    dif =(last-first)+1;                                                        // calculating difference
     srand(time(0));                                                            // setting time to random to time
    final =(rand()%dif)+first;                                                  // calculating random
       
       cout << endl << "A random number between " << first << " and " << last << " is " << final << endl;   // output final values
    
    return;
}



int main ()
    {
        int firstNum =0;                                                         // input numbers
        int lastNum =0;
        
        
        cout << "enter smallest number first" << endl;                           // prompt user
        cin >> firstNum >> lastNum;                                              // prompt user
        swap (firstNum,lastNum);                                                 // call swap
        random (firstNum,lastNum);                                               // random number gen
        
        
    return 0;
}