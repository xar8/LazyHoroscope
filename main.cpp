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

  //get user input
  cout<<"What is your first name?";
  cin>>firstname;
  cout<<"What is your last name?";
  cin>>lastname;

  //tell fortune
  cout<<"Welcome, " << firstname[0] << "." << lastname[0] << "., here is your fortune..." << endl;
  cout<<"Your lucky number is " <<firstname.length()<< "." << endl;

  return 0;
}
