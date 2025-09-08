#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;    
    public:
        void setdata(int,int) ;
        void showdata();
        complex operator+(complex);
        complex operator-();  //this is unary operator overloading
};

complex complex::operator+(complex C)  //C me c2 ka data aaya
{
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;

}
complex complex::operator-()
{
    complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
    
}


void complex:: setdata(int x,int y) 
{
    a=x;                 
    b=y;                
}  

void complex:: showdata()
{
    cout<<"a="<<a<<" b="<<b<<endl;
    //cout<<a<<" + "<<b<<"i"<<endl;
}

void f1()
{
    complex c1,c2,c3,c4;      
    c1.setdata(3,4); 
    //c1.showdata();
    c2.setdata(4,5);
    //c2.showdata();  
    c3=c1+c2;//c3=c1.add(c2);   //isko function call by passing object bhi kehte hain.
    //idhar + binary operator hain to usko do operands lagenge pr humne ek hi diya hai c2 kyuki dusra caller object ke rup me already present hain (c1)
    c3.showdata();
    c4=-c3;//- unary operator hain to usko ek hi operand lagega to wo c3(caller object) hain i.e c3 ne - ko call kiya aur uska result c4 me rkha
    //isko aaise bhi likh skte c4=c3.operator-()
    c4.showdata();

}

int main()
{
    f1();
    return 0;
}


//we can write
//cout<<x  means cout ne apne member operator(insertion) ko call kiya aur usme x as an argument pass kiya
//cout.operator<<(x)==cout<<x;