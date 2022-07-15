#include <iostream>
#include <cmath>
#include <climits>

using std::cout;
using std::cin;
using namespace std;
using std::string;


int main()
{
  string guess_f_answer = "Gob3";
  string guess_food;
  string guess_answer = "champ";
  string guess_name;
  cout << "guess my food:"<< endl;
  cin >> guess_food;
  cout << "guess my name: ";
  cin >> guess_name;

  if (guess_food == guess_f_answer && guess_answer == guess_name)
    {
      cout << "derm i love u bro" << endl;
    }
  else
    {
    cout << "derm"<<endl;
    }
  //for get my name

 /* if (guess_answer==guess_name)
  {
    cout << "i love you bro"<<endl;
  }
    else
  {
    cout << "what the fuck bro, you hurt my feelings"<<endl;
  }
  */
  return 0;
}