#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> ans;
        ans.push_back(1); // Initialize with 1 as factorial(0) = 1
        for(int i = 2; i <= n; i++) {
            int carry = 0; // Reset carry for each multiplication
            for(int j = 0; j < ans.size(); j++) {
                int x = ans[j] * i + carry;
                ans[j] = x % 10;
                carry = x / 10;
            }
            while(carry) {
                ans.push_back(carry % 10);
                carry = carry / 10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution solution;
    int n=987;
    vector<int> ans;
    ans=solution.factorial(n);
    cout<<"factorial of "<<n<<" is :";
    for(int i : ans)
        cout<<i;

    cout<<endl; 
    return 0;
}
