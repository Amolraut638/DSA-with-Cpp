#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void merge(vector<int>&ans, vector<pair<int, int>>&numsPair, int left, int mid, int right){
        vector<pair<int,int>> temp(right-left+1);
        int i=left, j=mid+1;
        int k=0;

        while(i<=mid && j<=right){
            if(numsPair[i].first <= numsPair[j].first){
                temp[k] = numsPair[j];
                k++, j++;
            }
            else{
                ans[numsPair[i].second] += right-j+1;
                temp[k]=numsPair[i];
                k++, i++;
            }
        }

        while(i<=mid){
            temp[k]=numsPair[i];
            k++,i++;
        }

        while(j<=right){
            temp[k]=numsPair[j];
            k++, j++;
        }


        for(int i=left; i<=right; i++){
            numsPair[i] = temp[i-left];
        }
    }

    void mergeSort(vector<int> &ans, vector<pair<int, int>>&numsPair, int left, int right){
        if(left<right){
            int mid = left + (right-left)/2;
            mergeSort(ans, numsPair, left, mid);
            mergeSort(ans, numsPair, mid+1, right);
            merge(ans, numsPair, left, mid, right);
        }
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int, int>> numsPair;
        for(int i=0; i<n; i++)
            numsPair.push_back({nums[i],i});

        vector<int> ans(n, 0);
        mergeSort(ans, numsPair, 0, n-1);
        return ans;
    }
};


/* 

You're using a modified merge sort where during the merge step, you count how many elements from the right half are smaller than the current element from the left half, and store those counts in an answer array.

✅ countSmaller() — Entry Function

vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();       //Get the size of the input array.
    vector<pair<int, int>> numsPair;
    for(int i = 0; i < n; i++)
        numsPair.push_back({nums[i], i});

    You're pairing each number with its original index because after sorting, you still want to place the result in the original order.

    vector<int> ans(n, 0);   //This ans vector will store the final count of smaller elements after each element.
    mergeSort(ans, numsPair, 0, n-1);
    return ans;
}

Calls the recursive mergeSort() function and returns the answer.

✅ mergeSort() — Recursive Divide-and-Conquer Function

void mergeSort(vector<int> &ans, vector<pair<int, int>>& numsPair, int left, int right) {
    if(left < right){
        int mid = left + (right-left)/2;

Standard merge sort splitting:
Divide the range into [left, mid] and [mid+1, right].

mergeSort(ans, numsPair, left, mid);
        mergeSort(ans, numsPair, mid+1, right);
        merge(ans, numsPair, left, mid, right);
    }
}
Recursively sort the two halves, then merge them, and update the ans array with counts.

✅ merge() — The Key Function That Counts!

void merge(vector<int>& ans, vector<pair<int, int>>& numsPair, int left, int mid, int right) {
    vector<pair<int, int>> temp(right - left + 1);
    int i = left, j = mid + 1;
    int k = 0;

You're merging two sorted halves: [left, mid] and [mid+1, right].
temp is used to temporarily hold the merged result.

✅ The Core Comparison Loop:

while(i <= mid && j <= right) {
    if(numsPair[i].first <= numsPair[j].first) {
        temp[k] = numsPair[j];
        k++, j++;
    } else {
        ans[numsPair[i].second] += right - j + 1;
        temp[k] = numsPair[i];
        k++, i++;
    }
}
You're merging in descending order.

If numsPair[i].first > numsPair[j].first, then all elements from j to right are smaller than numsPair[i] — so:

ans[numsPair[i].second] += right - j + 1;
Else, move the right half element into temp.

✅ Handle Remaining Elements

while(i <= mid) {
    temp[k] = numsPair[i];
    k++, i++;
}

while(j <= right) {
    temp[k] = numsPair[j];
    k++, j++;
}
Copy remaining elements from either half into temp.

✅ Copy Sorted Subarray Back


for(int i = left; i <= right; i++) {
    numsPair[i] = temp[i - left];
}
Replace original portion of numsPair with the sorted result.

✅ Dry Run: nums = [5, 2, 6, 1]

Let’s trace it:

numsPair = [(5,0), (2,1), (6,2), (1,3)]

Merge [5,2] → [5,2]: → 2 is less than 5 → count for index 0 += 1

Merge [6,1] → 1 < 6 → count for index 2 += 1

Merge [5,2] and [6,1] → During this, 1 is smaller than 5 and 2, so:

count[0] += 1 (total becomes 2)

count[1] += 0 (since 2 < 6)

Final: [2, 1, 1, 0]

✅ Final Output:

Input:  [5, 2, 6, 1]
Output: [2, 1, 1, 0]

✅ Time and Space Complexity:

Metric	Value
Time	O(n log n)
Space	O(n)

*/