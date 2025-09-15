#include<iostream>
using namespace std;
/* class complex
{
    private:
        int a,b;    //these are the instance member variables.when object is created then memory will be allocated to these variables 
    public:
        void setdata(int x,int y) //local variables. //setdata me hamesha data arguments me pass karna hain.
        {
            a=x;                 //x,y local variable hain to function end hone ke bad wo destroy ho jayenge isliye usko 
            b=y;                 //a and b me copy kar lete hain.
        }  
        void showdata()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }

        setdata(), showdata() functions are called as instanace member variables    
};
void f1()
{
    complex c1,c2;     //c1,c2 are the local variables.  
    c1.setdata(3,4); 
    c1.showdata();
    c2.setdata(5,6);
    c2.showdata();  
}
int main()
{
    f1();
    return 0;
}
 */
class complex
{
    private:
        int a,b;    
    public:
        void setdata(int,int) ;
        void showdata();
        complex add(complex);
};

//below functions ko class se bahar nikala, bahar hoke bhi unko member banana hoga to void complex:: aisa likhna pdta hain

complex complex::add(complex C)  //C me c2 ka data aaya
{
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;

}

void complex:: setdata(int x,int y) 
{
    a=x;                 
    b=y;                
}  

void complex:: showdata()
{   
    //cout<<"a="<<a<<" b="<<b<<endl;
    cout<<a<<" + "<<b<<"i"<<endl;
}

void f1()
{
    complex c1,c2,c3;      
    c1.setdata(3,4); //c1 ne setdata ko call kiya
    //c1.showdata();
    c2.setdata(5,6);
    //c2.showdata();  
    //c3 = c1 + c2; //compiler ko pata nahi jab 2 complex type ki values add hoti hain to kya hota hai
    c3=c1.add(c2);   //function call by passing object and returning object
    //c1 ne add function ko call kiya usme c2 as an argument pass kiya aur uska result c3 me store kiya
    c3.showdata();
}

int main()
{
    f1();
    return 0;
}