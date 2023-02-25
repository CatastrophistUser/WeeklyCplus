#include <iostream> //Program to check if given number is positive or negative or zero using nested if.
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n!=0)
    {
        if(n<0)
        cout<<"Negative Number";
        else if(n>0)
        cout<<"Positive Number";
    }
    else
    cout<<"Zero";
}
