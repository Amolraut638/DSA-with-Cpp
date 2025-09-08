#include<iostream>
#define QUEUE_OVERFLOW 1 
#define QUEUE_UNDERFLOW 2   
using namespace std;
class Queue
{
    private:
        int capacity;
        int front,rear;
        int *ptr;
    public:
        Queue(int);
        void insert(int);
        bool isFull();
        bool isEmpty();
        int getFront();
        int getRear();
        void del();
        ~Queue();
        int count();
};

Queue :: Queue(int cap)
{
    capacity=cap;
    front=-1;
    rear=-1;
    ptr=new int[capacity];
}

bool Queue :: isFull()
{
    return (capacity-1==rear && front==0 || rear+1==front);
}

bool Queue :: isEmpty()
{
    return front==-1;
}

void Queue :: insert(int data)
{
    if(isFull())
        throw QUEUE_OVERFLOW;
    if(isEmpty())
    {
        front=0;
        rear=0;
        ptr[rear]=data;
    } 
    else if(rear==capacity-1)
    {
        rear=0;
        ptr[rear]=data;
    }
    else
    {
        rear++;
        ptr[rear]=data;
    }
}

int Queue :: getFront()
{
    if(front==-1)
        throw QUEUE_UNDERFLOW;
    return ptr[front];
}

int Queue :: getRear()
{
    if(rear==-1)
        throw QUEUE_UNDERFLOW;
    return ptr[rear];
}
//rear change hota hain insertion se aur front change hota hain deletion se
void Queue :: del()
{
    if(isEmpty())
        throw QUEUE_UNDERFLOW;
    if(front==rear)  //means queue containing single value
        front=rear=-1;
    else if(front==capacity-1)
        front=0;    
    else
        front++;   
}

Queue :: ~Queue() //destructor array ki memory ko release karega
{
    delete []ptr;
}

int Queue :: count()
{
    int c=0;
    if(front==-1)
        return c;
    for(int i=front;i!=rear;)
    {
        c++;  //niche ke both scenario me count ki value badhti jayegi
        if(i==capacity-1)  //last index pr pohoch gaya
            i=0;  //to i me increament karne se acha 0 put karo
        else
            i++;
    }
    c++;  //i!=rear se last wala count measure nhi hoga to usko ek se increament karne ke liye ye wala c++ diya
    return c;
}



