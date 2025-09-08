#include<iostream>
#include<vector>
using namespace std;
//in rotated sorted array there is either left half or right half will always be sorted
//firstly we find which half part is sorted and apply binary search on them 
//we use modified binary search in this question
class Solution {
public:
    int search(vector<int>& A, int tar) {
        int n=A.size();
        int st=0,end=n-1;
        while(st<=end)
        {
            int mid = st + (end-st)/2;
            if(A[mid]==tar){
                return mid;
            }

            if(A[st] <= A[mid]){ //left sorted array condition
                if(tar>=A[st] && tar<=A[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{  //right sorted array
                if(tar>=A[mid] && tar<=A[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;       
    }
};

int main()
{
    Solution sol;
    vector<int> A={4,5,6,7,0,1,2};
    int target=0;
    cout<<"Target is at index: "<<sol.search(A,target);
    return 0;
}