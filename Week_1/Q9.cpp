#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"Enter rows & column: ";
    cin>>m>>n;
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=i*j;
        }
    }
    cout<<"[";
    for(i=0;i<m;i++)
    {
        cout<<"[";
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"]";
    }
    cout<<"]";
    return 0;
}