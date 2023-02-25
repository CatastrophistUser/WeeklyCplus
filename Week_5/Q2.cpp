#include <iostream>    //Program to add money to piggie bank.
#define AMOUNT 50      //Preprocessor definition
using namespace std;
class AddAmount
{
    public:
    //int amount;
    // AddAmount()     //Non-parameterized constructor (will not add any value to the piggy bank)
    // {
    //     amount=50;     
    // }
    AddAmount(int n)   //Parameterized constructor (will add the value of n to the piggy bank)
{
        cout<<"Enter amount: ";
        cin>>n;
        int total = AMOUNT+n;
        cout<<"Final Amount:"<<total;
    }
};
int main()           //Main function
{
    //AddAmount obj;
    AddAmount(AMOUNT);
    return 0;
};