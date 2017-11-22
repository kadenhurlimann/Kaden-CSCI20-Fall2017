
/*
comment the code and describe whats happening and any errors
*/


#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[];                                                   // declaring a character array

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;                                                        // creating a char based off the character array
    char * tail = name;
    nameLength = strlen(*name);                                                 // finding length of the char array

    cout << "Your word is " << firststr << endl;

    if (nameLength<10)
    {
         while (*head != '\0')                                                  // iterating through the array
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];                                            // size of array is the length of a variable (dynamic)

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}