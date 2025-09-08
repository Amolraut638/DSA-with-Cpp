#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator-(Complex);
};
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}