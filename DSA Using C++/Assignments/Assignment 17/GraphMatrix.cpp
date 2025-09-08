#include<iostream>
using namespace std;
class GraphMatrix
{
    private:
        int v_count;
        int e_count;
        int **adj;
    public:      
        void createGraph(int vno, int eno);
        void printMatrix();
        void printAdjacentNodes(int v);
        bool isIsolated(int v);
        ~GraphMatrix();
};

void GraphMatrix :: createGraph(int vno, int eno)
{
    int u, v;
    v_count=vno;
    e_count=eno;
    adj=new int*[v_count]; //int* pointer ka type hain, hum array of pointers bana rhe hain isliye type aaisa hain
    for(int i=0; i<v_count; i++)
        adj[i]=new int[v_count];  //pointer ke array me hr ek variable pointer hai usme array ka address assign karke 2d array me covert kr diya
    for(int i=0; i<v_count; i++)
        for(int j=0; j<v_count; j++)
            adj[i][j]=0;
    for(int k=1; k<e_count; k++)
    {
        cout<<"\nEnter node numbers connection edge:";
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }   
}

void GraphMatrix :: printMatrix()
{
    cout<<endl;
    for(int i=0; i<v_count; i++)
    {
        for(int j=0; j<v_count; j++)
            cout<<adj[i][j]<<" ";
        cout<<endl; 
    }
}

void GraphMatrix :: printAdjacentNodes(int v)
{
    if(v<v_count && v>=0)
    {
        for(int i=0; i<v_count; i++)
            if(adj[v][i]==1)
                cout<<endl<<"V"<<i;
    }
}

bool GraphMatrix :: isIsolated(int v) //This means those nodes have no edges connecting them to any other nodes in the graph.   
{
    bool flag=true;
    if(v<v_count && v>=0)
    {
        for(int i=0; i<v_count; i++)
            if(adj[v][i]==1)
            {
                flag=false;
                break;
            }
    }
    return flag;
}

GraphMatrix :: ~GraphMatrix()
{
    for(int i=0; i<v_count; i++)
        delete []adj[i]; //1d array delete honge 
    delete []adj; //array of pointer delete hoga
}

