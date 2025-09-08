#include<iostream>
#define EMPTY_PRIORITY_QUEUE 1
using namespace std;
struct node
{
    int item;
    int pno;  //priority number
    node *next;
};
class priorityQueue
{
    private:
        node *start;
    public:
        priorityQueue();
        void insert(int,int);
        int deleteData();
        int getHighestPriorityElement();
        int getHighestPriorityNumber();
        ~priorityQueue();
        bool isEmpty();
};

priorityQueue :: priorityQueue()
{
    start=nullptr;
}

void priorityQueue :: insert(int data,int pno)
{
    node *n=new node;
    n->item=data;
    n->pno=pno;
    node *t;  //for traversing

    if(start==nullptr)
    {
        n->next=nullptr;
        start=n;
    }     
    else if(start->pno>pno)
    {
        n->next=start;
        start=n;
    }
    else
    {
        t=start;
        while(t->next!=nullptr)
        {
            if(t->next->pno<pno)
                break;
            t=t->next;
        }
        n->next=t->next;
        t->next=n;
    } 
}

int priorityQueue :: deleteData()
{
    int data;
    if(start==nullptr)
        throw EMPTY_PRIORITY_QUEUE;
    data=start->item;
    node *t;
    t=start;
    start=start->next;  //start dusre node ko point karne laga
    delete t;
    return data;
}

int priorityQueue :: getHighestPriorityElement()
{
    if(start==nullptr)
        throw EMPTY_PRIORITY_QUEUE;
    return start->item;
}

int priorityQueue :: getHighestPriorityNumber()
{
    if(start==nullptr)
        throw EMPTY_PRIORITY_QUEUE;
    return start->pno;
}

priorityQueue :: ~priorityQueue()
{
    while(start)
        deleteData();
}

bool priorityQueue :: isEmpty()
{
    return start==nullptr;
}