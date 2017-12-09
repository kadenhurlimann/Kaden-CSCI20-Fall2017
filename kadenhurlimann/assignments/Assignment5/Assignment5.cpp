/*
Kaden Hurlimann
Assignment 5

text based game where the player
picks from a list of options when performing an action
stores a health value that will be taken from whenever you do anything dumb
eventually you die and can replay the game
*/

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;


class player                                                                    // this class takes care of anything that will modify the players states including battles
{
    private:
    string name_="dave";
    int health_=100;
    string weapon_="fist";
    int weaponDamage_= 3;
    int kill_=0;                                                                //number of kills the player has
    int speed_=1;                                                              // speed effects the players chance of running from a fight
    int weaponsDamage_[10];                                                     // array to hold all the players weapons in memory for stats
    string weaponsName_[10];                                                    // array to hold all the players weapons damage in memory
    int weaponNumber_=0;
    
    public:
    int fight(int damage, int health);                                          // the fight function. In the class to make it easier to run again and again
    int stats ();                                                                 // prints stats to stat sheet
    void setWeapon(string weapon, int damage);                                  // adds a new weapon to the inventory
    string getWeaponName();
    void setName(string name);                                                  // sets the players name    
    string getName();
    void addName(string name);                                                  // append name to user name(not functional) "billy the fast and ugly and tall and slow"
    void addSpeed(int speed);
    int getSpeed();
    int getHealth();
    void addHealth(int health);
    void setHealth(int health);
    void setDamage(int damage);
    void addDamage(int damage);
    int getDamage();
    int addKill(int kill);
    int getKill();
    
};
int main()
{
    srand(time(0));
    ofstream score;
    ifstream cheat;
    player user;
    string name;
    string weapon;
    string input;
    string cheatCode;
    score.open("stats.txt");
     if (!score.is_open()) {cout << "Could not open the file" << endl;return 1;}
    cheat.open("cheats.txt");
    if (cheat.is_open()) {cout << "Cheat file detected" << endl;}
    cheat >> cheatCode;
    if(cheatCode=="health"){
        user.setHealth(800);
        cout << "Health cheat detected +800 health" << endl;
    }
     
     /*
                                 :
    cout << endl << endl;
    cout << "" << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;                                                  // sample scene                      
    cout << "3. " << endl;
    cin >> input;
    if (input=="1"){goto ;}
    else if(input=="2"){goto ;}
    else if (input=="3"){goto ;}
    else { cout << endl << "        This is not an answer please try again." << endl; goto Cell;}
     */
     
     
    
    
    
    Start:
    cout << endl << endl << endl;
    cout << "You wake up in a prison cell made of stone with metal bars." << endl;
    cout << "You see a wooden chair a bucket and a small bed." << endl;
    cout << "You have Neuropsychologia an extremely rare form of amnesia." << endl;
    cout << "When ever you fall asleep you forget everything but that you have Neuropsychologia." << endl;
    cout << endl << "What is your name?" << endl;
    cin >> name;
    user.setName(name);
    
    
    Cell:
    cout << endl << endl;
    cout << "What is your first course of action." << endl;
    cout << "1. smash chair" << endl;
    cout << "2. Sleep" << endl;
    cout << "3. yell for guard" << endl;
    cin >> input;
    if (input=="1"){goto Chair;}
    else if(input=="2"){goto Start;}
    else if (input=="3"){goto Guard;}
    else { cout << endl << "        This is not an answer please try again." << endl; goto Cell;}
    
    
    Chair:
    cout << endl << endl;
    cout << "The chair splinters and you take a large piece as a weapon." << endl;
    user.setWeapon("Splinter of wood", 7);
    cout << "1. Sleep" << endl;                                              
    cout << "2. Yell for guard" << endl;
    cin >> input;
    if(input=="1"){goto Start;}
    else if (input=="2"){goto Guard;}
    else { cout << endl << "        This is not an answer please try again." << endl; goto Chair;}
    
    
    Guard:
    cout << endl << endl;
    cout << "A gaurd comes and unlocks the cell." << endl;
    cout << "He immediately begins to beat you with a club" << endl;
            // enemy damage 4 health 10
    if (user.fight(4,10)==0){return 0;};                                        // a fight function that kills the program if function returns 0 wich is a death
    cout << "You hear screaming near by and decide to get away from here" << endl;
    cout << "1. run to exit" << endl;
    cout << "2. run to guard tower" << endl;                                              
    cout << "3. run to storage room" << endl;
    cin >> input;
    if (input=="1"){goto Prison;}
    else if(input=="2"){goto GuardTower;}
    else if (input=="3"){goto Storage;}
    else { cout << endl << "        This is not an answer please try again." << endl; goto Guard;}
    
    
    Prison:
    cout << endl << endl;
    cout << "Your outside the prison in a wooded area" << endl;
    cout << "There is a creek, a long path and a gaurd is running towards you." << endl;
    cout << "1. Jump in creek" << endl;
    cout << "2. run down path" << endl;
    cout << "3. fight the guard" << endl;
    cin >> input;
    if (input=="1"){goto Creek;}
    else if(input=="2"){goto PrisonRoad;}
    else if (input=="3"){if (user.fight(4,10)==0){return 0;} goto Prison;}
    else { cout << endl << "        This is not an answer please try again." << endl; goto Prison;}
    
    
    PrisonRoad:
    cout << endl << endl;
    cout << "running down the path you see a donkey." << endl;
    cout << "next to the donkey there is an axe." << endl;
    cout << "1. mount donkey" << endl;
    cout << "2. take axe" << endl;
    cin >> input;
    if (input=="1"){goto End;}
    else if(input=="2"){
        user.setWeapon("axe",21); 
        cout << "you see a donkey" << endl; 
        cout << "1. mount donkey" << endl;
    cin >> input;
    goto End;
    }
    else { cout << endl << "        This is not an answer please try again." << endl; goto Prison;}
    
    
    GuardTower:
    cout << endl << endl;
    cout << "you climb to the top of the tower" << endl;
    cout << "The gaurd tower is full of guards." << endl;
    cout << "You see a creek farely close to the tower, you think you can make it." << endl;
    cout << "1. jump off tower" << endl;
    cout << "2. Fight a guard" << endl;
    cin >> input;
    if (input=="1"){goto Creek;}
    else if(input=="2"){
        if (user.fight(4,10)==0){return 0;};
        goto GuardTower;
    }
    else { cout << endl << "        This is not an answer please try again." << endl; goto GuardTower;}
    
    
    Creek:
    cout << endl << endl;
    cout << "you jump into the creek and hit your head on a rock." << endl;
    cout << "a fish with a large hammer appears." << endl;
    cout << "he throws you a screw driver and asks to duel." << endl;
    user.setWeapon("screw driver", 18);
    if (user.fight(10,22)==0){return 0;};
    goto End;
    
    
    Storage:
    cout << endl << endl;
    cout << "You climb down into the storage room you see a cave and a sword." << endl;
    cout << "1. Take sword" << endl;
    cout << "2. Enter cave" << endl;
    cin >> input;
    if (input=="1"){ 
        user.setWeapon("Cave Sword",20);
        cout << "The sword is dull and rusty" << endl;
        cout << "You see a cave." << endl;
        cout << "1. enter" << endl;
        cin >> input;
        goto End;
    }
    else if(input=="2"){goto End;}
    
    else { cout << endl << "        This is not an answer please try again." << endl; goto Storage;}
    
    End:
    cout << endl << endl;
    cout << "You have reached the end of the demo." << endl;
    cout << "We have charged $75 to your account, and shipped the full version to your address" << endl;
    cout << "The game should arrive between 5-7 business days." << endl;
    cout << "until then you should try another route." << endl;
    user.stats();
    
     
     
     
     
}



    void player::setWeapon(string weapon, int damage)
    {
        weapon_=weapon;                                                         // changes weapon
        weaponDamage_=damage;
        
        weaponsName_[weaponNumber_]=weapon;                                     // adds the new weapon to the weapon array
        weaponsDamage_[weaponNumber_]=damage;
        weaponNumber_++;                                                        // keeps track of amount of weapons
    }
    
    string player::getWeaponName()
    {
        return weapon_;
    }
    
    void player::setName(string name)
    {
        name_=name;
    }
    
    string player::getName()
    {
        return name_;
    }
    
    void player::addName(string name)                                           // not in use
    {
        
    }
    
    void player::addSpeed(int speed)
    {
        speed_=speed_+speed;
    }
    
    int player::getSpeed()
    {
        return speed_;
    }
    
    int player::getHealth()
    {
        return health_;
    }
    
    void player::addHealth(int health)
    {
        health_=health_+health;
    }
    
    void player::setHealth(int health)
    {
        health_=health;
    }
    
    void player::setDamage(int damage)
    {
        weaponDamage_=damage;
    }
    
    void player::addDamage(int damage)
    {
        weaponDamage_=weaponDamage_+damage;
    }
    
    int player::getDamage()
    {
        return weaponDamage_;
    }
    
    int player::addKill(int kill)
    {
        kill_=kill_+kill;
    }
    
    int player::getKill()
    {
        return kill_;
    }
    
    int player::stats()
    {
        string input;
        ofstream score;
        score.open("stats.txt");
        if (!score.is_open()) {cout << "Could not open the file" << endl;}
        cout << "To end game type anything." << endl;
                    cout << "A stats file has been made." << endl;
                    score << endl << endl;                                      // print the names, kills, and weapons the player has collected
                    score << name_ << endl;
                    for (int i=0; weaponNumber_>i; i++){                        // iterates through array based on weapon number
                        score << "weapon " << i << ".  " << weaponsName_[i]<< "  damage: " << weaponsDamage_[i] << endl;
                    }
                    score << "Kills: " << kill_ << endl;
                    cin >> input; 
    }




    int player::fight(int damage, int health)                                   // enemy damage and health are input from function call
    {
        ofstream score;
        score.open("stats.txt");
        if (!score.is_open()) {cout << "Could not open the file" << endl;}
        srand(time(0));
        string input;
        while(health>0)                                                         // runs until enemy is dead
        {
            cout << "1. Attack" << endl;
            cout << "2. Run" << endl;                                           // player decision
            cin >> input;
            
            if(input=="1")                                                        // if the player decides to attack
            {
                health_=health_-damage;                                         // damage of enemy taken from players health
                
                if (health_ <=0)                                                // if the player has died inform them of the tragedity
                {
                    cout << "You have perished." << endl;
                    cout << "To end game type anything." << endl;
                    cout << "A stats file has been made." << endl;
                    score << endl << endl;                                      // print the names, kills, and weapons the player has collected
                    score << name_ << endl;
                    for (int i=0; weaponNumber_>i; i++){                        // iterates through array based on weapon number
                        score << "weapon " << i << ".  " << weaponsName_[i]<< "  damage: " << weaponsDamage_[i] << endl;
                    }
                    score << "Kills: " << kill_ << endl;
                    cin >> input;                                              // dummy variable 
                    return 0;                                                   // return the death value
                }
                health=health-weaponDamage_;                                    // player damage taken from enemy health
                cout << "Damage given: " << weaponDamage_ << " with " << health << " health remaining." << endl;
                cout << "Damage taken: " << damage << " with " << health_ << " health remaining" << endl << endl;
            }
            else if(input=="2")                                                   // if player decides to run
            {
                int random=(rand()%100/speed_);                                 // chance of escape is based on the payers speed
                if (random==0)                                                  // if player has 100 speed than they will escape every time
                {                                                               // if the play has 1 speed the will escape once every 100 times
                    cout << "you escape" << endl;
                    return 1;
                }
                else
                {
                    health_=health_-damage;
                    cout << "you could not escape." << endl;                    // if the player does not escape they are dealt damage without dealing
                    cout << "Damage taken: " << damage << " with " << health_ << " health remaining" << endl << endl;
                    if (health_ <=0)
                    {
                        cout << "You have perished." << endl;
                        cout << "To end game type anything." << endl;
                        cout << "A stats file has been made." << endl << endl;
                        score << endl << endl;
                        score << name_ << endl;
                        for (int i=0; weaponNumber_>i; i++){
                        score << "weapon: " << i << ".  " << weaponsName_[i]<< "  damage: " << weaponsDamage_[i] << endl;
                    }
                        score << "Kills: " << kill_ << endl;
                        cin >> health;
                        return 0;
                    }
                    
                }
            }
        }
        cout << "Your foe has perished" << endl << endl;
        kill_=kill_+1;                                                          // if the player has survived and killed enemy add a kill to the count
    }
    
    