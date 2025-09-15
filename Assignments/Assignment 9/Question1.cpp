#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;    
    public:
    void setData(int, int);
    void showData();
    complex add(complex);
    complex multiply(complex);
    complex substract(complex);
};

void complex:: setData(int x,int y)
{
    real=x;
    imag=y;
}

void complex:: showData()
{
    cout<<real<<" + "<<imag<<"i"<<endl;
}

complex complex:: add(complex C)
{
    complex tempAdd;
    tempAdd.real = real + C.real;
    tempAdd.imag = imag + C.imag;
    return tempAdd;
}

complex complex:: multiply(complex C)
{
    complex tempMult;
    tempMult.real = real * C.real - imag * C.imag;
    tempMult.imag = real * C.imag + imag * C.real;
    return tempMult;

}

complex complex:: substract(complex C)
{
    complex tempSub;
    tempSub.real = real - C.real;
    tempSub.imag = imag - C.imag;
    return tempSub;

}

int main()
{
    complex c1,c2,c3;
    c1.setData(5,6);
    c2.setData(3,2);

    c3=c1.add(c2); 
    c3.showData();  //8 + 8i

    c3=c1.multiply(c2); 
    c3.showData();  //3 + 28i

    c3=c1.substract(c2); 
    c3.showData();  //2 + 4i

    return 0;
}

