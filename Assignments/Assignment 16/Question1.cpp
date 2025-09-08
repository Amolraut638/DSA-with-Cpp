#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[30];
        int age;
    public:
        Person(char name[],int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
        void showvalues()
        {
            cout<<"name="<<name<<endl;
            cout<<"age="<<age<<endl;

        }
};
class Complex
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"a="<<a<<"\nb="<<b;
        }
};
void f1()
{
    Complex *p=new Complex();
    p->setData(3,4);
    p->showData();
}
int main()
{
    Complex c;
    Person p("Amol",21);
    p.showvalues();
    f1();
    return 0;
}