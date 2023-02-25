#include <iostream>  //Function overloading to calculate are of rectangle and circle.
using namespace std;
class Dimension
{
    public:
    void Area(int l, int b)
    {
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
    void Area(int r)
    {
        cout<<"Area of circle: "<<3.14*r*r;
    }
};
int main()
{
    Dimension obj;
    obj.Area(5,6);
    obj.Area(5);
    return 0;
}