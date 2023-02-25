#include <iostream>  //Function overloading to swap two variables.
using namespace std;
class SwapVar
{
    public: 
    void swap(int a, int b)             //First Parameterized function
    {
        cout<<"-------First Function-------"<<endl;
        cout<<"Original value of a="<<a<<" and b="<<b<<endl;
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"New Value of a="<<a<<" and b="<<b<<endl;
    }
    void swap(double a, double b)       //Second Parameterized function
    {
        cout<<"-------Second Function-------"<<endl;
        cout<<"Original value of a="<<a<<" and b="<<b<<endl;
        double temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"New Value of a="<<a<<" and b="<<b<<endl;
    }
};
int main()
{
    // int p1,p2,sp1,sp2;                //For User Input
    // cout<<"Enter two integers: ";
    // cin>>p1>>p2;
    // cout<<"Enter two doubles: ";
    // cin>>sp1>>sp2;
    SwapVar obj;                         //Object Creation
    obj.swap(3,4);
    obj.swap(8.0,9.0); 
    return 0;                           //Default return statement
}