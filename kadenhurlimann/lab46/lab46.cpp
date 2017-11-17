/*
kaden Hurlimann
11/16
Lab 4.6
*/


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream gradesF;
    string grades[100];
    int gradesV[100];
    string firstname[100];
    string lastname[100];
    int hours[100];
    int classes[100];
    classes[0]=2;
    int entries=3;
    int average[100];
    int averageHold;
    
    gradesF.open("input.txt");
     if (!gradesF.is_open()) {
      cout << "Could not open the file" << endl;
      return 1;
     }
  
   for (int i=0;i<entries;i++)
   {
    averageHold=0;
      gradesF >> firstname[i];
      gradesF >> lastname[i];
      gradesF >> classes[i];
     for (int j=0;j<classes[i];j++)
     {
      gradesF >> hours[j];
      gradesF >> grades[j];
      
     }
      cout << firstname[i];
      cout << lastname[i];  
      cout << endl;
     for (int k=0;k<classes[i];k++)
     {
      cout << grades[k] << " ";
     }
      cout << endl;
     for (int k=0;k<classes[i];k++)
     {
      cout << hours[k] << " ";
     }
      cout << endl;
   }
   
   for (int j=0; j<entries;j++)
   {
    for (int i=0; i<classes[j];i++)
    {
    
    if (grades[i]=="A")
    {
     gradesV[i]=4;
    }
    else if (grades[i]=="B")
    {
     gradesV[i]=3;
    }
    else if (grades[i]=="C")
    {
     gradesV[i]=2;
    }
    else if (grades[i]=="C")
    {
     gradesV[i]=1;
    }
    else if (grades[i]=="F")
    {
     gradesV[i]=0;
    }
    cout << gradesV[i];
    }
    cout << endl;
   }
   
   
   
   
   
   
   
   
   /*
   for(int i=0;name[i])
    gradesF >> name[0];
    gradesF >> grades[0];
    gradesF >> grades[1];
    cout << grades[3];
   */


}
