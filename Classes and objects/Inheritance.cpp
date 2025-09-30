#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    protected:
        void setA(int x) { a=x; }
    public:
        int getA() { return a; } 

};

class B : public A
{
    private:
        int b;
    protected:
        void setB(int y) { b=y; }
    public:
        int getB() { return b; } 
        void setData( int x,int y) { setA(x); setB(y); }
        void printData()
        {
            cout<<"a="<<getA()<<"\nb="<<getB()<<endl;
        }
        
};
int main()
{
    B obj;
    obj.setData(3,4);
    obj.printData();
    return 0;
}

//how to modify a class?
//using inheritance we modify a class. we cannot directly change the actual coding of the class,each class has different identity
//so we make another class and we inherit the properties of the old class to do changes in old class

//when to use inheritance
//1)jab bhi kisi class ko modify karna hain means properties and methods usme add karne ho pr add karne se wo ek nyi category/ entity banani chahiye
//2)Jab do classes ki bich me is a relationship hoga tab hum inheritance karte hain

//constructor and destructor inherit nhi hote hain