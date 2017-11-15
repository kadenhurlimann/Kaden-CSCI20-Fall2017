

/*
 Kaden
 Hurlimann
 10/24
 Assignment 3
 
 
 Game Of nim
 
     Problem statement
     Game of Nim - Nim is a two-player game based on removing stones. 
     The game begins with two piles of stones.   
     Players alternate turns. 
     Each turn, a player chooses to remove one, two, or three stones from a single pile.  
     The player who removes the last stone wins the game.  
     The computer should be one player and it just needs to play legally (not well).
     
 
 Pseudo code
     
     a class with four private values left, right side amount 
     a class with four functions computerDecision, getLeft, getRight
     hold the values of the two piles in left and right.
     when a game is initialized have the dafualt values set the piles to 10 in each pile
     make an over flow to make the values what ever you want
     make a set function to set the value of one pile based on user input. subtract what ever the user wants between one and three
     a while statement for when getLeft is > 0 and getRight is > 0
     prompt user for a turn
     make ifs for what pile the user picks left or right by typing left or right
     an if for if the value is in between 1 and 3 and hole or force it to be hole or have the user renter
     make a function to randomly pick a number between 1 and 3 then subtract it from a random pile
     after the while have a win statement.
*/

#include <iostream>
#include <ctime>
using namespace std;

class nim                                                                       // performs basic algorithms during gameplay and hold pile values
{
    private:
        int Left;                                                               // hold the value of the left pile
        int Right;                                                              // hold the value of the right pile
        int ComputerSide;
        int ComputerAmount;
    public:
        nim()                                                                   // when an object is created give it a default pile size of 10
        {
            Left=10;
            Right=10;
        }
        int definePile(int pile);                                               // sets the piles to certain sizes based on input
        int setComputerSide();                                                  // selects a pile for the computer to pick from
        int setComputerAmount();                                                // selects an amount to take from a pile
        int getComputerSide();                                                  // outputs the selected pile by computer
        int getComputerAmount();                                                // outputs the selected amount by computer
        int getLeft();                                                          // outputs the value in the left pile
        int getRight();                                                         // outputs the value in the right pile
        int setLeft(int value);
        int setRight(int value);
};




