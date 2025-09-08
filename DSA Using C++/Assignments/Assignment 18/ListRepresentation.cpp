#include<iostream>
using namespace std;
struct node
{
    int item;
    int vertex;
    node *next;
};

class AdjList
{
    private:
        node *start;
        int vertex;//The edges associated with a vertex determine its neighbors 
    public:
        AdjList();
        AdjList(int); //vertex ko bhi initialize karne ke liye dusra constructor banaya
        void setVertex(int);
        node* getStart();
        void addNode(int,int);
        void removeFirstNode();
        void printList();
        ~AdjList();
};

AdjList :: AdjList()
{
    start=nullptr;
}

AdjList :: AdjList(int v)
{
    start=nullptr;
    vertex=v;
}

void AdjList :: setVertex(int v)
{
    vertex=v;
}

node* AdjList :: getStart()
{
    return start;
}

void AdjList :: addNode(int v, int data)  //start me add hoga
{
    node* n=new node;
    n->item=data;
    n->vertex=v;
    n->next=start;
    start=n;
}

void AdjList :: removeFirstNode()
{
    node* t;
    if(start)
    {
        t=start;
        start=start->next;
        delete t;
    }
}

void AdjList :: printList()
{
    node* t;
    t=start;
    while(t!=nullptr)
    {
        cout<<"("<<t->vertex<<","<<t->item<<")";
        t=t->next;
    }
}

AdjList :: ~AdjList()
{
    while(start!=nullptr)
        removeFirstNode();
}


class Graph
{
    private:
        int v_count;
        AdjList *arr;
    public:
        Graph();
        void createGraph(int);
        void printGraph();
        ~Graph();
};

Graph :: Graph()
{
    arr=nullptr;
    v_count=0;
}

void Graph :: createGraph(int vno)
{
    int n, v, data;  //neighbours n ,vertex v
    v_count=vno;
    arr=new AdjList[v_count];
    for(int i=0; i<v_count; i++)
    {
        arr[i].setVertex(i);
        cout<<"\nHow many adjacent nodes of V "<<i<<":";
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cout<<"\nEnter vertex number:";
            cin>>v;
            cout<<"\nEnter data to store:";
            cin>>data;
            arr[i].addNode(v,data);
        }
    }
}

void Graph :: printGraph()
{
    for(int i=0; i<v_count; i++)
    {
        cout<<endl;
        arr[i].printList();  
    }
}

Graph :: ~Graph()
{
    delete []arr;
}