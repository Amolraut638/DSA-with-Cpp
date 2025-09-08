#include<iostream>
using namespace std;

struct node
{
    node *prev;
    int item;
    node *next;
};

class DLL
{
    private:
        node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        void displayList();
        void displayRev();
        ~DLL();
};

DLL :: DLL()
{
  start=nullptr;  
}

void DLL :: insertAtStart(int data)
{
    node* n=new node; //node type ka pointer variable banaya aur usme naye node ka address rkha
    n->item=data;
    n->prev=nullptr;
    n->next=start;
    if(start!=nullptr)
        start->prev=n;
    start=n;
}

void DLL :: insertAtLast(int data)
{
    node *n=new node;
    node *t; //traversing ke liye node bayana
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)  //means list empty hain
    {
        n->prev=start;
        start=n; //start me naye node ka address rkh diya
    }
    else
    {
        t=start; //t me pehle node ka address assign kiya
        while(t->next!=nullptr) //jabtk t ke next me null nhi ata tabtk look chalayenge
            t=t->next;
        n->prev=t;
        t->next=n;
    }
}

node* DLL :: search(int data)
{
    node* t;
    t=start;
    while(t!=nullptr)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    return nullptr;
}

void DLL :: insertAfter(node *temp,int data)
{
    if(temp!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=temp->next;
        n->prev=temp;
        if(temp->next!=nullptr)
            temp->next->prev=n;
        temp->next=n;
    }
}

void DLL :: deleteFirst()
{
    node *t;
    if(start!=nullptr)
    {
        t=start;
        start=start->next;
        if(start!=nullptr)
            start->prev=nullptr;
        delete t;
    }
}

void DLL :: deleteLast()
{
    node *t;
    if(start!=nullptr)
    {
        t=start;
        if(t->next==nullptr)  //means single node is present
        {
            delete start;
            start=nullptr;
        }
        else
        {
            while(t->next->next!=nullptr)
                t=t->next;
            delete t->next;
            t->next=nullptr;
        }     
    }
}

void DLL :: deleteNode(int data)
{
    node *temp,*t;
    temp=search(data);
    if(temp!=nullptr)
    {
        if(temp->next!=nullptr) //temp is not the last node  //dsa video number 5
            temp->next->prev=temp->prev;
        if(temp->prev!=nullptr)  //temp is not the first node
            temp->prev->next=temp->next;
        else  //temp is the first node
            start=temp->next;
       delete temp;
    }
}

DLL :: ~DLL()
{
    while(start!=nullptr)
        deleteFirst();
}

void DLL :: displayList()  //forward traversal and printing linked list 
{
    node* t;
    t=start;
    while(t!=nullptr)
    {
        cout<<t->item<<"->";
        t=t->next;
    }
}

void DLL :: displayRev() //backward traversal and printing linked list in reverse order
{
    node* t=start;
    while(t->next!=nullptr){
       t=t->next;
    }
    while(t!=nullptr)
    {
        cout<<t->item<<"->";
        t=t->prev;
    }
}

int main()
{
    DLL obj;
    obj.insertAtStart(6);
    obj.insertAtStart(5);
    obj.insertAtStart(3);
    obj.insertAtStart(2);
    obj.insertAtStart(1);
    obj.insertAfter(obj.search(3),4);
    obj.insertAtLast(7);      
    obj.displayList();
    cout<<endl;
    obj.deleteNode(3);
    obj.displayRev(); 

    return 0;
}