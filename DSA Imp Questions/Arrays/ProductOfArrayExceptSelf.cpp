#include<iostream>
#include<vector>
using namespace std;
/* 
//this is bruteforce approach ( Time complexity= O(n^2) )
class solution
{
    public:
        vector<int> publicExceptSelf(vector<int>&nums)
        {
            int n=nums.size();
            vector<int> ans(n,1);  //n size ka ans vector create kiya usko 1 se initialize kara
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        ans[i]=ans[i]*nums[j];
                    }
                }
            }
            return ans;
        }
};
*/

//this is optimal solution  ( time complexity O(n) )
class solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1; i<n; i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        
        int suffix=1;
        for(int i=n-2; i>=0; i--)
        {
            suffix=suffix*nums[i+1];
            ans[i]=ans[i]*suffix;
        }
        return ans;
    }
};

int main()
{
    solution sol;
    vector<int> nums={1,2,3,4};
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Result: ";
    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i] << " ";
    }
    return 0;
} 