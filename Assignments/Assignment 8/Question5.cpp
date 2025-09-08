#include<iostream>
using namespace std;
class circle
{
    private:
        int radius;
    public:
        void setRadius(int r)
        {
            radius=r;
        }

        int getRadius()
        {
            return radius;
        }

        float area()
        {
            return 3.14*radius*radius;
        }

        float circumference()
        {
            return 2*3.14*radius;
        }

};

int main()
{
    circle c;
    c.setRadius(5);
    cout<<"The radius is:"<<c.getRadius()<<endl;
    cout<<"The area of the circle is:"<<c.area()<<endl;
    cout<<"The circumference of the circle is:"<<c.circumference()<<endl;
    return 0;
}