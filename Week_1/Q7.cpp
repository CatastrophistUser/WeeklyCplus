#include <iostream> //Pattern
using namespace std;
int main()
{
    int i,j;
         for(i=1;i<=5;i++)
         {
             for(j=1;j<=i;j++)
             cout<<"*";
             cout<<"\n";
         }
         for(i=1;i<=5;i++)
         {
             for(j=4;j>=i;j--)
             cout<<"*";
             cout<<"\n";
         }

}
