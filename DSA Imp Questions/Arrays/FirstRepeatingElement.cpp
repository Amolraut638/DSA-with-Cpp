#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution
{
    public:
        int firstRepeating(int a[],int n)
        {
            unordered_map<int,int>hash;
            for(int i=0; i<n; i++)
                hash[a[i]]++;
            for(int i=0; i<n;i++)
                if(hash[a[i]]>1)
                    return a[i]; //first repeating element return karna hoga to ye line aur uska index return karna hoga to niche wali line
                    //return i+1;
            return -1;
        }  
};

int main()
{
    Solution sol;
    int a[]={1,5,3,4,3,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<sol.firstRepeating(a,n)<<endl;
    return 0;
}
