#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//this code is okay but we can improve its time complexity
//TC:O(nlogn)
class Solution {
public:
    int findDuplicate(vector<int>& nums){
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i]==nums[i+1])
                return nums[i];
        return -1;     
    }
};

//this is the better solution than above one
