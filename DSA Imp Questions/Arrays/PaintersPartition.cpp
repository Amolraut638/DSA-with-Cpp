#include<iostream>
#include<vector>
using namespace std;

//this problem is exactly same as the book allocation problem

class Solution {
  public:
    
    bool isPossibleSolution(vector<int>arr,int n,int k, int mid)
    {
        int timeSum=0;
        int count=1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>mid)
                return false;
            if(arr[i]+timeSum > mid)
            {
                count++;
                timeSum=0;
                timeSum=timeSum+arr[i];
                if(count>k) //count is greater than number of painters
                    return false;
            }
            else
            {
                timeSum=timeSum+arr[i];
            }
        }
        return true;
    }
    int minTime(vector<int>& arr, int k)
    {
        int n=arr.size();
        int start=0;
        int end=0;  
        for(int i=0; i<n; i++)
            end=end+arr[i];
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isPossibleSolution(arr,n,k,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> arr{5, 10, 30, 20, 15};
    int k=3;
    cout<<"minimum time required is : "<<sol.minTime(arr,k)<<endl;
    return 0;
}