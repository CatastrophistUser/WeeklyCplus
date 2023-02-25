#include <iostream>  //Program to print the cubes upto n using constructor.
using namespace std;
class Cube
{
    public:
    int n;
    Cube()
    {
        cout<<"Enter a number: ";
        cin>>n;
        for(int i=1;i<n+1;i++)
        {
            cout<<"Cube of "<<i<<"= "<<i*i*i<<endl;
        }
    }
};
int main()
{
    Cube obj;
    return 0;
}