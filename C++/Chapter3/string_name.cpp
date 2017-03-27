
/* Program creates a string variable , prompts the user to enter his name and then prints back out the name */

#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string user_name;

  cout << "Please enter your name: ";
  cin >> user_name;
  cout << "Hi " << user_name << "\n";
}
