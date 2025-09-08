#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        //we dont have to use this method bcoz its mentioned in question
        int low=0,med=0,high=nums.size()-1;
        //low is for 0, med is for 1 and high is for 2 
        while(med<=high)
        {
            if(nums[med]==0)
            {
                swap(nums[low],nums[med]);
                low++,med++;
            }
            else if(nums[med]==1)
                med++;
            else
            {
                swap(nums[med],nums[high]);
                high--;
            }
        }   
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0, 2, 0, 0, 1, 2, 1, 1, 0}; // Example input

    cout << "Original array: ";
    for (int i : nums)
        cout << i << " ";
    cout << endl;

    sol.sortColors(nums);

    cout << "Sorted array: ";
    for (int i : nums) 
        cout << i << " ";
    cout << endl;

    return 0;
}


/*
Dry run of this code

Input:
nums = [2, 0, 2, 1, 1, 0]

Steps:
Initial: low=0, med=0, high=5
1) nums[med] = 2. Swap nums[med] with nums[high]: [0, 0, 2, 1, 1, 2]. high--.
low=0, med=0, high=4
2) nums[med] = 0. Swap nums[low] with nums[med]: [0, 0, 2, 1, 1, 2]. low++, med++.
low=1, med=1, high=4
3) nums[med] = 0. Swap nums[low] with nums[med]: [0, 0, 2, 1, 1, 2]. low++, med++.
low=2, med=2, high=4
4) nums[med] = 2. Swap nums[med] with nums[high]: [0, 0, 1, 1, 2, 2]. high--.
low=2, med=2, high=3
5) nums[med] = 1. Move med++.
low=2, med=3, high=3
6) nums[med] = 1. Move med++.

Output:
nums = [0, 0, 1, 1, 2, 2]

 */





