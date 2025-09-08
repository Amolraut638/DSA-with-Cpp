#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        //single element is present
        if(start==end)
            return start;
        
        //mid is even or mid is odd 
        if(mid%2==0)
        {
            if (arr[mid]==arr[mid+1])
                start=mid+2;
            else
                end=mid;
        }
        else
        {
            if(arr[mid]==arr[mid-1])
                start=mid+1;
            else
                end=mid-1;                
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,3,60,60,4,4,};
    int ans=solve(arr);
    cout<<"odd Ekements is "<<arr[ans]<<" and the index is "<<ans<<endl;
    return 0;
}