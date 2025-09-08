#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr{1,99,99,4,5,33,7,8,3};
    vector <int> brr{2,3,12,10,11,33,22,99};

    vector <int> ans;

    for(int i=0; i<arr.size(); i++)
        for(int j=0; j<brr.size(); j++)
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
                brr[j]==-1; //if values is repeated then that case will handled here.visited element will marked -1
                }

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;
}