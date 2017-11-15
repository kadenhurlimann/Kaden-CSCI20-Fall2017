//Created By: April Browne
 //Created On: 8/22/2016
 
 #include <iostream>               // *
 using namespace std ;
 
 struct monster{                   // *
  string head ;
  string eyes ;
  string ears ;
  string mouth ;
  string nose ;
  string name ;
  
 } ;
 
 int main()
 {
   monster monsterA ;                     // monsterA was never initiated how does that work is this the only time it needs to be entered. is a subcatagory of monster
   monsterA.head = "Zombus" ;
   monsterA.eyes = "Vegitas" ;
   monsterA.ears = "Wackus" ;
   monsterA.nose = "Vegitas" ;
   monsterA.mouth = "Wackus" ;
   monsterA.name = "Cool Guy" ;
   
    monster monsterB ;                     // monsterA was never initiated how does that work is this the only time it needs to be entered. is a subcatagory of monster
   monsterB.head = "Happy" ;
   monsterB.eyes = "Wackey" ;
   monsterB.ears = "Wackus" ;
   monsterB.nose = "Vegitas" ;
   monsterB.mouth = "Wackus" ;
   monsterB.name = "Cool Dude" ;
   
   
   cout<<"Head:"<<monsterA.head<<endl ;   
   cout<<"Eyes:"<<monsterA.eyes<<endl ;
   cout<<"Ears:"<<monsterA.ears<<endl ;
   cout<<"Nose:"<<monsterA.nose<<endl ;
   cout<<"Mouth:"<<monsterA.mouth<<endl ;
   cout<<"Mouth:"<<monsterA.name<<endl ;
   
   cout<<""<<endl ;
   cout<<"monsterB"<<endl ;
   cout<<"Head:"<<monsterB.head<<endl ;   
   cout<<"Eyes:"<<monsterB.eyes<<endl ;
   cout<<"Ears:"<<monsterB.ears<<endl ;
   cout<<"Nose:"<<monsterB.nose<<endl ;
   cout<<"Mouth:"<<monsterB.mouth<<endl ;
   cout<<"Mouth:"<<monsterB.name<<endl ;
 }