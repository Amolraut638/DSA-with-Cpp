#include<iostream>
#include<stack>
using namespace std;

//bubble sort 
void bubbleSort(int A[], int size)
{
    int i, rounds,temp;
    for(rounds=0; rounds<=size-1; rounds++)
        for(i=0; i<=size-1-rounds; i++)
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp; 
            }
}

//modified bubble sort
void ModifiedbubbleSort(int A[], int size)
{
    int i, rounds,temp;
    bool flag;
    for(rounds=0; rounds<=size-1; rounds++)
    {
        flag=false;
        for(i=0; i<size-1-rounds; i++)
        {
            if(A[i]>A[i+1])
            {
                flag=true;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp; 
            }
        }
        if(flag==false)
            break;
    }
}

//insertion sort
/* 
We start with second element of the array as first element in the array is assumed to be sorted.
Compare second element with the first element and check if the second element is smaller then swap them.
Move to the third element and compare it with the first two elements and put at its correct position
Repeat until the entire array is sorted. 

explaination: https://chatgpt.com/share/673b6410-d2fc-800b-b514-f48326b97db1
*/
void insertionSort(int A[], int size)
{
    int i, j ,temp;
    for(i=1; i<size; i++) //i<size means last index tk loop jayega
    {
        temp=A[i];
        for(j=i-1; j>=0; j--)
        {
            if(temp<A[j])
                A[j+1]=A[j];
            else
                break;
        }
        A[j+1]=temp; 
    }
}

//selection sort
/*
First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
Then we find the smallest among remaining elements (or second smallest) and move it to its correct position by swapping.
We keep doing this until we get all elements moved to correct position.

explaination: https://chatgpt.com/c/673c33fe-2b60-800b-b05a-84f2e2cf8aa4
*/
int min_val_index(int A[], int size, int j)
{
    int i, min,  minIndex;
    min=A[j];
    minIndex=j;
    for(i=j+1; i<size; i++)
    {
        if(min>A[i])
        {
            min=A[i];
            minIndex=i;
        }
    }
    return minIndex;
}

void selection_sort(int A[],int size)
{
    int i, t, minIndex;
    for(i=0; i<size-1; i++)
    {
        minIndex=min_val_index(A,size,i);
        t=A[i];
        A[i]=A[minIndex];
        A[minIndex]=t;
    }
}

//Quick sort
//explaination: https://chatgpt.com/c/673c8a52-4aac-800b-8392-f70f8d511bb9 
int quick(int A[], int left, int right)
{
    int loc=left, t;
    while(left<right)
    {
        while(left<right && A[loc]<=A[right])
            right--;
        if(left==right)
            break;
        t=A[loc];
        A[loc]=A[right];
        A[right]=t;
        loc=right;

        while(left<right && A[left]<=A[loc])
            left++;
        if(left==right)
            break;
        t=A[left];
        A[left]=A[loc];
        A[loc]=t;
        loc=left;
    }
    return loc;
}

void Quick_sort(int A[], int l, int u) //recursive quick sort
{
    int loc;
    loc=quick(A,l,u);
    if(loc>l+1)//min two elements at left
        Quick_sort(A,l,loc-1);
    if(loc<u-1)
        Quick_sort(A,loc+1,u);
}

void quickSort(int A[], int l, int u) //iterative quick sort
{
    int loc, i, j;
    stack <int> lower;
    stack <int> upper;
    lower.push(l);
    upper.push(u);
    while(!lower.empty())
    {
        i=lower.top();
        j=upper.top();
        loc=quick(A,i,j);
        lower.pop();
        upper.pop();
        if(loc>i+1)
        {
            lower.push(i);
            upper.push(loc-1);
        }
        if(loc<j-1)
        {
            lower.push(loc+1);
            upper.push(j);
        }
    }   
}

//merge sort

void merging(int A[], int l, int m, int u)
{
    int L[m-l+1], R[u-m], i, j, k;
    for(i=0; i<m-l+1; i++)
        L[i]=A[l+i];
    for(j=0; j<u-m; j++)
        R[j]=A[m+1+j];

    for(i=0, j=0, k=l;i<m-l+1 && j<=u-m; k++)
    {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
    while(i<m-l+1)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<u-m)
    {
        A[k]=R[j];
        j++;
        k++;
    }   
}

void merge_sort(int A[], int l, int u) //recursive merge sort
{
    int m;
    if(l<u)
    {
        m=(l+u)/2;
        merge_sort(A,l,m);
        merge_sort(A,m+1,u);
        merging(A,l,m,u);

    }
}