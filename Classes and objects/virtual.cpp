#include<iostream>
using namespace std;
class A
{
    public:
        virtual void f1()  //to overcome the  problem of function overriding we use virtual keyword
        {
            cout<<"function of class A";
        }
};
class B : public A
{
    public:
        void f1()
        {
            cout<<"function of class B";
        }
};

int main()
{
    A *p;
    p=new B;
    p->f1();
    cout<<endl;
    return 0;
}