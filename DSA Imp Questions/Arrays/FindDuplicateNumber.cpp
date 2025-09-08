#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
    public:
        int findDuplicate(vector<int>& nums) 
        {
            /*  
            sort(nums.begin(),nums.end());
            for(int i=0; i<nums.size()-1; i++)
                if(nums[i]==nums[i+1])
                    return nums[i];
            return -1;
            */

            //visited solution

            /* 
            int ans=-1;
            for(int i=0; i<nums.size(); i++)
            {
                int index=abs(nums[i]);

                //already visited
                if(nums[index]<0)
                {
                    ans=index;
                    break;
                }
                //visited mark
                nums[index]*=-1;
            }
            return ans;

            isme array modify hota hain aur hume modify nhi karna hain
            */

            //better approach (positionaing method)
            while(nums[0]!=nums[nums[0]])
                swap(nums[0],nums[nums[0]]);
            return nums[0];

        }
};

int main()
{
    Solution sol;
    vector<int> nums={1,4,3,4,2};
    cout<<"duplicate number in array is : "<<sol.findDuplicate(nums);
    return 0;
}