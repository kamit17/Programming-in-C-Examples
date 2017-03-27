#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int first_argument;
  int second_argument;
  cout << "Enter first argument: ";
  cin >> first_argument;
  cout <<"Enter Second argument: ";
  cin >> second_argument;
  cout << first_argument << " * " << second_argument << " = " <<
  first_argument * second_argument <<endl;
        cout << first_argument << " + " << second_argument << " = " <<
first_argument + second_argument << endl;
      cout << first_argument << " / " << second_argument << " = " <<
first_argument / second_argument << endl;
      cout << first_argument << " - " << second_argument << " = " <<
first_argument - second_argument << endl;
  return 0;
}
