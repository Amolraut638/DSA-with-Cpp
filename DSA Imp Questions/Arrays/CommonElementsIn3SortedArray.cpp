#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        int n1=arr1.size();
        int n2=arr2.size();
        int n3=arr3.size();
        vector<int>ans;
        set<int>st;  //set is used to handle the common values
        int i,j,k;
        i=j=k=0;
        while(i<n1 && j<n2 && k<n3)
        {
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
            {
                //ans.push_back(arr1[i]);
                st.insert(arr1[i]);
                i++,j++,k++;
            }
            
            else if(arr1[i]<arr2[j])
                i++;
                
            else if(arr2[j]<arr3[k])
                j++;
                
            else
                k++;
        }
        for(auto i:st)
            ans.push_back(i); //st treverse karun tyamadhil values ans madhe push kelet
        
        return ans;
    }
};

int main() {
    // Input arrays
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    Solution sol;
    vector<int> result = sol.commonElements(arr1, arr2, arr3);

    // Output the result
    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
