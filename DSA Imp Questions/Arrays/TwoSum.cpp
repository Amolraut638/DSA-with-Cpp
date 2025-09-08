#include<iostream>
#include<vector>
using namespace std;
/*
//we have given a sorted array

//this is the brute force approach (time complexity is O(n^2))
vector<int> twoSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
              ans.push_back(i);
              ans.push_back(j);
              return ans;
            }
        }
    }
    return ans; //if no target matches then it gives null output
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=46;

    vector<int> ans= twoSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;  //this indexes is of vector because it contains two numbers at index 0 and 1 
    return 0;
} 
*/

//this is the optimum solution using two pointers (time complexity is O(n))
vector<int> twoSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();

    int i=0,j=n-1;
    while(i<j)
    {
        int pairSum=nums[i]+nums[j];
        if(pairSum>target)
        {
            j--;
        }
        else if(pairSum<target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=26;

    vector<int> ans= twoSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;  //this indexes is of vector because it contains two numbers at index 0 and 1 
    return 0;
}