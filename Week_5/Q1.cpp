#include <iostream>  //Program to Input students' names.
using namespace std;
class Stu_Name
{
    public:
    string name[10];
    Stu_Name()
    {
        int n;
        cout<<"Enter the number of students: ";
        cin>>n;
        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                cin>>name[i];
            }
        }
        else
        cout<<"Unknown";
    }
};
int main()
{
    Stu_Name obj;
    return 0;
};