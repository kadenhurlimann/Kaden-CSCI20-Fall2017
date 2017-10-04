// Kaden Hurlimann
// lab 25





#include <iostream>

using namespace std;


class book                                                                                         // a class to hold the variables title author name and year
{                                                                                                  // and print them
    private:
    string title_="title";
    string author_="author";
    string authorL_="author last";                                                                  // default values incase somehow the variables are not assigned
    string year_="copyright year";
    public:
        void SetTitle(string title)
        {
            title_ = title;
        }
        void SetAuthor(string author, string authorLast)
        {
            author_ = author;
            authorL_ = authorLast;
        }
        void SetYear(string year)                                                                       // function to set the variables
        {
            year_ = year;
        }
        string GetTitle()
        {
            return title_;
        }
        string GetAuthor()
        {
            return author_;                                                                              // get functions. I did not end up using these
        }
        string GetYear()
        {
            return year_;
        }
        void Print()                                                                                     // function used to print a single book
        {
            cout << title_ << "  " << author_ << " " << authorL_ << "  " << year_ << endl << endl;
        }
    
};


int main()
{
    book book1;
    book book2;
    book book3;                                    // creating the objects
    book book4;
    book book5;
    
    string title = "title";
    string authorFirst = "authorfirst";             //variables
    string authorLast = "authorlast";
    string year = "year";
    
    
    
    
    
    /*    This information is for the user input
    cout << "please enter the title, author, and copyright year of the first book in this format" << endl <<  "'title namefirst namelast year'" << endl;
    cin >> title >> authorFirst >> authorLast>> year;
    */
    
    
    
    book1.SetTitle("dune");
    book1.SetAuthor("frank","Herbert");                    //set book 1
    book1.SetYear("1967");

    book2.SetTitle("foundation");
    book2.SetAuthor("hugh","Larry");                       //set book 2
    book2.SetYear("1956");
    
    book3.SetTitle("1984");
    book3.SetAuthor("cool","guy");                         //set book 3
    book3.SetYear("1943");
    
    book4.SetTitle("the long venture");
    book4.SetAuthor("Givio","Gray");                       //set book 4
    book4.SetYear("506");
    
    book5.SetTitle("Today");
    book5.SetAuthor("Wheeler","Dealer");                   //set book 5
    book5.SetYear("2056");
    
    cout << "Book   Author   Year of copyright" << endl << endl << endl;                   // header
    
     book1.Print();
     book2.Print();
     book3.Print();                                //print functions
     book4.Print();
     book5.Print();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // the following data was made for the user input
    
    
    /*
    cout << "please enter the title, author, and copyright year of the second book in this format" << endl <<  "'title namefirst namelast year'" << endl;
    cin >> title >> authorFirst >> authorLast>> year;
    
    book2.SetTitle(title);
    book2.SetAuthor(authorFirst,authorLast);
    book2.SetYear(year);
    
    cout << "please enter the title, author, and copyright year of the third book in this format" << endl <<  "'title namefirst namelast year'" << endl;
    cin >> title >> authorFirst >> authorLast>> year;
    
    book3.SetTitle(title);
    book3.SetAuthor(authorFirst,authorLast);
    book3.SetYear(year);
    
    cout << "please enter the title, author, and copyright year of the fourth book in this format" << endl <<  "'title namefirst namelast year'" << endl;
    cin >> title >> authorFirst >> authorLast>> year;
    
    book4.SetTitle(title);
    book4.SetAuthor(authorFirst,authorLast);
    book4.SetYear(year);
    
    cout << "please enter the title, author, and copyright year of the fith book in this format" << endl <<  "'title namefirst namelast year'" << endl;
    cin >> title >> authorFirst >> authorLast>> year;
    
    book5.SetTitle(title);
    book5.SetAuthor(authorFirst,authorLast);
    book5.SetYear(year); */
    
}