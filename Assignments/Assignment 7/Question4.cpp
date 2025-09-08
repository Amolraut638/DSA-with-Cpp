//define a function to swap two arrays.
#include<iostream>
#include<string.h>
using namespace std;

void swapArrays(int A[],int B[],int size);

void swapArrays(int A[],int B[],int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        t=A[i];
        A[i]=B[i];
        B[i]=t;
    }
}

int main()
{
    int i;
    int A[]={1,2,3,4,5,6,7,8};
    int B[]={9,10,11,12,13,14,15,16};

    cout<<"Original arrays:"<<endl<<"A[]=";
    for(i=0;i<8;i++)
        cout<<A[i]<<" ";
    cout<<endl<<"B[]=";
    for(i=0;i<8;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    swapArrays(A,B,8);
    cout<<"swapped arrays:"<<endl<<"A[]=";
    for(i=0;i<8;i++)
        cout<<A[i]<<" ";
    cout<<endl<<"B[]=";
    for(i=0;i<8;i++)
        cout<<B[i]<<" ";
    
    return 0;
}