#include<iostream>
#define EMPTY_DEQUE
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class deque
{
    private:
        node *front,*prev,*rear;
    public:
        deque();
        void insertAtFront(int);
        void insertAtRear(int);
        void deleteFront();
        void deleteRear();
        int getFront();
        int getRear();
        ~deque();
        bool isEmpty();
};

deque :: deque()
{
    front=nullptr;
    rear=nullptr;
}

void deque :: insertAtFront(int data)
{
    node *n=new node;
    n->item=data;
    n->prev=nullptr; //data front me jane wala hain to prev me null hi hoga
    n->next=front;   //line 27 to 30 is for if list is empty 
    if(front!=nullptr)  //if list is not empty then below code
        front->prev=n; //front jis node ko point kr rha hain uske prev me naye node ka address aya
    else //front me agar null hoga to naye node ko front aur rear dono point kr rhe honge
        rear=n;
    front=n;
}

void deque :: insertAtRear(int data)
{
    node *n=new node;
    n->item=data;
    n->next=nullptr;  //node last me insert hoga to uske next me null hi aayega
    n->prev=rear;
    if(rear!=nullptr)
        rear->next=n;
    else
        front=n;
    rear=n;         
}

void deque :: deleteFront()
{
    if(front==nullptr)
        throw EMPTY_DEQUE;
    if(front==rear)  //ek hi node hain
    {
        delete front;
        front=rear=nullptr;
    }
    else
    {
        front=front->next;  //front dusre node ko point karne lagega
        delete front->prev;
        front->prev=nullptr;
    }
}

void deque :: deleteRear()
{ 
    if(rear==nullptr)
        throw EMPTY_DEQUE;
    if(front==rear)
    {
        delete rear;
        rear=front=nullptr;
    }
    else
    {
        rear=rear->prev;
        delete rear->next;
        rear->next=nullptr; 
    }
}

int deque :: getFront()
{   
    if(front==nullptr)
        throw EMPTY_DEQUE;
    return front->item;
}
        
int deque :: getRear()
{
    if(rear==nullptr)
        throw EMPTY_DEQUE;
    return rear->item;
}

bool deque :: isEmpty()
{
    return front==nullptr;  
}

deque :: ~deque()
{
    while(front)
        deleteFront();
}