int main()
{
    nim game;                                                                   // initializes an object of the first game
    int pileSize;
    
    
    cout << "                   Welcome to                       " << endl;
    cout << "                 The Game Of Nim                    " << endl;
    cout << " Nim is a two-player game based on removing stones. " << endl; 
    cout << "     The game begins with two piles of stones.      " << endl;
    cout << "             Players alternate turns.               " << endl;
    cout << "      Each turn, a player chooses to remove         " << endl;
    cout << "   one, two, or three stones from a single pile.    " << endl;
    cout << "The player who removes the last stone wins the game." << endl;
    
    cout <<endl<< "How many stones would you like in each pile." << endl;
    cout << "Recomended around 10" << endl;
    
    cin >> pileSize;
    game.definePile(pileSize);
    
    
    
    
    
    while(game.getLeft()>0 || game.getRight()>0)                                // this while keeps making turns until booth piles are empty
    {
        cout << endl << endl << endl;
        cout << "  Left Pile    Right Pile" << endl;
        cout << "     " << game.getLeft() << "            " << game.getRight() << endl << endl;
        cout << "you can take 1,2 or 3 from a single pile" << endl;
        cout << "type 1 for left or 2 for right to choose pile" << endl;
        cout << "press space then type how many to remove" << endl;
        cout << "example: 1 2 will take two from the left pile." << endl;
       
        Start1:                                                                 // this label is given so the function can restart if the user makes an error.
                                                                                // I know you dont like these but I could not think of another way to go about it.
    
    int amount;                                                                 // amount taken out of pile
    int side;                                                                   // pile chosen to take from
    
    cin >> side >> amount;
    
    if (side == 1)                                                              // this if determinds if the pile chosen was left.
    {
        if (amount < 4 && amount > 0)                                           // this if determinds if the value is infact 1, 2 or 3
        {
            if (game.getLeft()-amount<0)                                        // this if makes sure that there is enough stone left to take out of the pile
            {
                cout << "You can take no more from the left pile. try again" << endl << endl;
                goto Start1;
            }
            
             if (game.getRight()==0)                                            // checks if the right pile is empty
            {
                if (game.getLeft()-amount==0)                                   // checks if the player will win on this turn
                {
                    cout << endl << endl << "The game is over. You have won." << endl << endl;
                }
                 
            }
            
            game.setLeft(game.getLeft()-amount);
        }
        else        
        {
            cout << "invalid value please try again." << endl;
            goto Start1;
        }
    }
    else if (side == 2)                                                         // checks if the right pile was chosen
    {
        if (amount < 4 && amount > 0)                                           // this if determinds if the value is infact 1, 2 or 3
        {
            if (game.getRight()-amount<0)                                       // this if makes sure that there is enough stone left to take out of the pile
            {
                cout << "You can take no more from the Right pile. try again" << endl << endl;
                goto Start1;
            }
             if (game.getLeft()==0)                                             // checks if the right pile is empty
            {
                if (game.getRight()-amount==0)                                  // checks if the player will win on this turn
                {
                    cout << endl << endl << "The game is over. You have won." << endl << endl;
                }
                 
            }
            game.setRight(game.getRight()-amount);
        }
        else 
        {
            cout << "invalid value please try again." << endl;
            goto Start1;
        }
    }
    else
    {
        cout << "invalid pile please try again." << endl;
        goto Start1;
    }
       
        if (game.getLeft()>0 || game.getRight()>0)                              // this if prevents the computer from making a move after user has won.
 {
        cout << endl << endl << "The computer will now play." << endl;
                                                                                //game.computerDecision();
        Start:
       game.setComputerAmount();
       game.setComputerSide();
       
        if (game.getComputerSide() == 1)                                        // determinds if the left side was chosen
        {
             if (game.getRight()==0)                                            // determinds if the right pile is empty
            {
                if (game.getLeft()-game.getComputerAmount()==0)                 // determinds if the computer will win on this turn
                {
                    cout << endl << endl << "The game is over. The computer has won." << endl << endl;
                }
                 
            }
            if (game.getLeft()-game.getComputerAmount()<0)                      // makes sure the computer isnt taking more than the pile has
            {                                                                   // this prevent negative stones
                goto Start;
            }
            game.setLeft(game.getLeft()-game.getComputerAmount());
            cout << "The computer took " << game.getComputerAmount() << " stone(s) from the left pile." << endl;
            
        }
    else                                
    {
             if (game.getLeft()==0)                                             // determinds if the left pile if empty
            {
                if (game.getRight()-game.getComputerAmount()==0)                // determinds if the computer will win on this turn
                {
                    cout << endl << endl << "The game is over. The computer has won." << endl << endl;
                }
                 
            }
            
            if (game.getRight()-game.getComputerAmount()<0)                     // makes sure the computer isnt taking more than the pile has
            {                                                                   // this prevent negative stones
                goto Start;
            }
            
            game.setRight(game.getRight()-game.getComputerAmount());
            cout << "The computer took " << game.getComputerAmount() << " stone(s) from the right pile." << endl;
    }
 }
    
    }
    
    return 0;
    
}

int nim::setComputerSide()
{                       
    int side;
    srand(time(0));                                                
    side =(rand()%2)+1;                                                         // randomly selects left or right pile
    ComputerSide = side;
}

int nim::setComputerAmount()
{
    int amount;
    srand(time(0));                                                
    amount = (rand()%3)+1;                                                      // randomly selects a number between 1 and 3
    ComputerAmount = amount;
}

int nim::getComputerSide()
{
    return ComputerSide;
}

int nim::getComputerAmount()
{
    return ComputerAmount;
}

int nim::setRight(int value)
{
    Right=value;
}

int nim::setLeft(int value)
{
    Left=value;
}


int nim::definePile(int pile)                                                   // makes the left and right piles the size defined by user.
{
    Left=pile;
    Right=pile;
}


int nim::getLeft()                                                              // returns the value of the left pile
{   
    return Left;
}


int nim::getRight()                                                             // returns the value of the right pile
{
    return Right;
}