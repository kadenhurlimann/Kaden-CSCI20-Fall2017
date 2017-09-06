
  // Kaden Hurlimann
  // 8/31 population calculator

#include <iostream>
using namespace std;


int main() 
    {
        
      int a; 
      int b;
      int c;
      int d;
      int e;
      int f;           // setting variables
      int g;
      int h;
      int i;
      int j;
      int k;
      int l;
      
      c=7418359; // population
     
      cout<< "What year would you like to know the population"<< endl; // ask user for an input
      cin >> b;
     
     
     h=b*750000;
     
     
     
          // years from now
     // d=b*365;     // days in a year
     // e=d*24;      // hours in day
     // f=e*60;      // minutes in hour
     // g=f*60;      // seconds in minute
     // h=g/12;      // divided by net gain
      k=c/10;        
      j=h+k;       // added to original pop
      
    l=b+2017;
    
    
    
    
    
    
    cout << " in the year " << l << " the population will be about " << j << "00"<< endl ; // show user output
    }