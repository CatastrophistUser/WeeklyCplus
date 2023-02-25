#include <iostream>
using namespace std;
class Average
{
    public:
    int a,b,c;
    double avg;
    double calc()
    {
       avg=(a+b+c)/3;
       return avg;
    };
};
int main()
{
    double ans=avg.calc();
}