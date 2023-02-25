#include <iostream> //Program to check if a year is leap year or not.
using namespace std;
int main()
{
    int n;
    cout<<"Enter Year: ";
    cin>>n;
    if (n%400==0 || n%4==0 && n%100!=0)
        {
            cout<<n<<" is a leap year.";
        }
        else
        {
            cout<<n<<" is not a leap year.";
        }
}