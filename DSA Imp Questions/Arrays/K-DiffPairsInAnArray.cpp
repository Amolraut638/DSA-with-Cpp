#include <iostream>
#include<vector>
#include <algorithm> // For sort
#include <set>       // For set
#include <utility>   // For pair
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0, j=1;
        while(j<nums.size())
        {
            int diff=nums[j]-nums[i];
            if(diff==k)
            {
                ans.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff>k)
                i++;
            else
                j++;
            
            if(i==j)
            j++;      
        }
    return ans.size();      
    }
};

//this question can also be solved by using binary search
int main()
{
    Solution sol;
    vector<int> nums={3,1,4,1,5};
    int ans,k=2;
    ans=sol.findPairs(nums,k);
    cout<<"the answer is : "<<ans<<endl;

    return 0;
}