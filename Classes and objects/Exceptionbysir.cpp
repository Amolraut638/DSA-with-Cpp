#include<iostream>
#include<vector>
using namespace std;
/*
int balance=5000;
void withdraw(int amt)
{
    if(amt<=balance)
    {
        if(amt%100)
            throw 2.0;
        balance=balance-amt;
    }
    else 
        throw 1;
        
}
int main()
{
    int amt=6005;
    try{
        withdraw(amt);
        cout<<"Money withdrawn: "<<amt<<endl;
        cout<<"Available Balance: "<<balance<<endl;
    }
    catch(int e)
    {
        cout<<"Insufficient Balance"<<endl;
    }
    catch(double e)
    {
        cout<<"Amount is not in multiple of 100"<<endl;
    }
    catch(...)
    {
        cout<<"Some Problem"<<endl;
    }
    cout<<"Hello, this is last line";
    cout<<endl;
    return 0;
}
*/
class MyException:public exception
{
    public:
        const char* what() const throw()
        {
            return "Vector index out of range";
        }
};
int main()
{
    vector <int> v1={1,2};
    try{
        if(5>=v1.size())
            throw *(new MyException());
        cout<<v1.at(5);
    }
    catch(MyException e)
    {
        cout<<e.what()<<endl;
        cout<<"index out of range exception"<<endl;
    }
    
    cout<<"Hello";
    cout<<endl;
    return 0;
}

/*
struct Value
{
    int status;
    int data;
};
struct Value getValue(int a[],int size,int index)
{
    struct Value v1;
    v1.status=1;
    if(index<0 || index>size-1)
    {   
        v1.status=0;
    }
    v1.data=a[index];
    return v1;
}
void f1()
{
    struct Value v1;
    int x;
    v1=getValue(A,10,15);
    if(v1.status==1){
        x=v1.data;
        y=x+4;
    }
}
*/