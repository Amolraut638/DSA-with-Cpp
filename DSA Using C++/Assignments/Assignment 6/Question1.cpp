#include<iostream>
using namespace std;

struct node
{
    int item;
    node* next;
};

class CLL
{
    private:
        node* last;
    public:
        CLL();
        ~CLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
    };

CLL :: CLL()
{
    last=nullptr;
}

void CLL :: insertAtStart(int data)
{
    node* n=new node; //new node created
    n->item=data;
    if(last!=nullptr)
    {
        n->next=last->next;
        last->next=n;
    } 
    else
    {
        n->next=n; //if list is empty then new node points itself because it is a circular linked list
        last=n;
    }
}

void CLL :: insertAtLast(int data)
{
    node* n=new node; //new node created
    n->item=data;
    if(last!=nullptr)
    {
        n->next=last->next;
        last->next=n;
    } 
    else
        n->next=n; //if list is empty then new node points itself because it is a circular linked list
    last=n;
}

node* CLL :: search(int data)
{
    node* t;
    if(last!=nullptr)
    {
        t=last->next; //t me pehle node ka address aa gaya
        do
        {
            if(t->item==data)
                return t;
            t=t->next;  //loop aage badhta rahega 

        }while(t!=last->next);  //t jabtak pehle node ke barabr nhi hain tabtak loop chalta rahega
    }
    return nullptr;
}

void CLL :: insertAfter(node* temp,int data)
{
    if(temp!=nullptr)
    {
        node* n=new node;
        n->item=data;
        n->next=temp->next;
        temp->next=n;
        if(last==temp)
            last=n;
    }
}

void CLL :: deleteFirst()
{
   if(last!=nullptr) //if list is not empty
   {
        if(last->next=last) //means list me ek hi node hain
        {
            delete last;
            last=nullptr;
        }
        else
        {
            node* t;
            t=last->next;
            last->next=t->next;
            delete t;
        }
   } 
}

void CLL :: deleteLast()
{
    if(last!=nullptr)
    {
        if(last->next=last) //means list me ek hi node hain
        {
            delete last;
            last=nullptr;
        }
        else
        {
            node* t;
            t=last->next; //t me last node ka address rkha
            while(t->next!=last)
                t=t->next;
            t->next=last->next;
            delete last;
            last=t;
            
        }
    }
}

void CLL :: deleteNode(int data)
{
    node* temp,*t;
    temp=search(data);
    if(temp!=nullptr)  //means node is present in list
    {
        if(temp==last)
        {
            deleteLast();
        }
        else
        {
            t=last->next;
            while(t->next!=temp)
                t=t->next;
            t->next=temp->next;
            delete temp;
        }
    }
}

CLL :: ~CLL()
{
    while(last!=nullptr)
        deleteFirst();
}

int main()
{
    
}
