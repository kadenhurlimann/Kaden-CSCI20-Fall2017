    // Kaden Hurlimann
    // 9/7
    //mad lib lab 15
    
#include <iostream> 
#include <string>                      // allows string                                               
using namespace std ;
    
int main()
    {
    
    string NOUN1 = "language" ;
    string NOUN2 = "time" ;
    string NOUN3 = "culture" ;
    string NOUN4 = "listen" ;
    string VERB = "talking" ;
    string VerbIng1 = "Spanish" ;     // initializing variables
    string LANGUAGE = "Spain" ;
    string PLACE = "used" ;
    string PastParticiple = "excited" ;
    string EMOTION = "people" ;
    string ForeignPhrase ="Adios" ;
    
    cout << "Please type words that match the description or word type when prompted." << endl ;
    cout << "Do not use any puntaution or spaces, only letters." << endl ;                           // explainging the prompt to user
    cout << "Noun" << endl ;
    cin >> NOUN1 ;
    cout << "Noun" << endl ;
    cin >> NOUN2 ;
    cout << "Noun" << endl ;
    cin >> NOUN3 ;                                           // prompting user for variables
    cout << "Noun" << endl ;
    cin >> NOUN4 ;
    cout << "Verb" << endl ;
    cin >> VERB ;
    cout << "Verb ending in ing" << endl ;
    cin >> VerbIng1 ;
    cout << "A language" << endl ;
    cin >> LANGUAGE ;
    cout << "A place" << endl ;
    cin >> PLACE ;
    cout << "Past participle" << endl ;
    cin >> PastParticiple ;
    cout << "An emotion" << endl ;
    cin >> EMOTION ;
    cout << "your favorite foreign word" << endl ;
    cin >> ForeignPhrase ;
    
    
    // I did not create this madlib.
    //
    // Although some would say learning a foreign [NOUN] is hard, what it really takes is a little bit of [NOUN]. 
    // Study the [NOUN], [VERB] to the music and practice [VERB-ING] with others. 
    // If you're studying [LANGUAGE], for example, you can watch movies set in [PLACE]. 
    // If you can, take the time to visit a country where the language is [PAST PARTICIPLE]. 
    // The people there will be [EMOTION] to meet someone who has taken an interest in their [NOUN].
    // [FOREIGN PHRASE]!
    
    cout << "" << endl ;
    cout << "" << endl ;
    cout << "" << endl ;
    cout << "Your custom madlib (base off a madlib I found on reddit) is..." << endl ;
    cout << "" << endl ;
    cout << "" << endl ;
    cout << "" << endl ;
    cout << "   Although some would say learning a foreign " << NOUN1 << " is hard, what it really takes is a little bit of " << NOUN2 << "." << endl ;
    cout << "Study the " << NOUN3 << ", " << VERB << " to the music and practice " << VerbIng1 << " with others." << endl ;
    cout << "If you're studying " << LANGUAGE << ", for example, you can watch movies set in " << PLACE << "." << endl ;
    cout << "If you can, take the time to visit a country where the language is " << PastParticiple << "." << endl ;                                  // writing the content
    cout << "The people there will be " << EMOTION << " to meet someone who has taken an interest in their " << NOUN4 << "." << endl ;                 // and plugging in variables
    cout << "" << endl ;
    cout << ForeignPhrase << "!" << endl ;
    
    
    }
    
    
    
    
