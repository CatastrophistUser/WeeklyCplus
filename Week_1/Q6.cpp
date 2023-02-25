#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int num,number;
    cout<<"Enter the number";
    cin>>number;
    for(int x=0;x<9;x++){
        num=1+(rand()%10);    
    }
    // cout<<num<<"\n";
    for(int i=0;i<9;i++)
    {
        if(num==number)
        {
            cout<<"Well guessed";
            break;
        }
        else
        {
            cout<<"Enter once again";
            cin>>number;
        }
    }
    return 0;
}


/* 
#include <iostream> //Program to Guess a number.
#include <stdlib.h>
using namespace std;
int main()
{
    int n,cgn;
     //Input number by user.
    cgn=(rand()%(10))+1; //Generate a random number and store it's value in cgn.
    cout<<cgn<<"\n";
    cout<<"Enter your guess: ";
    for (int i=0;i<10;i++) 
    {
			cin>>n;
    {
        if(n==cgn && i<10)
            cout<<"Well guessed!";
        else if ((n!=cgn))
            cout<<"Try Again";
            for(int j=0;j<=9;j++){
                cin>>n;
            }
            if(n==cgn)
            cout<<"Well guessed!";
            else
            cout<<"firse likh";
            for(int j=0;j<=9;j++){
                cin>>n;
            }
            if(n==cgn)
            cout<<"Well guessed!";
        

    }
    return 0;
}
}
*/
