#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* 
//this is brute force approach (time complexity is O(n^2) )
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val : nums) {
            int freq = 0;
            for(int ele : nums) {
                if(ele == val) {
                    freq++;
                }
            }
            if(freq > n / 2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = solution.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}
 */
/* 
//this is optimised approach using sorting  (time complexity is O(nlogn) )
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //sort
        sort(nums.begin(),nums.end());

        //freq count
        int freq=1,ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                freq++;
            else
            {
                freq=1;
                ans=nums[i];
            }
            if(freq > n/2)
            return ans;
        }
        return -1;  
    }
};
    
int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = solution.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}
 */

//this is best approach called moore's voting algorithm (time complexity is O(n))
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(freq==0)
                ans=nums[i]; //frequency agr 0 hain to ans ko element se initialize karenge
            if(ans==nums[i])
                freq++;
            else
                freq--;
        }
        /* 
        //this is extra step if we dont know that the answer is everytime given
        int count=0;
        for(int val:nums)
        {
            if(val==ans)
            count++;
        } 
        if(count > n/2)
            return ans;
        else
            return -1;
        */
        
        return ans;
    }
};

int main() {
    Solution solution;
    //vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = solution.majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}