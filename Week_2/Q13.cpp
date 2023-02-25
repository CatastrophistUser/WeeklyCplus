#include <iostream> //Program to print Fibonacci series using recursion.
using namespace std;
int recurFibo(int n) 
{
   if((n==1)||(n==0)) 
   {
      return n;
   }else {
      return(recurFibo(n-1)+recurFibo(n-2));
   }
}
int main() {
   int l,i=0;
   cout<<"Enter limit: ";
   cin >>l;
   cout<<"\nFibonnaci Series: ";
   while(i<l) 
   {
      cout<<" "<<recurFibo(i);
      i++;
   }
   return 0;
}