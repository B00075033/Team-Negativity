#include <iostream>

using namespace std;

// Base class
    class shape
    {
    public:
        //pure virtual function providing interface framework.
        virtual int getArea() = 0;
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
    };

    class Triangle: public shape
    {
    public:
        int getArea()
        {
            return (width * height)/2;
        }
    };
class Rectangle: public Shape{public:   double getArea()   {      return (width * height);   }};
int main(void)
{
    Triangle Tri;
    Rectangle Rect;
    Tri.setWidth(5);
    Tri.setHeight(7);
   Rect.setWidth(5);   Rect.setHeight(5);
    //Print area of the object.
    cout << "Total Triangle area : " << Tri.getArea()<< endl;
   cout << "Total Rectangle area: " << Rect.getArea() << endl;    
return 0;
}
