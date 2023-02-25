#include <iostream> //Program to reverse a string (without using functions)
using namespace std;
int main()
{
string str,rev;
cout<<"Enter String: ";
cin>>str;
for (int i=str.length();i>=0;i--) //Running a for loop from the length() to 1.
{
rev=rev+str[i]; //Extracting individual letters and storing it in rev.
}
cout<<"The reversed string is: "<<rev;
}
