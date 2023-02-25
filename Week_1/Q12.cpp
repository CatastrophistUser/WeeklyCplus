#include <iostream>
using namespace std;
int main()
{int i,x,y,d,c=0;
    for(i=100;i<=400;i++)
    {
        c=0;
        x=i;
        while(x>0)
        {
            d=x%10;
            if(d%2==0 && d!=0)
            {
                c++;
            }
            x=x/10;
        }
        y=i;
        if(c==3)
        {
            while(y>0)
            {
                d=y%10;
                cout<<d<<",";
                y=y/10;
             //   if(y=0)
                
            }
            cout<<"  ";
        }
    }

    return 0;
}