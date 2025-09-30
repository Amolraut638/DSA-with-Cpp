#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;    
    public:
        void setdata(int,int) ;
        void showdata();
        friend complex operator+(complex,complex); //this is binary operator overloading
        friend complex operator-(complex);  //this is unary operator overloading
        complex operator+(int);
        friend complex operator+(int,complex);
        friend ostream & operator<<(ostream &,complex);
        friend istream & operator>>(istream &,complex &);  //for extraction operator we have to pass reference bcoz hum c1 me data rakhna chahte hain
                                                        //c1 ki value li to hum usme data nhi rkh sakte
};

istream & operator>>(istream & din, complex & X)
{
    din>>X.a>>X.b;
    return din;
}

ostream & operator<<(ostream & dout, complex X)
{
    dout<<"a="<<X.a<<" b="<<X.b<<" this a and b is from ostream";
    return dout;    
}
complex complex :: operator+(int x)
{
    complex temp;
    temp.a=a+x;
    temp.b=b+x;
    return temp;
}

complex operator+(int x,complex c)
{
    complex temp;
    temp.a=x+c.a;
    temp.b=x+c.b;
    return temp;
}

complex operator+(complex x,complex y)              
{
    complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;

}

complex operator-(complex z)
{
    complex temp;
    temp.a=-z.a;
    temp.b=-z.b;
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
    complex c1,c2,c3,c4,c5,c6;      
    //c1.setdata(3,4);
    cout<<"Enter the complex numbers(real and imaginary) :";
    cin>>c1; 
    c2.setdata(4,5);
    c3=c1+c2; //c3=operator+(c1,c2); operator+ ko frnd kiya isliye ye abhi member nhi raha to usko aaise call karte hain 
    c3.showdata();
    c4=-c3;   //c4=operator-(c3); 
    c4.showdata();
    c5=c1+5; //c5=c1.operator+(5)
    c5.showdata();
    c6=5+c1;  //c6=operator+(5,c1) for this we have to make friend function otherwise it will give error because for binary caller object must be at left side of operator
    //with the friend operator it is possible to overload a binary operator in which left operand is not an object
    c6.showdata();  
    cout<<c6;  //operator<<(cout,c6); 
}

int main()
{
    f1();
    return 0;
}
