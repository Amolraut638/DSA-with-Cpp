#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;
    public:
        void setData(int a,int b)
        {
            real=a;
            imag=b;
        }

        void showData()
        {
            cout<<"real="<<real<<" imag="<<imag<<endl;
        }

        complex operator +(complex c)
        {
            complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }

        complex operator -(complex c)
        {
            complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }

        complex operator *(complex c)
        {
            complex temp;
            temp.real=real*c.real-imag*c.imag;
            temp.imag=real*c.imag+imag*c.real;
            return temp;
        }

        bool operator ==(complex c)
        {
            if(real==c.real && imag==c.imag)
                return true;
            else
                return false;

        }
};
int main()
{
    complex c1,c2,c3,c4,c5,c6;      
    c1.setData(3,4); 
    c1.showData();
    c2.setData(5,6);
    c2.showData();  
    cout<<"\n";
    c3=c1+c2;
    c3.showData();
    c4=c1-c2;
    c4.showData();
    c5=c1*c2;
    c5.showData();
    if(c1==c2)
       cout<<"c1 and c2 are equal";
    else
       cout<<"c1 and c2 are not equal";

    return 0;
}