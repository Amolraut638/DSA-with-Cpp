//define overloaded function to calculate the area of circle,area of rectangle and area of triangle.
#include<iostream>
#include<math.h>
using namespace std;
float area(int);
int area(int,int);
float area(int,int,int);

float area(int r)
{
    return 3.14*r*r;
}

int area(int l,int b)
{
    return l*b;
}

float area(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

int main()
{
    int r;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"The area of circle is:"<<area(r)<<endl;

    int len,bre;
    cout<<"Enter the length and breadth of the rectangle:";
    cin>>len>>bre;
    cout<<"The area of the rectangle is:"<<area(len,bre)<<endl;

    int a,b,c;
    cout<<"Enter the lengths of the sides of triangle:";
    cin>>a>>b>>c;
    cout<<"The area of the triangle is:"<<area(a,b,c)<<endl;

    return 0;
}


