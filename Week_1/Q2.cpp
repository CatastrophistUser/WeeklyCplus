#include <iostream> //Program to check if a number is divisible by 8 and is a multiiple of 5.
using namespace std;
int main()
{
   // int n;
   // cout<<"Enter number: "; 
   // cin>>n; //Taking user input to check the number.
   cout<<"The following numbers are divisible by both 5 and 8:\n";
    for(int i=1000;i<=2000;i++)
    {
    if(i%8==0 && i%5==0) //Checking if the number is divisible by 8 and is a multiiple of 5
    // cout<<"The above number is divisible by 8 and is a multiple of 5";
    cout<<i<<" ";
   /* 
    else
    cout<<"The above number is neither divisible by 8 nor is a multiiple of 5";
    */
    }
}
