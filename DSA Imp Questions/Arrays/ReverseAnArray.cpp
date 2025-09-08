#include<iostream>
using namespace std;

//we are using two pointers to solve this problem
void ReverseArray(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7; 

    ReverseArray(arr,size);

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

    return 0;
}

//time complexity O(n)