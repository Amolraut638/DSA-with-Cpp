#include<iostream>
using namespace std;

//this algorithm is also called as the douch flag algorithm
void MovAllNegToLeft(int A[], int n)
{
    int l=0, h=n-1;
    while(l<h)
    {
        if(A[l]<0)
            l++;
        else if(A[h]>0)
            h--;
        else
            swap(A[l],A[h]);     
    }
}

int main()
{
    int A[]={1,-3,4,-5,2,7,3};
    int n=sizeof(A)/sizeof(int);

    MovAllNegToLeft(A,n);

    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
    return 0;
}