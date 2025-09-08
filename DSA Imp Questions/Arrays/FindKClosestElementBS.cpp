#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lowerBound(vector<int>&arr,int x){
        int start=0;
        int end=arr.size()-1;
        int ans=end; //this is the condition that is to be remembered
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(arr[mid]>=x)
            {
                ans=mid;
                end=mid-1;
            }
            else if(x>arr[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return ans;
    }

    vector<int> bs_method(vector<int> &arr,int k,int x){
        //lower bound
        int h=lowerBound(arr,x);
        int l=h-1;
        while(k--){
            if(l<0)
                h++;
            else if(h>=arr.size())
                l--;
            else if(x-arr[l]>arr[h]-x)
                h++;
            else
                l--;
        }
        //return vector<int>(arr.begin()+l+1,arr.begin()+h);
        vector<int>ans;
        for(int i=l+1; i<h; i++)
            ans.push_back(arr[i]);
        return ans; 

    }

    vector<int> TwoPtrMethod(vector<int>&arr, int k, int x){
        int low=0;
        int high=arr.size()-1;
        while((high-low)>=k)
        {
            if(x-arr[low] > arr[high]-x)
                low--;
            else
                high--;
        }
        vector<int>ans;
        for(int i=low; i<=high; i++)
            ans.push_back(arr[i]);
        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // k aise elements find krne hain jo x ke closest element ho
        //return TwoPtrMethod(arr,k,x);
        return bs_method(arr,k,x);
    }
};

int main()
{
    Solution sol;
    //vector<int> arr{1,1,2,3,4,5};
    vector<int> arr{1,2,3,4,5};
    //int k=4;
    int k=4;
    //int x=-1;
    int x=3;
    vector<int> answer=sol.findClosestElements(arr,k,x);
    for(auto i:answer)
        cout<<i<<" ";

    return 0;
}