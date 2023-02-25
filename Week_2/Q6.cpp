#include <iostream> //Program to print prime numbers between 100 and 500.
using namespace std;
int main()
{
    int n,i;
    for(n=100;n<=500;n++)
    {
        int fac=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            fac++;
        }
        if(fac==2)
        cout<<n<<"\t";
    }
}