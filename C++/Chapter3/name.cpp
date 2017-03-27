#include <iostream>

#include <string>

using namespace std;
int main()
{

  string MY_Name;
  cout << "Enter your Name: ";
  cin >> MY_Name;

  getline(cin, MY_Name,'\n');
}
