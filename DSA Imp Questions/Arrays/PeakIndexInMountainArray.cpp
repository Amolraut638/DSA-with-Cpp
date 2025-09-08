#include<iostream>
#include<vector>
using namespace std;
//target is present at peak position and we have to return index of that peak.
//for increasing order upto peak A[i]<A[i+1] and for decreasing order A[i]>A[i+1]
//A[p]>A[p-1] and A[p]<A[p+1] 
//first approach is linear search
//index 0 and index n-1 will not be our answer bcoz they do not form any mountain so we take st=1 & end=n-2
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int  n=arr.size();
        int st=1,end=n-2;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){ //ans is at right
                st=mid+1;
            }
            else{ //ans is at left
                end=mid-1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    vector<int> arr={0,3,5,10,4,2};
    cout<<"The peak is at: "<<solution.peakIndexInMountainArray(arr);
    return 0;
}
