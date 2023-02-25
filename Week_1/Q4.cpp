/*
#include <iostream> //Smallest of 3 numbers (using one function)
using namespace std;
void smallest(int n1,int n2,int n3)
{
if(n1<n2 && n1<n3)
cout<<"The minimum value is: "<<n1;
else if(n2<n1 && n2<n3)
cout<<"The minimum value is: "<<n2;
else
cout<<"The minimum value is: "<<n3;
}
int main()
{
	int a,b,c;
	cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
	smallest(a,b,c);
	return 0;
}
*/


#include <iostream>
using namespace std; //Smallest of 3 numbers (using two functions)
int n1,n2,n3;
void accept()
{
	cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter third number: ";
    cin>>n3;
}
void smallest()
{
if(n1<n2 && n1<n3)
cout<<"The minimum value is: "<<n1;
else if(n2<n1 && n2<n3)
cout<<"The minimum value is: "<<n2;
else
cout<<"The minimum value is: "<<n3;
}
int main()
{
	accept();
	smallest();
}