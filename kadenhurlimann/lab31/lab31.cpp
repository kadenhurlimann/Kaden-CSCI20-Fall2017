

// Kaden Hurlimann
// lab 3.1



#include <iostream>
using namespace std;






    // ATT Unlimited Plus Plan
    double attPlus =90;                  //monthy cost of ATT Unlimited Plus
    double attPlusTwo =145;              //cost for two phones
    double attPlusAdd =20;               //an additional cost per line past two
    double attPlusMax =10;               //max number of lines
    double attPlusTab =10;               //cost of a tablet
    double attPlusCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    // ATT Unlimited Choice Plan
    double attChoice =60;                //monthy one line
    double attChoiceTwo =115;            //cost for two phones
    double attChoiceAdd =20;             //an additional cost per line past two
    double attChoiceMax =10;             //max number of lines
    double attChoiceTab =10;             //cost of a tablet
    double attChoiceCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    // ATT Family Plans
    double attFamily =20;                // per phone
    double attFamilyTab =10;             // tablet
    double attFamily1 =30;               // cost for 1 GB
    double attFamily3 =40;
    double attFamily6 =60;               // cost for 6 GBs
    double attFamily10 =80;
    double attFamily16 =90;
    double attFamily25 =110;
    double attFamilyCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    // Verizon Unlimited
    double verizon =100;
    double verizonTwo =130;
    double verizonAdd =20;
    double verizonTab =10;
    double verizonCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    // Sprint Unlimited
    double sprint =60;
    double sprintTwo =40;
    double sprintAdd =30;
    double sprintCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    // Sprint 2GB
    double sprintGB =40;
    double sprintGBAdd =40;
    double sprintGBData =2;
    double sprintGBCost =100000000000;    //the cost is a lot by default so that if a value is not defined it will not be chosen as cheapest
    
    
    
    // User Data
    double userLines =0;
    double userSmartLines =0;
    double userData =0;
    double userTab =0;


int ATTChoice()
{
    
}


int ATTFamily()
{
    
}


int Verizon()
{
    
}


int SprintUnlimited()
{
    
}


int SprintGB()
{
    
}



int main()
{
   
   cout << "Enter the number of dumb phones" << endl;
   cin >> userLines;
   cout << "enter the number of smart phones" << endl;
   cin >> userSmartLines;
   cout << "Enter the number of Tablets" <<endl;
   cin >> userTab;
   cout << "Enter GBs of data" << endl;
   cin >> userData;
   
   if (userData>0)
   {
       
       ATTFamily();
       
       SprintGB();
       
   }
   else 
   {
       ATTChoice();
       
       Verizon();
       
       SprintUnlimited();
       
   }
  
  if (attPlusCost < attChoiceCost)
  {
      if (attPlusCost < attFamilyCost)
      {
          if (attPlusCost < verizonCost)
          {
              if (attPlusCost < sprintCost)
              {
                  if (attPlusCost < sprintGBCost)
                  {
                      cout << "ATT Unlimited Plus Plan";
                  }
                  else
                  {
                      cout << " sprint 2GB Plan";
                  }
              }
              if (sprintCost < sprintGBCost)
              {
                  cout << "sprint Unlimited";
              }
              else
              {
                  cout << "sprint 2GB Plan";
              }
            
          }
          if (sprintCost < verizonCost)
          {
              if (sprintCost < sprintGBCost)
                  {
                      cout << "Sprint unlimited";
                  }
                  else
                  {
                      cout << " sprint 2GB Plan";
                  }
          }
          else
          {
          
      }
  }
  
  
  
}