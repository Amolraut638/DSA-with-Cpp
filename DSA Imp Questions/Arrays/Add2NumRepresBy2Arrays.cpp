#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        int m=arr1.size();
        int n=arr2.size();
        int carry=0;
        string ans;
        int i=m-1;
        int j=n-1;
        
        while(i>=0 && j>=0)//length of both arrays is same
        {
            int x = arr1[i] + arr2[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0'); //string me integer push karne ke liye aaisa likhte hai
            carry = x / 10;
            i--,j--;
        }
        
        while(i>=0) //length of first array is longer 
        {
            int x = arr1[i] + 0 + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
        }
        
        while(j>=0) //length of second array is longer
        {
            int x = 0 + arr2[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            j--;
        }
            
        if(carry)
            ans.push_back(carry + '0');
             
        while(ans[ans.size()-1]== 0)
            ans.pop_back();
        
        reverse(ans.begin(),ans.end());
        
        return ans;      
    }
};

int main() {
    Solution solution;

    // Input arrays
    vector<int> arr1 = {6, 1, 8};
    vector<int> arr2 = {1,7};

    // Calculate sum
    string result = solution.calc_Sum(arr1, arr2);

    // Output result
    cout << "Sum: " << result << endl;

    return 0;
}
