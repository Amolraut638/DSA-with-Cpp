#include<iostream>
#define STACK_OVERFLOW 1
#define STACK_UNDERFLOW 2
using namespace std;
class stack
{
    private:
        int capacity;
        int top;
        int *ptr;
    public:
        stack(int cap);
        bool isStackFull();
        bool isStackEmpty();
        void push(int);
        int peek();
        int pop();
        ~stack();
        int getCapacity();
        int getSize();
        stack& operator=(stack&);
};

stack :: stack(int cap)  
{
    capacity=cap;
    top=-1;
    ptr=new int[cap];   
}

bool stack :: isStackFull()  //overflow
{
    return capacity-1==top;
}

bool stack :: isStackEmpty()  //underflow
{
    return top==-1;
}

void stack :: push(int data)
{
    if(isStackFull())
        throw STACK_OVERFLOW;
    else
    {
        top++;
        ptr[top]=data;
    }
}

int stack :: peek()  //top ki value return karta hain 
{
    if(isStackEmpty())
        throw STACK_OVERFLOW;
    else
        return ptr[top];
}

int stack :: pop()
{
    if(isStackEmpty())
        throw STACK_OVERFLOW;
    else
    {
        int temp=ptr[top];  //value alag variable me hold ki taki usko return karana hain
        top--;
        return temp;
    }
}

stack :: ~stack()
{
    if(ptr!=nullptr)
    {
        delete []ptr;
    }
}

int stack :: getCapacity()
{
    return capacity;
}

int stack :: getSize()
{
    return top+1;
}

stack& stack :: operator=(stack& s) //operator overloading
{
    if(ptr!=nullptr)
        delete []ptr;
    capacity=s.capacity;
    top=s.top;
    ptr=new int[capacity];
    for(int i=0;i<=capacity;i++)
        ptr[i]=s.ptr[i];
}

void reverseStack(stack &stk)  //this is not a member function.
{
    int v;
    stack stk2(stk.getCapacity());
    stk2=stk;  //copy assignment operator
    for(int i=0;i<stk.getSize();i++)
    {
        v=stk.pop();
        stk2.push(v);
    }
    //idhar tak stk ka data stk2 me copy ho gaya hai in reverse order
    stk=stk2;//stk me stk2 copy kiya copy assignment operator banana padega
}