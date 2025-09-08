#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class person  //question 1
{
    private:
        char name[30];
        int age;
    protected:
        void setName(char n[])
        {
            strcpy(name,n);
        }
        void setAge(int a)
        {
            age=a;
        }
        char* getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};

class Employee : public person 
{
    private:
        float salary;
    public:
        void setEmployee(char n[], int a, float s)
        {
            setName(n); //derived class ke public members parent class ke protected members ko access nhi kar sakte but protected 
            setAge(a);  //ko kar sakte hain to protected members ka use karke wo values set kare
            salary=s;
        }

        void showEmployee()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<salary<<endl;
        }
        
};

class circle  //Question 2
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
        float getArea()
        {
            return 3.14*radius*radius;
        }
};

class thickCircle : public circle
{
    private:
        int thickness;
    public:
        void setThickness(int t)
        {
            thickness=t;
        }
        int getThickness()
        {
            return thickness;
        }
        float getArea()
        {
            return 3.14*(getRadius()+thickness)*(getRadius()*thickness) - 3.14*(getRadius()*getRadius()); 
        }
};  

class coordinate //Question 3
{
    private:
        int x, y;
    public:
        void setCoordinates(int x,int y)
        {
            this->x=x;  //actual parameter and variable to contain coordinates ke names same hai isliye this use kiya
            this->y=y;
        } 

        void showCoordinates()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        
        double getDistance()
        {
            return sqrt(x*x+y*y);
        }

        double getDistance(coordinate c)
        {
            return sqrt((x-c.x)*(x-c.x) + (y-c.y)*(y-c.y));
        }
};

class shape //Question 4
{
    private:
        char shapeName[20];
    public:
        void setShapeName(char n[])
        {
            strcpy(shapeName,n);
        }
        char* getShapeName()
        {
            return shapeName;
        }
};

class Straightline : public shape
{
    private:
        coordinate c1,c2;
    public:
        void setLine(coordinate c1, coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        double getDistance()
        {
            return c1.getDistance(c2);
        }
        void showLine()
        {
            c1.showCoordinates();
            c2.showCoordinates();
        }
};