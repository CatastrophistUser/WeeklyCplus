#include <iostream> //Program to take positive integer input from user and add but break loop if it detects a negative input.
using namespace std;
int n,l,sum=0,c;
int sumOf()
{
    cout<<"Enter number to be added: ";
    cin>>n;  
    return n;   
}
int main()
{
    cout<<"Enter limit: ";
    cin>>l;
    for(int i=0;i<l;i++)
    {
       c=sumOf();
       if(c<0)
       {
          break;
       }
       sum=sum+c;
    }
    cout<<"The sum is: "<<sum; 
}