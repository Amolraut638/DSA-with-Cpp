#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;    
    public:
        void setdata(int x,int y)
        {
            real=x;
            imag=y;
        }

        void showdata()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        complex add(complex C)
        {
            complex tempAdd;
            tempAdd.real=real+C.real;
            tempAdd.imag=imag+C.imag;
            return tempAdd;
        }

        complex multiply(complex C)
        {
            complex tempMult;
            tempMult.real=real*C.real-imag*C.imag;
            tempMult.imag=real*C.imag+imag*C.real;
            return tempMult;

        }

        complex substract(complex C)
        {
            complex tempSub;
            tempSub.real=real-C.real;
            tempSub.imag=imag-C.imag;
            return tempSub;

        }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(3,2);
    c3=c1.add(c2); 
    c3.showdata();
    c3=c1.multiply(c2); 
    c3.showdata();
    c3=c1.substract(c2); 
    c3.showdata();

    return 0;
}

