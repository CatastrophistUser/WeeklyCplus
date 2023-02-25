#include <iostream>   //Program to reverse a number using constructor.
using namespace std;
class NumRev
{
    public:
    int n;
    NumRev()
    {
        cout<<"Enter a number: ";
        cin>>n;
        int rev=0;
        while(n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        cout<<rev;
    }
};
int main()
{
    NumRev obj;
    return 0;
}