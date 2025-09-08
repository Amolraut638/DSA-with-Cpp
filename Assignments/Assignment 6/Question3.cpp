//define a function to rotate an array by n positions and the d direction.implement position and direction using default arguments
//argument d can be -1 for left and 1 for right direction.Argument 1 should be the last argument with default value 1.
#include<iostream>
using namespace std;

void rotate(int A[],int size,int d=1,int n=1);

void rotate(int A[],int size,int d,int n)
{
    int i,t,r;
    if(d==1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
                A[i]=A[i-1];
            A[0]=t;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[0];
            for(i=1;i<size;i++)
                A[i-1]=A[i];
            A[size-1]=t;
        }
    }
}
int main()
{
    int a[]={11,7,15,3,9,19,5,6,1,4,12};
    int size=11;

    cout<<"original array:"<<endl;
    for(int i=0;i<11;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    cout<<"Right shifted array by one position:"<<endl;
    rotate(a,11,1,1);
    for(int i=0;i<11;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    cout<<"left shifted array by one position:"<<endl;
    rotate(a,11,-1,2);
    for(int i=0;i<11;i++)
        cout<<a[i]<<" ";

    return 0;
}