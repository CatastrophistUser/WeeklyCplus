#include <iostream> //Program to print sum of 50 digits (excluding negative inputs)
using namespace std;
int main()
    {
        int sum=0,n;
        for(int i=0;i<50;i++)
        {
            cout<<"Enter number: ";
            cin>>n;
            if(n>0)
            {
                sum=sum+n;
            }
        }
        cout<<"The sum is: "<<sum;
    }