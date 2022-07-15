#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
using std::cin;
using std::cout;
using std::string;

int main()
{
int age;
cout<<"enter your age";
cin>>age;
switch (age)
    {
    case 13/* constant-expression */:
    /* code */cout<<"your are 13 wow";
            break;
    case 14:
            cout<<"you are 14";
            break;
    default:
            cout<<"catch all";
            break;
    }
}