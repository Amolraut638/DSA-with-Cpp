//define overloaded functions to calculate volume of cuboid,cone and sphere.
#include<iostream>
using namespace std;

int area(int,int,int);
float area(int,int);
float area(int);

int area(int l,int b,int h)
{
    return l*b*h;
}

float area(int r,int h)
{
    return 3.14*r*r*h/3;
}

float area(int r)
{
    return 4*3.14*r*r*r/3;
}

int main()
{
    int l,b,h;
    cout<<"Enter the value of length,breadth and height:";
    cin>>l>>b>>h;
    cout<<"The volume of cuboid is :"<<area(l,b,h)<<endl;

    int radius,height;
    cout<<"Enter the radius and height of the cone:";
    cin>>radius>>height;
    cout<<"The volume of the cone is:"<<area(radius,height)<<endl;

    int r;
    cout<<"Enter the radius of sphere:";
    cin>>r;
    cout<<"The volume of the sphere is:"<<area(r)<<endl;

    return 0;
}
