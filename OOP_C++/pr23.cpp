#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int rand();
    int i, x;
    enum months
    {
        Jan,
        Feb,
        Mar,
        April,
        May,
        June,
        July,
        August,
        Sept,
        Oct,
        Nov,
        Dec
    };
    x = (rand() % 10) + 3 ;
    
     
    return 0;
}
