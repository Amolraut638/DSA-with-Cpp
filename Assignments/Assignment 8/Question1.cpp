#include<iostream>
using namespace std;
class complex
{ 
    private:
        int real,imag;
    public:
        void setData(int,int);
        void getData();
        complex add(complex);
        complex mult(complex);
    
       
};

complex complex:: mult(complex d)
{
    complex multiplication;
    multiplication.real=real*d.real;
    multiplication.imag=imag*d.imag;
    return multiplication;
}

void complex::setData(int x,int y)
{  
    real=x;
    imag=y;
}

void complex::getData()
{
    cout<<real<<" + "<<imag<<"i"<<endl;
}

complex complex::add(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
    
}

int main()
{
    complex c1,c2,c3,c4;
    c1.setData(5,6);
    c2.setData(2,3);
    c3=c1.add(c2);
    c3.getData();
    c4=c1.mult(c2);
    c4.getData();

    return 0;
}