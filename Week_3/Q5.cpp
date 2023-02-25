#include <iostream> //Week3 Q5
#include <algorithm>
using namespace std;
class Stringgggggggggggggggggggggggggggggggggggggggg
{
    string str;
    public:
    void get_Str()
    {
        string str;
        cout<<"Input String: ";
        cin>>str;
    };
    void print_Str()
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<"The string in upper case: "<<str;
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<"The string in lower case: "<<str;
    };
};
int main()
{
    Stringgggggggggggggggggggggggggggggggggggggggg obj;
    obj.get_Str();
    obj.print_Str();
}

/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i=0;
  char str[]="Test String.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar (tolower(c));
    i++;
  }
  return 0;
}
*/