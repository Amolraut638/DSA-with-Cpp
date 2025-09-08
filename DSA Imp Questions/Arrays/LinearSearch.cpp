#include<iostream>
using namespace std;

int linearSearch(int arr[],int target,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[]={3,5,1,9,6,3,2,0};
    int target=6;
    int size=sizeof(arr)/sizeof(int);
    

    cout<<linearSearch(arr,target,size);
    return 0;
}

//linear search time complexity is O(n)