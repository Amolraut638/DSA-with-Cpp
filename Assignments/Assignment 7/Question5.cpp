//define a function to merge two sorted arrays of same size.
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int* merge(int A[],int B[],int size)
{
    int *arr=(int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}

int main()
{
    int A[]={3,4,8,10,15};
    int B[]={5,6,11,12,13};
    int i,*arr;
    arr=merge(A,B,5);
    for(i=0;i<=9;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
    return 0;
}

