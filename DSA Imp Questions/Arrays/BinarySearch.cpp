#include<iostream>
#include<vector>
using namespace std;

// binary search  only applies on sorted arrays
//time complexity O(logn),space complexity O(1) this method is efficient 3
int BinarySearch(vector<int> arr,int tar)
{
    int n=arr.size();
    int st=0,end=n-1;

    while(st<=end)  // <= isliye likha kyuki st,end and tar ek hi ho sakta hain e.g 12
    {
        //int mid=(st+end)/2;
        int mid=st + (end-st)/2; //to avoid overflow condition we use this formula

        if(tar > arr[mid]){
            st=mid+1;
        }
        else if(tar < arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

//2nd method by recursion,time complexity O(logn),space complexity O(logn)

int recBinarySearch(vector<int> arr, int tar, int st, int end)
{
    if(st<=end)
    {
        int mid=st+(end-st)/2;

        if(tar>arr[mid]) //2nd half
        {
            return recBinarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid])
        {
            return recBinarySearch(arr,tar,st,mid-1);
        } 
        else
            return mid;
    }
    return -1;
}
int main()
{
    vector<int> arr1 ={-1, 0, 3, 4, 5, 9, 12};  //odd
    int tar1=9;
    cout<<BinarySearch(arr1,tar1)<<endl;

    vector<int> arr2={-1, 0, 3, 5, 9, 12}; //even
    int tar2=0;
    cout<<recBinarySearch(arr2,tar2,0,5)<<endl;
    return 0;
}
