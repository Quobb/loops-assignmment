#include <iostream>
#include <cmath>
#include <climits>

using std::cout;
using std::cin;
using namespace std;
using std::string;

int main()
{
    cout << "how old are you"<<endl;
    int age;
    cin >> age;
    if(age>20)
    {
        cout << "you are too old"<<endl;
    }
    else if(age>=20)
    {
        cout << " you are average"<<endl;
    }
    else 
    {
        cout << "you are too young"<<endl;
    }


    
}