#include <iostream> //Input month and get output how many days are present.
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string month[]={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    string m;
    cout<<"Input month: ";
    cin>>m;
    for(int i=0;i<=12;i++)
    {
        if(m==month[i])
        cout<<"No. of days: "<<days[i];
    }
}