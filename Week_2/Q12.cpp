#include<iostream> //Program to print factorial of a given number using recursion.
using namespace std;
//int factorial(int n);
int recurFac(int n) 
{
  if(n>1)
    return n*recurFac(n-1);
  else
    return 1;
}
int main() 
{
  int factorial(int n);
  int n;
  cout<<"Enter number: ";
  cin>>n;
  cout<<"Factorial: "<<recurFac(n);
  return 0;
}