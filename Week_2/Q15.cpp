#include <iostream> //Program to reverse a given number using recursion.
using namespace std; 
void recurRev(int n)
    {
        if(n<10)
        {
            cout<<n;
            return;
        }
        else
        {
            cout<<n%10;
            recurRev(n/10);
        }
    }
    int main()
    {
            int n;
            cout<<"Enter number: ";
            cin>>n;
            recurRev(n);
            return 0;
    }
