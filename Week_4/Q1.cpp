#include <iostream>  //Program to convert decimal numbers to their binary equivalent
using namespace std;
class decToBin
{
    public:
    double dec,bin;
    decToBin()
    {
        cout<<"Enter a decimal number: ";
        cin>>dec;
        int d,D,i;
        D=(int)dec;
        double m=1,D1=dec-D,a;
        while(D>0)
        {
            d=D%2;
            bin=bin+d*m;
            D/=2;
            m*=10;
        }
        m=10;
        for(i=1;i<=3;i++)
        {
            d=(int)(D1*2);
            bin=bin+d/m;
            D1=D1*2-d;
            m*=10;
        }
        cout<<bin;
    }
};
int main()
{
    decToBin obj;
    return 0;
};