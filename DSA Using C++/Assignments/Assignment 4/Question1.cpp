#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};

class SLL
{
    private:
        node *start;  //node type ka start variable
    public:
        SLL();  //constructor to initialize start pointer
        void insertAtStart(int);
        void insertAtLast(int); 
        node* search(int); // return type node ka address hain
        void insertAfter(node*,int);
        void deleteFirst(); 
        void deleteLast();
        void deleteNode(int);
        void displayList();
        ~SLL();
};

SLL :: SLL()
{
    start=nullptr;
}

void SLL :: insertAtStart(int data)
{
    node *n=new node;  //node type ka pointer banaya uske andar naye node ka adress rakha.
    n->item=data;
    n->next=start;
    start=n; 
}

void SLL :: insertAtLast(int data)
{
    node *n=new node;
    node *t;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr)  //agar start me null hain means list empty hain
    {
        start=n;  //to start me naye node ka adress rkh denge.
    } 
    else
    {
        t=start;
        while(t->next!=nullptr)   //t jis node ko point kar rha hain wo last node nhi hain. 
            t=t->next;
        t->next=n; 
        
    }
}

node* SLL :: search(int data)
{
    node *t;
    t=start; //t me start ka index rkha hain kyuki list traverse karni hain 
    while(t!=nullptr)
    {
        if(t->item==data)  //t jisko point kr rha hain uske item ki value data se match hoti hain ya nhi 
            return t;  //node ka address return kiya
        t=t->next;
    }
    return nullptr; // agar list me data nhi mila to return kardo nullptr 
}

void SLL :: insertAfter(node *t,int data)
{
    if(t!=nullptr)
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
}

void SLL :: deleteFirst()
{
    node *t;
    if(start!=nullptr)
    {
        t=start;
        start=start->next;
        delete t;
    }
}

void SLL :: deleteLast()
{
    node *t;
    if(start!=nullptr)
    {
        if(start->next== nullptr)
        {
            delete start;
            start=nullptr;
        }
        else
        {
            t=start;
            while(t->next->next!=nullptr)
                t=t->next;
            delete t->next;
            t->next=nullptr;
        }
    }
}

void SLL :: deleteNode(int data)
{
    node *t1,*t2;
    if(start) //start and start!=nullptr both are same kyuki start me null hoga to condition vaise bhi false hogi
    {
        t2=search(data);
        if(t2) //t2 me null hain mtlb data exist nhi karta isliye ye condition likhi
        {
            t1=start;
            if(t1==t2) //t1,t2 dono pehle node ko point kr rhe hain mtlb jis node ko delete karna hain wo pehla hi node hain
                deleteFirst();\
            else
            {
                while(t1->next!=t2)
                    t1=t1->next;
                t1->next=t2->next;
                delete t2;  
            }
            
        }
    }
}

void SLL ::displayList()
{
    node* temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->item<<"->";
        temp=temp->next;
    }
}

SLL :: ~SLL()  //destructor deallocates the memory for all nodes in linked list 
{
    while(start!=nullptr)
        deleteFirst();
}


int main()
{
    SLL obj;
    obj.insertAtStart(5);
    obj.insertAtLast(6);
    obj.insertAfter(obj.search(5),4);
    obj.displayList();
    return 0;
}
