
/*
Kaden Hurlimann
Assignment 4
11/18/17

create a program that reads from a file of test answers
checks if they match with the answer key file
if they match add 1 point to the score
if they are incorrect subtract 1/4
keep track of missed questions
print name of student with points earned and questions missed
*/



#include <iostream>
#include <string>
#include <fstream>

using namespace std;



class test                                                                      // This class holds the information of a single student and calculates there score
{


    private:
    string first_;             //name
    string last_;             
    string answer_[21];         // list of all answers
    int incorrectList_[21];     //incorrect answers
    double score_=0;          //total score
    int correct_=0;           
    int incorrect_=0;
    int omitted_=0;          

    public:
    void setName(string first, string last);                                    // set a students name
    string getFirst();                                                          // returns first name
    string getLast();                                                           //
    void setAnswer(string answer, int value);                                   // set a single answer
    string getAnswer(int value);                                                // returns a single answer
    void setScore(int score);                                                   // allows for direct modification of a score
    int getScore();                                                             // returns score
    void setCorrect();                                                          // adds a correct answer to the score
    int getCorrect();                                                           // returns total correct answers
    void setIncorrect();                                                        // adds an incorrect answer to the score and to incorrectList
    int getIncorrect();                                                         // returns total incorrect answers
    void setOmitted();                                                          // adds to the ommitted questions list doesnt modify score
    int getOmitted();                                                           // returns omitted answers
    int getIncorrectList(int value);                                            // returns a question from the incorrectList
    void setIncorrectList(int answer, int value);                               // adds a question to the incorrectList


};

