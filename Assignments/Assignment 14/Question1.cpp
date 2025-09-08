#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a-Y.a;
    temp.b=X.b-Y.b;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a-X.b*Y.b;
    temp.b=X.a*Y.b+X.b*Y.a;
    return temp;
}