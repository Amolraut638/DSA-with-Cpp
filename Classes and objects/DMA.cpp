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
    //complex c1,c2,c3,c4;      
    complex *p1,*p2,*p3=nullptr,*p4=nullptr;  //*p3 ko null se initialize nhi karte to illegal memory access ho jata
    p1=new complex();
    p2=new complex();
    p1->setdata(3,4); 
    p2->setdata(4,5);
    p3=new complex();
    if(p3!=nullptr)//agar p3 me null nhi hain to ye if condition chalegi lekin usme null hain to isliye line 52 me object create karna pda 
       *p3=*p1+*p2;//c3=c1.add(c2);   //
    p3->showdata();
    p4=new complex();
    if(p3!=nullptr)
        *p4=-*p3;
    p4->showdata();
    delete p1;
    delete p2;
    delete p3;
    delete p4;

}

int main()
{
    f1();
    return 0;
}