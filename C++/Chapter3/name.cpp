#include <iostream>

#include <string>

using namespace std;
int main()
{

  string F_name;
  string L_name;
  cout << "Enter your Name: ";
  //cin >> MY_Name;

  getline(cin,F_name,' ');
  getline(cin,L_name, '\n');

  cout << L_name;

  cin.ignore();
}
