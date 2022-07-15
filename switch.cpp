#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
using std::cin;
using std::cout;
using std::string;

int main()
{
enum class Season{summer, spring ,fall ,winter};
Season now = Season::winter;
switch(now)
{
    case Season::summer:
        break;
    case Season::spring:
        break;
    case Season::fall:
        break;
    case Season::winter:
        cout<<"stay waarm!\n";
        break;    
}
return 0;

}