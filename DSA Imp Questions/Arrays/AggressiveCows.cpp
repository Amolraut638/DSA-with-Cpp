#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

class Solution {
  public:
    
    bool isPossibleSolution(vector<int> &stalls, int k, int mid){
        //can we place k cows, with atleast mid distance betweeen cows
        int c=1;
        int pos=stalls[0];
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - pos >= mid){
                c++;
                pos=stalls[i]; //one more cow has been placed
            }
            if(c==k)
                return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int start=0;
        int end=stalls[n-1]-stalls[0];
        int ans=-1;
         
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isPossibleSolution(stalls,k,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> stalls = {1, 2, 4, 8, 9}; // Example stall positions
    int k = 3; // Number of cows to place

    int result = solution.aggressiveCows(stalls, k);

    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
