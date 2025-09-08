#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;    
    public:
        //complex() { a=0; b=0; }  //constructor , it is instance member
        complex() {}   //is empty constructor se without argument wala object bhi bna sakte hain jo ki error nhi dega.
        complex(int x) { a=x; b=0; }
        complex(int x,int y) { a=x; b=y; }  //line 9 and 10 is called as constructor overloading
        complex(complex &c) { a=c.a; b=c.b; } //this is copy constructor.we pass reference of the object so that infinite recursion is eliminated
        ~complex() //destructor bhi instance member variable hota hain isliye wo kbhi static nhi hote 
        {
            cout<<"destructor called"<<endl;
        }
        void setdata(int,int) ;        //constructor object banata hain aur object banta hai to constructor call hota hain
        void showdata();               //constructor member variables ko initialize karta hain
};
//object banane se lekar object setData function se initialize karne tk apna object riskzone me rehta hain to kyu na hum object bante hi init kare
void complex:: setdata(int x,int y) 
{
    a=x;                 
    b=y;                
}

void complex:: showdata()
{
    cout<<"a="<<a<<" b="<<b<<endl;  
}

void f1()
{
    //complex c1,c2,c3;      //object ka sabse pehla action constructor ko call karna hain.
    complex c1(3),c2(2,8),c3;  
    complex c4=c2;  //c4 object bn rha hain iske liye copy constructor call ho raha hain aur us copy constructor me c2 as argument pass ho rha hain.

    //c1.setdata(3,4); 
    //c1.showdata();
    //c2.setdata(5,6);
    //c2.showdata();  
    c2.showdata();
    c4.showdata();
    
}

int main()
{
    f1();
    cout<<"last line";
    return 0;
}

/*
Constructor-
jab hum koi bhi constructor create nhi karte tb compiler 2 costructor banata hain ek default aur ek implicit copy constructor.
jab hum koi bhi constructor create karte hain tab compiler only implicit copy constructor banata hain.
aur jab hum copy constructor create karenge to compiler nhi karega aur nhi karenge to compiler create karega.
copy constructor tab call hota hain jab hum object banate hain aur usme usii class ke object ko assign karte hain  
Destructor-
destructor object ko destroy nhi karta na hi uski memory ko release karta hain  
destructor object destroy hone ke just pehle call hota hain

 */