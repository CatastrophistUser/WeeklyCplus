#include <iostream> //Week3 Q2
using namespace std;
class Illustrate
{
    public: 
    void fn1(int a, int b)
    {
        cout<<"Original value of a: "<<a<<" and b: "<<b<<"\n";
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"New value of a: "<<a<<" and b: "<<b;
    };
};
int main()
{
    Illustrate obj;
    obj.fn1(4,5);
}