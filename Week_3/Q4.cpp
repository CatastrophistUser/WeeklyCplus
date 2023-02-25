#include <iostream>  //Week3 Q4
#define PI 3.14159
using namespace std;
class Size
{
    public:
    double radius;
    void input()
    {
        cout<<"Enter radius: ";
        cin>>radius;
    }
    void area()
    {
        double area=PI*(radius*radius);
        cout<<"Area of circle: "<<area<<"\n";

    }
    void circum()
    {
        double c=2*PI*radius;
        cout<<"Circumference of circle: "<<c;
    }
};
    int main()
    {
        Size obj;
        obj.input();
        obj.area();
        obj.circum();
        return 0;
    }