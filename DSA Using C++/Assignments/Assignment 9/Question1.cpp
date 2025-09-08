//stack using linked list
#include<iostream>
#define EMPTY_STACK 1
using namespace std;
struct node
{
    int item;
    node* next;
};

class stack
{
    private:
        node* top;
    public:
        stack();  //constructor
        void push(int);
        int peek();
        int pop();
        ~stack();
        bool isEmptyStack();
};

stack :: stack()
{
    top=nullptr;  
}

void stack :: push(int data)
{
    node* n=new node;
    n->item=data;
    n->next=top;
    top=n;
}

int stack :: peek()
{
    if(top==nullptr)
        throw EMPTY_STACK;
    return top->item;
}

int stack :: pop()
{
    if(top==nullptr)
        throw EMPTY_STACK;
    int data=top->item; //data variable me top ke item ko rkha
    node *t;
    t=top;
    top=top->next;
    delete t;
    return data;
}

stack :: ~stack()
{
    while(top!=nullptr)
        pop();  
}

bool stack :: isEmptyStack()
{
    return top==nullptr;
}

void reverseStack(stack &stk)
{
    stack s1;
    while(!stk.isEmptyStack()) //means stack empty nhi hain,jabtak isEmtpyStack false return kar rha hain tabtk loop chalega
    {
        s1.push(stk.pop());
    }
    stack s2;
    while(!s1.isEmptyStack())
    {
        s2.push(s1.pop());
    }
    while(!s2.isEmptyStack())
    {
        stk.push(s2.pop());
    }
}

bool isPalindrome(int num)
{
    //1234321 or 123321
    //find length of num
    int n=0,x;
    x=num;
    while(x)
    {
        x=x/10;
        n++;
    }
    stack s1;
    if(n%2)  //odd length
    { 
        for(int i=0;i<n/2;i++)
        {
            s1.push(num%10);  //num%10 num me se ek ek digit nikalega aur usko push karta jayega
            num=num/10; //num me se last digit ko remove karega 
        }
        num=num/10; 
        while(num)
        {
            if(num%10!=s1.pop())
                return false;
            num=num/10; 
        }
        return true;
    }
    else //even length
    {
        for(int i=0;i<n/2;i++)
        {
            s1.push(num%10);  //num%10 num me se ek ek digit nikalega aur usko push karta jayega
            num=num/10; //num me se last digit ko remove karega 
        }
        while(num)
        {
            if(num%10!=s1.pop())
                return false;
            num=num/10; 
        }
        return true;
    }



}