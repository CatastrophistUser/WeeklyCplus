#include <iostream> //Basic Calculator Program.
using namespace std;
int main()
{
    int opt,n1,n2,out;
    cout<<"1-Addition, 2-Subtraction, 3-Multiply, 4-Divide, 5-Modulus\n";
    cout<<"Enter your choice: "; //Taking user input for operation.
    cin>>opt;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    switch(opt) //Switch case to execute code as required  by the user.
    {
        case 1: 
        out=n1+n2;
        cout<<"The answer is: "<<out;
        break;
        case 2: 
        out=n1-n2;
        cout<<"The answer is: "<<out;
        break;
        case 3:
        out=n1*n2;
        cout<<"The answer is: "<<out;
        break;
        case 4: 
        out=n1/n2;
        cout<<"The answer is: "<<out;
        break;
        case 5: 
        out=n1%n2;
        cout<<"The answer is: "<<out;
        break;
    }
}