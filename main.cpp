//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstname;
  string lastname; 
  string nickname;
  int index;
  string firstletter;
  string lastletter;

  //get user input
  cout<<"What is your first name?";
  cin>>firstname;
  cout<<"What is your last name?";
  cin>>lastname;

  //tell fortune
  cout<<"Welcome, " << firstname[0] << "." << lastname[0] << "., here is your fortune..." << endl;
  cout<<"your lucky number is " <<firstname.length()<< "." << endl;
  firstletter = firstname[0];
  index = lastname.length()-1;
  lastletter = lastname[index];        
  if (firstletter=="a" || firstletter=="e" || firstletter=="i" || firstletter=="o" || firstletter=="u" || firstletter=="A" || firstletter=="E" || firstletter=="I" || firstletter=="O" || firstletter=="U" ) 
    {
      cout<<"you are destiined to be famous!" << endl;
    }
  else
    {      
      cout<<"you should keep a low profile." << endl;
    } 

  if (lastletter=="a" || lastletter=="e" || lastletter=="i" || lastletter=="o" || lastletter=="u" || lastletter=="A" || lastletter=="E" || lastletter=="I" || lastletter=="O" || lastletter=="U" ) 
    {      
      cout<<"you have already met your true love." << endl;
    }
            
  cout<<"have a good day!" << endl;
 
  return 0;
}
