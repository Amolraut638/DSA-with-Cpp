#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
//this is brute force approach ( time complexity is O(n^2) )
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=0; //ans

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int width=j-i;
                int ht=min(height[i],height[j]);
                int currWater=width*ht;

                maxWater=max(maxWater,currWater);
            }
        }
        return maxWater;
        
    }
};

int main()
{
    Solution ans;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"maxWater ="<<ans.maxArea(height);
    return 0;
}
*/

//this is optimun solution using two pointers  (time complexity O(n) )
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=0; //ans
        int lp=0, rp=n-1;

        while(lp < rp)
        {
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currWater=w*ht; 
            maxWater=max(maxWater,currWater);

            height[lp] < height[rp] ? lp++ : rp--;

        }
        return maxWater; 
    }
};

int main()
{
    Solution ans;
    vector<int> height={3,0,1,0,4,0,2}; //1,8,6,2,5,4,8,3,7
    cout<<"maxWater = "<<ans.maxArea(height);
    return 0;
}