int main()
{
    ifstream testF;
    testF.open("test.txt");                                                     // open test.txt
    if (!testF.is_open()){
        cout << "Could not open the test file" << endl;
        return 1;
    }

    ifstream answerF;
    answerF.open("answer.txt");
    if (!answerF.is_open()){                                                    // open answer.txt
        cout << "Could not open the answer file" << endl;
        return 2;
    }

    ofstream scoresF;
    scoresF.open("scores.txt", ios::out|ios::in|ios::trunc);                    // creates scores.txt
    if (!scoresF.is_open()){
        cout << "Could not create the score file" << endl;
        return 2;
    }
    

    string nameFirst;
    string nameLast;
    string answer[21];
    int hold=0;                                                                 // extra trash variable
    string key[21];                                                             // answer key
    test studentOne;
    test studentTwo;
    test studentThree;
    test studentFour;
    test studentFive;
    test studentSix;
    const int numberStudents = 6;
    const int numberQuestions = 21;

        testF >> nameFirst >> nameLast;
        studentOne.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){                                   // store the students answers
            testF >> answer[i];
            studentOne.setAnswer(answer[i],i);
            answer[i]="error";                                                  // incase the value is stored twice the output will be error so i can tell if it is broken
        }
        
        testF >> nameFirst >> nameLast;
        studentTwo.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){                                   // store the students answers
            testF >> answer[i];
            studentTwo.setAnswer(answer[i],i);
            answer[i]="error";
        }
        
        testF >> nameFirst >> nameLast;
        studentThree.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){                                   // store the students answers
            testF >> answer[i];
            studentThree.setAnswer(answer[i],i);
            answer[i]="error";
        }

        testF >> nameFirst >> nameLast;
        studentFour.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){
            testF >> answer[i];
            studentFour.setAnswer(answer[i],i);
            answer[i]="error";
        }

        testF >> nameFirst >> nameLast;
        studentFive.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){                                   // store the students answers
            testF >> answer[i];
            studentFive.setAnswer(answer[i],i);
            answer[i]="error";
        }

        testF >> nameFirst >> nameLast;
        studentSix.setName(nameFirst,nameLast);
        for(int i=0; i<numberQuestions; i++){
            testF >> answer[i];
            studentSix.setAnswer(answer[i],i);
            answer[i]="error";
        }
        
        
        for(int i=0; i<numberQuestions; i++)
        {
            answerF >> key[i];
        }

    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentOne.getAnswer(i)=="?")
        {
            studentOne.setOmitted();
        }
        else if(studentOne.getAnswer(i)==key[i])
        {
            studentOne.setCorrect();
        }
        else
        {
            studentOne.setIncorrect();
            studentOne.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    hold=0;
    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentTwo.getAnswer(i)=="?")
        {
            studentTwo.setOmitted();
        }
        else if(studentTwo.getAnswer(i)==key[i])
        {
            studentTwo.setCorrect();
        }
        else
        {
            studentTwo.setIncorrect();
            studentTwo.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    hold=0;
    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentThree.getAnswer(i)=="?")
        {
            studentThree.setOmitted();
        }
        else if(studentThree.getAnswer(i)==key[i])
        {
            studentThree.setCorrect();
        }
        else
        {
            studentThree.setIncorrect();
            studentThree.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    hold=0;
    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentFour.getAnswer(i)=="?")
        {
            studentFour.setOmitted();
        }
        else if(studentFour.getAnswer(i)==key[i])
        {
            studentFour.setCorrect();
        }
        else
        {
            studentFour.setIncorrect();
            studentFour.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    hold=0;
    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentFive.getAnswer(i)=="?")
        {
            studentFive.setOmitted();
        }
        else if(studentFive.getAnswer(i)==key[i])
        {
            studentFive.setCorrect();
        }
        else
        {
            studentFive.setIncorrect();
            studentFive.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    hold=0;
    for(int i=0; i<numberQuestions; i++)                                        // determinds if the answer is right, wrong or not answered
    {
        
        if(studentSix.getAnswer(i)=="?")
        {
            studentSix.setOmitted();
        }
        else if(studentSix.getAnswer(i)==key[i])
        {
            studentSix.setCorrect();
        }
        else
        {
            studentSix.setIncorrect();
            studentSix.setIncorrectList(i,hold);
            hold++;
        }
    }
    
    cout << studentOne.getFirst() << " " << studentOne.getLast() << endl;       // prints student one score missed questions and un answered questions
    cout << "Correct: " << studentOne.getCorrect() << endl;
    cout << "Incorrect: " << studentOne.getIncorrect() << endl;
    for(int i=0; i<studentOne.getIncorrect(); i++)
    {
        cout << studentOne.getIncorrectList(i) << " "; 
    }
    cout << endl << "total score: " << studentOne.getScore() << endl <<endl;
    
    cout << studentTwo.getFirst() << " " << studentTwo.getLast() << endl;       // prints student two score missed questions and un answered questions
    cout << "Correct: " << studentTwo.getCorrect() << endl;
    cout << "Incorrect: " << studentTwo.getIncorrect() << endl;
    for(int i=0; i<studentTwo.getIncorrect(); i++)
    {
        cout << studentTwo.getIncorrectList(i) << " "; 
    }
    cout << endl << "total score: " << studentTwo.getScore() << endl <<endl;
    
    cout << studentThree.getFirst() << " " << studentThree.getLast() << endl;   // prints student three score missed questions and un answered questions
    cout << "Correct: " << studentThree.getCorrect() << endl;
    cout << "Incorrect: " << studentThree.getIncorrect() << endl;
    for(int i=0; i<studentThree.getIncorrect(); i++)
    {
        cout << studentThree.getIncorrectList(i) << " "; 
    }
    cout << endl << "total score: " << studentThree.getScore() << endl <<endl;
    
    cout << studentFour.getFirst() << " " << studentFour.getLast() << endl;     // prints student four score missed questions and un answered questions
    cout << "Correct: " << studentFour.getCorrect() << endl;
    cout << "Incorrect: " << studentFour.getIncorrect() << endl;
    for(int i=0; i<studentFour.getIncorrect(); i++)
    {
        cout << studentFour.getIncorrectList(i) << " "; 
    }
    cout << endl << "total score: " << studentFour.getScore() << endl <<endl;
    
     cout << studentFive.getFirst() << " " << studentFive.getLast() << endl;    
    cout << "Correct: " << studentFive.getCorrect() << endl;
    cout << "Incorrect: " << studentFive.getIncorrect() << endl;
    for(int i=0; i<studentFive.getIncorrect(); i++)
    {
        cout << studentFive.getIncorrectList(i) << " ";
    }
    cout << endl << "total score: " << studentFive.getScore() << endl << endl;  // prints student five score missed questions and un answered questions
    
    cout << studentSix.getFirst() << " " << studentSix.getLast() << endl;       // prints student six score missed questions and un answered questions
    cout << "Correct: " << studentSix.getCorrect() << endl;
    cout << "Incorrect: " << studentSix.getIncorrect() << endl;
    for(int i=0; i<studentSix.getIncorrect(); i++)
    {
        cout << studentSix.getIncorrectList(i) << " ";
    }
    cout << endl << "total score: " << studentSix.getScore() << endl <<endl;

    
    
    
    scoresF << studentOne.getFirst() << " " << studentOne.getLast() << endl;    // writes student one score missed questions and un answered questions to a file
    scoresF << "Correct: " << studentOne.getCorrect() << endl;
    scoresF << "Incorrect: " << studentOne.getIncorrect() << endl;
    for(int i=0; i<studentOne.getIncorrect(); i++)
    {
        scoresF << studentOne.getIncorrectList(i) << " "; 
    }
    scoresF << endl << "total score: " << studentOne.getScore() << endl <<endl;
    
    scoresF << studentTwo.getFirst() << " " << studentTwo.getLast() << endl;    // writes student two score missed questions and un answered questions to a file
    scoresF << "Correct: " << studentTwo.getCorrect() << endl;
    scoresF << "Incorrect: " << studentTwo.getIncorrect() << endl;
    for(int i=0; i<studentTwo.getIncorrect(); i++)
    {
        scoresF << studentTwo.getIncorrectList(i) << " "; 
    }
    scoresF << endl << "total score: " << studentTwo.getScore() << endl <<endl;
    
    scoresF << studentThree.getFirst() << " " << studentThree.getLast() << endl;
    scoresF << "Correct: " << studentThree.getCorrect() << endl;
    scoresF << "Incorrect: " << studentThree.getIncorrect() << endl;
    for(int i=0; i<studentThree.getIncorrect(); i++)
    {
        scoresF << studentThree.getIncorrectList(i) << " "; 
    }
    scoresF << endl << "total score: " << studentThree.getScore() << endl <<endl;
    
    scoresF << studentFour.getFirst() << " " << studentFour.getLast() << endl;
    scoresF << "Correct: " << studentFour.getCorrect() << endl;
    scoresF << "Incorrect: " << studentFour.getIncorrect() << endl;
    for(int i=0; i<studentFour.getIncorrect(); i++)
    {
        scoresF << studentFour.getIncorrectList(i) << " "; 
    }
    scoresF << endl << "total score: " << studentFour.getScore() << endl <<endl;
    
     scoresF << studentFive.getFirst() << " " << studentFive.getLast() << endl;
    scoresF << "Correct: " << studentFive.getCorrect() << endl;
    scoresF << "Incorrect: " << studentFive.getIncorrect() << endl;
    for(int i=0; i<studentFive.getIncorrect(); i++)
    {
        scoresF << studentFive.getIncorrectList(i) << " ";
    }
    scoresF << endl << "total score: " << studentFive.getScore() << endl << endl;
    
    scoresF << studentSix.getFirst() << " " << studentSix.getLast() << endl;
    scoresF << "Correct: " << studentSix.getCorrect() << endl;
    scoresF << "Incorrect: " << studentSix.getIncorrect() << endl;
    for(int i=0; i<studentSix.getIncorrect(); i++)
    {
        scoresF << studentSix.getIncorrectList(i) << " ";
    }
    scoresF << endl << "total score: " << studentSix.getScore() << endl <<endl;
    
  


    testF.close();
    answerF.close();                                                            //closes all file just in case
    scoresF.close();
    
    
    
    





}

