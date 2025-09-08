#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mid==0 && nums[0]!=nums[1]) 
                return nums[mid]; //we can write nums[0] also
            if(mid==n-1 && nums[n-1]!=nums[n-2]) 
                return nums[n-1];

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            if(mid%2==0){ //even
                if(nums[mid]==nums[mid-1])//left
                    end=mid-1;
                else //right
                    st=mid+1;
            }else{ //odd
                if(nums[mid]==nums[mid-1])  //right
                    st=mid+1;
                else   //left
                    end=mid-1;
            }
        }
        return -1;       
    }
};

int main()
{
    Solution solution;
    vector<int> nums={1,1,2,3,3,4,4,8,8};
    cout<<"The single element in given sorted array is: "<<solution.singleNonDuplicate(nums);
    return 0;
}