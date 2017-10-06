 

/*
     kaden hurlimann
     psuedo code 
     assignment 2

    
    
    Problem statement
Write a program that takes in a runner’s race time in minutes and seconds 
for a runner and computes and displays the speed in feet per seconds and meters per seconds.
It should compare that to the first place times and tell the user the difference from the winner.
Determine a runners splits for each ¼ mile.


    Puesdo
input runners time and input the first place time as two different variables first minutes then seconds.
distance of race in miles with a double. 
multiply the distance by four, for 1/4 mile split.
divide original time by this value.
multiply distance by 5280 to calculate feet.
multiply minutes by 60 and add to seconds
divide feet by total time in seconds save as speed in feet.
mulitply speed in feet by 0.3048 and save to speed in meters
subtract winner time from user time.
subtract user speed from winner speed.
display the speed of user and winner in feet per second and meters per second.
display the difference between the user and the winner in both speed and finish time.
*/


#include <iostream>
using namespace std;


class Runner                                                                    // class decleration
{
    private:                           
        double time_;
        double distance_;                                                       // needed class variables
        double distanceM_;
        double speed_;
        double speedM_;
        double split_;
    public:
        double SetRaceTime(int timeM, int timeS) 
        {
            time_ = (timeM*60)+timeS;                                           // convert the two time values minutes and seconds to just seconds
        }
        double SetRaceDistance(double distance)
        {
           distance_= distance;
           distance_= distance_*5280;                                           // convert distance of race from miles to feet
           distanceM_=distance_*0.3048;
        }
        double GetRaceTimeS()
        {
            return time_;                                                       // time in seconds total
        }
        double GetRaceDistance()
        {
            return distance_;                                                   // distance feet total
        }
        double FindRaceSpeed()
        {
            speed_=distance_/time_;                                             // speed in feet per second
            speedM_=speed_*0.3048;
        }
        double GetRaceSpeed()
        {
            return speed_;                                                      // speed in feet per second
        }
        double FindRaceSplit()
        {
            split_=time_/((distance_/5280)*4);                                  // find splits of a quarter mile in seconds
        }
        double GetRaceSplit()
        {
            return split_;                                                      // splits in seconds and 1/4 mile
        }
        double GetRaceDistanceM()                                               // race distance in meters
        {
            return distanceM_;
        }
        double GetRaceSpeedM()                                                  // race speed in meters
        {
            return speedM_;
        }
};




    double UserTimeMinutes =5;
    double UserTimeSeconds =32;
    double WinnerTimeMinutes =5;                                                // universal variables 
    double WinnerTimeSeconds =18;                                               // user 5:32 mile and winner 5:18 mile as default
    double DistanceMiles =1;
    double DifferenceTime =14; 
    double DifferenceSpeed =0;
    double DifferenceSplit =0;



int main()                                 
{
    
    Runner User;
    Runner Winner;
    
    cout <<endl<<endl<<endl<<endl;
    cout << "Please enter the race distance in miles" << endl;                  // prompting the user
    cin >> DistanceMiles;
    cout << endl << "Please enter the first place time in this fashion" << endl << "minutes seconds Example: 5 45" << endl;
    cin >> WinnerTimeMinutes >> WinnerTimeSeconds;
    cout << endl << "Please enter your time in this fashion" << endl << "minutes seconds Example: 6 45" << endl;
    cin >> UserTimeMinutes >> UserTimeSeconds;
    
    
    User.SetRaceDistance(DistanceMiles);
    User.SetRaceTime(UserTimeMinutes,UserTimeSeconds);
    User.FindRaceSpeed();
    User.FindRaceSplit();                                                       // setting user and winner values into class
    
    
    Winner.SetRaceDistance(DistanceMiles);
    Winner.SetRaceTime(WinnerTimeMinutes,WinnerTimeSeconds);
    Winner.FindRaceSpeed();
    Winner.FindRaceSplit();
    
    DifferenceTime=User.GetRaceTimeS()-Winner.GetRaceTimeS();
    DifferenceSpeed=Winner.GetRaceSpeed()-User.GetRaceSpeed();                      // finding race differences
    DifferenceSplit=User.GetRaceSplit()-Winner.GetRaceSplit();
    
    
    cout <<endl<<endl<<endl<<endl<<endl<< "The race was " << User.GetRaceDistance() << " feet, or " << User.GetRaceDistanceM() << " meters." << endl;
    
    
    cout << endl << endl << "   You" << endl;
    cout << "You ran it in " << User.GetRaceTimeS() << " seconds" << endl;
    cout << "You ran " << User.GetRaceSpeed() << " feet per second, or " << User.GetRaceSpeedM() << " meters per second." << endl;
    cout << "You had about " << User.GetRaceSplit() << " second 1/4 mile splits." << endl;
    
    
    cout << endl << endl << "   Winner" << endl;
    cout << "The winner ran it in " << Winner.GetRaceTimeS() << " seconds." << endl;
    cout << "The winner ran " << Winner.GetRaceSpeed() << " feet per second, or " << Winner.GetRaceSpeedM() << " meters per second." << endl;
    cout << "The Winner had about " << Winner.GetRaceSplit() << " second 1/4 mile splits." << endl;
    
    
    cout << endl << endl << "   Difference" << endl;
    cout << "You finished " << DifferenceTime << " seconds behind the winner." << endl;
    cout << "The winner ran " << DifferenceSpeed << " feet per second faster than you." << endl;
    cout << "The winner had splits " << DifferenceSplit << " seconds faster than yours." << endl;
    
}

    
    
    
    
    