void test::setName(string first, string last)                                   
{
    first_=first;
    last_=last;
}

string test::getFirst()
{
    return first_;
}

string test::getLast()
{
    return last_;
}

void test::setAnswer(string answer, int value)
{
    answer_[value]=answer;
}

string test::getAnswer(int value)
{
    return answer_[value];
}

void test::setScore(int score)
{
    score_=score;
}

int test::getScore()
{
    return score_;
}

void test::setCorrect()
{
    correct_++;
    score_=score_+1;
}

int test::getCorrect()
{
    return correct_;
}

void test::setIncorrect()
{
    incorrect_++;
    score_=score_-0.25;
}

int test::getIncorrect()
{
    return incorrect_;
}

void test::setOmitted()
{
    omitted_++;
}

int test::getOmitted()
{
    return omitted_;
}

int test::getIncorrectList(int value)
{
    return incorrectList_[value];
}

void test::setIncorrectList(int answer, int value)
{
    incorrectList_[value]=answer;
}



/*

Christian Smith
Correct: 4
Incorrect: 9
1 2 3 5 7 9 13 18 20 
total score: 1

Paxton Jones
Correct: 6
Incorrect: 10
0 1 2 4 5 8 10 12 13 20 
total score: 3

Abby Sciuto
Correct: 7
Incorrect: 8
0 1 2 3 7 8 9 15 
total score: 5

Audrey Smithson
Correct: 2
Incorrect: 11
0 2 3 4 6 7 8 9 13 14 15 
total score: 0

Katie Holmes
Correct: 5
Incorrect: 10
0 3 7 8 9 13 14 16 18 19 
total score: 2

Carrie Grant
Correct: 10
Incorrect: 8
0 2 5 6 11 15 16 17 
total score: 8

*/