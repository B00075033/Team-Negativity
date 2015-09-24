#include <iostream>
#include <math.h>

using namespace std;

// Base class
class shape
{
public:
    //pure virtual function providing interface framework.
    virtual double getArea() = 0;
    void setWidth(double w)
    {
        width = w;
    }
    void setHeight(double h)
    {
        height = h;
    }
    void setRadius(double r)
    {
        radius = r;
    }
protected:
    double width;
    double height;
    double radius;
};

class Triangle: public shape
{
public:
    double getArea()
    {
        return (width * height)/2;
    }
};

class Rectangle: public shape
{
public:
    double getArea()
    {
        return (width * height);
    }
};
class Circle: public shape
{
public:
    double getArea()
    {
        return (3.14 * pow(radius,2));
    }
};
int main(void)
{
    Triangle Tri;
    Rectangle Rect;
    Circle Cir;
    Tri.setWidth(5);
    Tri.setHeight(7);
    Rect.setWidth(5);
    Rect.setHeight(5);
    Cir.setRadius(3);
    //Print area of the object.
    cout << "Total Triangle area : " << Tri.getArea()<< endl;
    cout << "Total Rectangle area: " << Rect.getArea() << endl;
    cout << "Total Circle area: " << Cir.getArea() << endl;
    cout << "Total area: " << Cir.getArea() + Rect.getArea() + Tri.getArea() << endl;
    return 0;
}
