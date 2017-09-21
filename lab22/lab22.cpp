

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randnum100()
{
      srand(time(0));
       int random100 =(rand()%100)+1;
       cout << "a random number between 1 and 100 is " << random100;
}



int main()
    {
      
      randnum100();
      
    }