#include <iostream>
using namespace std;
int main()
{
    int n1,n2,sum;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    sum=n1+n2;
    if(sum>105 && sum<200)
    cout<<"The sum is: 200";
    else
    cout<<"The sum is: "<<sum;
}