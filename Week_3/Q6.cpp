#include <iostream>  //Week3 Q6
#define l 3
#define b 4
#define h 5
// #define PI 3.14159
using namespace std;
class Size_Again
{
    public:
    double radius;
    void area()
    {
        double area=(b*h)/2;
        cout<<"Area of traingle: "<<area<<"\n";

    };
    void perimeter()
    {
        double per=l+b+h;
        cout<<"Perimeter of triangle: "<<per;
    }
};
    int main()
    {
        Size_Again obj;
        obj.area();
        obj.perimeter();
        return 0;
    }