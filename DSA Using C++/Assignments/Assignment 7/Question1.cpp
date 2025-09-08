#include<iostream>
using namespace std;

struct node
{
    node* prev;
    int item;
    node* next;
};

class DCLL
{
    private:
        node* start;
    public:
        DCLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~DCLL();

};

DCLL :: DCLL()
{
    start=nullptr;
}

void DCLL :: insertAtStart(int data)
{
    node* n=new node;
    n->item=data;
    if(start==nullptr) //means list is empty to naya node khud ko hi point karega
    {
        n->prev=n;
        n->next=n;  //dono taraf se naye node ko hi point kr rha hai
        start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
        start=n;
    }
}

void DCLL :: insertAtLast(int data)
{
    node* n=new node;
    n->item=data;
    if(start==nullptr) //means list is empty to naya node khud ko hi point karega
    {
        n->prev=n;
        n->next=n;  //dono taraf se naye node ko hi point kr rha hai
        start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
    }
}

node * DCLL :: search(int data)
{
    node* t;
    if(start)
    {
        t=start;  //for traversing
        do
        {
            if(t->item=data)
                return t;
            t=t->next;

        }while(t!=start);

    }
    return nullptr;
}

void DCLL :: insertAfter(node* temp,int data)
{
    if(temp)  //temp not equals to null
    {
        node* n=new node;
        n->item=data;
        n->prev=temp;
        n->next=temp->next;
        temp->next=n;
    }
}

void DCLL :: deleteFirst()
{
    if(start!=nullptr)
    {
        if(start->next==start) //means single node is present
        {
            delete start;
            start=nullptr;
        }
        else
        {
            start->prev->next=start->next; //start->prev means last node and start->next means second node
            start->next->prev=start->prev;
            //first node ko delete kiya to second node ka address nhi mil payega to hume ek pointer lena padega 
            node* t;
            t=start;  //t me first node ka address rkha
            start=start->next;
            delete t;
        }
    }
}

void DCLL :: deleteLast()
{
    if(start!=nullptr)
    {
         if(start->next==start) //means single node is present
        {
            delete start;
            start=nullptr;
        }
        else
        {
            node* t;
            t=start->prev;
            t->prev->next=start;  //t->prev means second last node usme first node ka address rkha
            start->prev=t->prev;
            delete t;
        }
    }
}

void DCLL :: deleteNode(int data)
{
    node* temp=search(data);
    if(temp!=nullptr)
    {
        if(start==temp)
            deleteFirst();
        else
        {
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            delete temp;
        }
    }
}

DCLL :: ~DCLL()
{
    while(start!=nullptr)
        deleteFirst();
}