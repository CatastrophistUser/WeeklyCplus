#include <iostream>  //Program to find thesum of all integers between 100 & 200 which are divisible by 9
using namespace std;
class Sum
{
    public:
    int sum;
    Sum()
    {
        for(int i=100;i<200;i++)
        {
            if(i%9==0)
            sum=sum+i;
        }
        cout<<sum;
    }
};
int main()
{
    Sum obj;
    return 0;
}