//define a c++ function to sort an array of integers in ascending or descending order depending on bool type arguments.
//true for ascending and false for descending,use defualt arguments to implement it.
#include<iostream>
using namespace std;
void sort(int A[],int size,bool asc=true);
void sort(int A[],int size,bool asc)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(asc==true&&A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
            else if(asc==false && A[i]<A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
}

int main()
{
    int a[]={4,7,1,3,9,3,5,6,1,4,5};
    int size=11;
    sort(a,11,0);
    for(int i=0;i<11;i++)
        cout<<a[i]<<" ";
    return 0;
}