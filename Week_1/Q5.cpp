#include <iostream> //Reverse a string using functions.
using namespace std;
void revStr(string str)
{
    int len=str.length();
    int n=len-1;
    int i=0;
    string st=str;
    while(i<=n)
    {
        //Using the swap function to swap values.
        swap(str[i],str[n]);
        n=n-1;
        i=i+1;
    }
}
int main()
{
    string st;
    cout<<"Enter string to be reversed: ";
    cin>>st;
    //string str="LAJNARP";
    revStr(st);
    cout<<st;
    return 0;
}