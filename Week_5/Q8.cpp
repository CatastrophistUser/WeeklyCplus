#include <iostream>  //Function overloading to print volume of cube, sphere and cylinder.
using namespace std;
class Vol
{
    public:                       //Public Access Specifier
    //Parameterized function to calculate volume of Cube
    void volume(int side)
    {
        cout<<"Volume of Cube is: "<<side*side*side<<endl;
    }
    //Parameterized function to calculate volume of Sphere
    void volume(double radius)
    {
        cout<<"Volume of Sphere= "<<(4/3)*3.14*radius*radius*radius<<endl;
    }
    //Parameterized function to calculate volume of Cylinder
    void volume(int radius, int height)
    {
        cout<<"Volume of Cylinder= "<<3.14*radius*radius*height<<endl;
    }
};
int main()                        //Main function
{
    Vol obj;                      //Object Creation
    obj.volume(3);                //Calling function to calculate volume of Cube
    obj.volume(4.0);              //Calling function to calculate volume of Sphere
    obj.volume(5,6);              //Calling function to calculate volume of Cylinder
    return 0;                     //Default return statement
}
