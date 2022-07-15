#include <iostream>
#include <cmath>
#include <climits>

using std::cout;
using std::cin;
using namespace std;
using std::string;

int main()
{
   int age;
   cin>>age;
   if(age>13)
   {
    cout<<"your not old enouggh";
   }
   else if(age<15)
   {
    cout <<"your old enoggh";
   }
   
   else
   {
    cout << "false";
   }
}