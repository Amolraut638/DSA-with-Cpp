#include<iostream>
using namespace std;
class product
{
    private:
        int a,b,c;  //is instance variables ko hum initializer se bhi kar sakte aur constructor se bhi initialize kar sakte,2 3 types se kar sakte hai 
        int &r;//lekin agar reference variable hoga to use declaration ke time kar sakte hain agar instance member variable se hi initialize karna hoga to.
               //pr constructor se karna hoga to wo possible nhi hain. wo initializer se hi hoga
    public:
        //product():a(2),b(4),c(5)  //initializer.
        product(int x,int y,int z,int *ptr):r(*ptr)
        {a=x; b=y; c=z;}
        
        void show()
        {
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
            cout<<"a=>"<<r<<endl;
        }
}; 

int main()
{
    int*ptr=(int*)malloc(4);
    *ptr=100;
    //product p1;
    //p1.show();        
    product p(10,20,30,ptr);
    p.show();
    cout<<endl;
    return 0;
} 