#include <iostream>
using namespace std;
int main()
{
    int n;
    for(n=0;n<=10;n++)
    {
        if(n==6){
            continue;
        }
        cout<<n<<"\n";
    }
    return 0;
}