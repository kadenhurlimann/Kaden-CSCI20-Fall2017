// Kaden Hurlimann
// 9/12
// lab 16





#include <iostream>
#include <string>                      // allows string                                               
using namespace std ;
 
 
 
 struct stock {
    string stockName;
    double sharePrice;
    double sharesOwned;
    string stockSector;
    double totalValue;
    };
    
    
int main()
    {
        
        
        
        
        stock firstStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> firstStock.stockName >> firstStock.stockSector >> firstStock.sharePrice >> firstStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       firstStock.totalValue =firstStock.sharePrice*firstStock.sharesOwned;
       
        cout << firstStock.stockName << "         " << firstStock.sharesOwned << "             " << firstStock.sharePrice << "           " << firstStock.totalValue << endl;
        cout << endl << "Totoal Portfolio: $" << firstStock.totalValue << endl << endl << endl;
          
          
          
          
          
        
        stock secondStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> secondStock.stockName >> secondStock.stockSector >> secondStock.sharePrice >> secondStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       secondStock.totalValue =secondStock.sharePrice*secondStock.sharesOwned;
       
        cout << secondStock.stockName << "         " << secondStock.sharesOwned << "             " << secondStock.sharePrice << "           " << secondStock.totalValue << endl;
        cout << endl << "Totoal Portfolio: $" << secondStock.totalValue << endl << endl << endl;
        
        
        
        
        
        
        stock thirdStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> thirdStock.stockName >> thirdStock.stockSector >> thirdStock.sharePrice >> thirdStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       thirdStock.totalValue =thirdStock.sharePrice*thirdStock.sharesOwned;
       
        cout << thirdStock.stockName << "         " << thirdStock.sharesOwned << "             " << thirdStock.sharePrice << "           " << thirdStock.totalValue << endl;
        cout << endl << "Totoal Portfolio: $" << thirdStock.totalValue << endl << endl << endl;
        
        
        
        
        
        
        stock fourthStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> fourthStock.stockName >> fourthStock.stockSector >> fourthStock.sharePrice >> fourthStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       fourthStock.totalValue =fourthStock.sharePrice*fourthStock.sharesOwned;
       
        cout << fourthStock.stockName << "         " << fourthStock.sharesOwned << "             " << fourthStock.sharePrice << "           " << fourthStock.totalValue << endl;
        cout << endl << "Totoal Portfolio: $" << fourthStock.totalValue << endl << endl << endl;
        
        
        
        
        
        
        stock fifthStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> fifthStock.stockName >> fifthStock.stockSector >> fifthStock.sharePrice >> fifthStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       fifthStock.totalValue =fifthStock.sharePrice*fifthStock.sharesOwned;
       
        cout << fifthStock.stockName << "         " << fifthStock.sharesOwned << "             " << fifthStock.sharePrice << "           " << fifthStock.totalValue << endl;
        cout << endl << "Totoal Portfolio: $" << fifthStock.totalValue << endl << endl << endl;
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
