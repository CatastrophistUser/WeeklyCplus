#include <iostream>  //Program to illustrate a parameterized constructor.
using namespace std;
class ParCons
{
    public:
    int sum;
    ParCons(int n1, int n2)
    {
        sum=n1+n2;
        cout<<sum;
    }
};
int main()
{
    ParCons obj(10,20);
    return 0;
}