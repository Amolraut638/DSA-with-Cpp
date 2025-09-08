#include<iostream>
#include<string.h>
using namespace std;
class A
{
    private:
        int a, b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\na="<<a<<"\nb="<<b; 
        }
        void input()
        {
            cout<<"Enter two numbers:";
            cin>>a>>b;
        }
};      
class B : public A
{
    private:
        int c;
    public:
        void input()
        {
            int x,y;
            cout<<"Enter three numbers:";
            cin>>x>>y>>c;
            setData(x,y);
        }
        void showData()
        {
            A::showData(); //dono classes me same name ka function hain wo differ hone ke liye scope resolution operator use kiya
            cout<<" c="<<c;
        }
};

class shape
{
    private:
        char shapename[30];
    public:
        void setShapeName(char n[])
        {
            strcpy(shapename,n);
        }
        char* getShapeName()
        {
            return shapename;
        }

        virtual int area()=0;//shape class ka object nhi ban sakta
};

class rectangle : public shape
{
    private:
        int l, b;
    public:
        void setLength(int x)
        {
            l=x;
        }
        void setBreadth(int y)
        {
            b=y;
        }
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int area() //function override
        {
            return l*b;
        }
};

class square : public shape
{
    private:
        int side;
    public:
        void setSide(int s)
        {
            side=s;
        }
        int getSide()
        {
            return side;
        }
        int area() //function override
        {
            return side*side;
        }
};

//hum agar rectangle class ka object banana chahh rahe hain to wo nhi bannega kyuki uske liye pure virtual function ko override karna padega
int main()
{
    rectangle *r1=new rectangle();
    square *s1=new square();
    char n1[]="rectangle",n2[]="square";
    s1->setShapeName(n2);
    r1->setShapeName(n1);
    r1->setLength(20);
    r1->setBreadth(8);
    cout<<"\nArea of rectangle is:"<<r1->area();
    s1->setSide(10);
    cout<<"\nArea of the sqaure is :"<<s1->area();
    cout<<endl;
    return 0;

}