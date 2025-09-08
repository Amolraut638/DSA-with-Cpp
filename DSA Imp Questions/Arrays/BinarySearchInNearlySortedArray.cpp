#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==target)
            return mid;
        if(mid+1<end && arr[mid+1]==target)
            return mid+1;
        if(mid-1>=start && arr[mid-1]==target)
            return mid-1;

        if(target>arr[mid])//right search
            start=mid+2;
        else
            end=mid-2;

        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{10,3,40,20,50,80,70};//nearly sorted array
    int target=50;

    int ans=binarySearch(arr,target);
    cout<<"index of the "<<target<<" is "<<ans<<endl;

    return 0;
}    

//nearly sorted array is the array in which the target is present at the one minus or one plus position from the mid
//array agar sorted or nearly sorted nhi hain to usko seraching ke liye linear search se hi traverse karna padega  