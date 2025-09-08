#include<iostream>
#define EMPTY_QUEUE 1
#define FULL_QUEUE 2
using namespace std;
struct node
{
    int item;
    node *next;

};

class Queue
{
    private:
        node *front,*rear;
    public:
        Queue();
        void insertAtRear(int);
        int getFront();
        int getRear();
        void del();
        ~Queue();
        int count();
        
};

Queue :: Queue()
{
    front=nullptr;
    rear=nullptr;
}

void Queue ::insertAtRear(int data)
{
    node *n=new node;
    n->item=data;
    n->next=nullptr; 
    if(rear==nullptr)
    {
        front=n;
        rear=n;
    }
    else
    {
        rear->next=n;
        rear=n; 
    }
}

int Queue :: getFront()
{  
    if(front==nullptr)
        throw EMPTY_QUEUE;
    return front->item;
}

int Queue :: getRear()
{
    if(rear==nullptr)
        throw EMPTY_QUEUE; 
    return rear->item;
}

void Queue :: del()
{
    if(front==nullptr)
        throw EMPTY_QUEUE;
    node *t;
    t=front;  //t front ko  point karne laga
    if(front==rear) //ek hi node hain queue me
    {
        delete t;
        front=rear=nullptr;
    }
    else
    {
        front=front->next; 
        delete t;
    }
}

Queue :: ~Queue()
{
    while(front)
        del();
}

int Queue :: count()
{
    int c=0;
    if(front==nullptr)
        return 0;
    node *t;
    t=front;
    while(t)
    {
        c++;
        t=t->next;
    }
    return c;
}