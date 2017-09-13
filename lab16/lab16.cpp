// Kaden Hurlimann
// 9/12
// lab 16





#include <iostream>
#include <string>                      // allows string                                               
using namespace std ;
 
 
 
 struct stock {           // initiate struct
    string stockName;
    double sharePrice;
    double sharesOwned;    // initiate variables with in struct
    string stockSector;
    double totalValue;
    };
    
    
int main()
    {
        
        
        
        int totalPortfolio =0;
        
        stock firstStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;                             // promp user for first stock
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> firstStock.stockName >> firstStock.stockSector >> firstStock.sharePrice >> firstStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;                                            // output first stock
       
       firstStock.totalValue =firstStock.sharePrice*firstStock.sharesOwned;                
       
        cout << firstStock.stockName << "         " << firstStock.sharesOwned << "             " << firstStock.sharePrice << "           " << firstStock.totalValue << endl;   // output first stock

          
          
          
          
        
        stock secondStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> secondStock.stockName >> secondStock.stockSector >> secondStock.sharePrice >> secondStock.sharesOwned;    //promp first stock
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       secondStock.totalValue =secondStock.sharePrice*secondStock.sharesOwned;                                            // calculate second stock
       
        cout << secondStock.stockName << "         " << secondStock.sharesOwned << "             " << secondStock.sharePrice << "           " << secondStock.totalValue << endl;    // output second stock

        
        
        
        
        
        stock thirdStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> thirdStock.stockName >> thirdStock.stockSector >> thirdStock.sharePrice >> thirdStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       thirdStock.totalValue =thirdStock.sharePrice*thirdStock.sharesOwned;
       
        cout << thirdStock.stockName << "         " << thirdStock.sharesOwned << "             " << thirdStock.sharePrice << "           " << thirdStock.totalValue << endl;     // output third stock

        
        
        
        
        
        stock fourthStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> fourthStock.stockName >> fourthStock.stockSector >> fourthStock.sharePrice >> fourthStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       fourthStock.totalValue =fourthStock.sharePrice*fourthStock.sharesOwned;
       
        cout << fourthStock.stockName << "         " << fourthStock.sharesOwned << "             " << fourthStock.sharePrice << "           " << fourthStock.totalValue << endl;     // output fourth stock
        
        
        
        
        
        
        
        stock fifthStock;
        
        cout << "please enter stock information in this form" << endl;
        cout << "(name) (sector) (current share price) (number of shares owned)" << endl;
        cout << "for example Appl H 21.45 36" << endl; 
        cin >> fifthStock.stockName >> fifthStock.stockSector >> fifthStock.sharePrice >> fifthStock.sharesOwned; 
        cout << "Stock Name    No of Shares   Current Value   Total Value" << endl;
        cout << "----------    ------------   -------------   -----------" << endl;
       
       fifthStock.totalValue =fifthStock.sharePrice*fifthStock.sharesOwned;
       
        cout << fifthStock.stockName << "         " << fifthStock.sharesOwned << "             " << fifthStock.sharePrice << "           " << fifthStock.totalValue << endl;    // output second stock
        totalPortfolio = firstStock.totalValue+secondStock.totalValue+thirdStock.totalValue+fourthStock.totalValue+fifthStock.totalValue;                                       // calculate
        cout << endl << "Tototal Portfolio value : $" << totalPortfolio << endl << endl << endl;                                                         // output total value
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
