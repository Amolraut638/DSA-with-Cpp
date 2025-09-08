#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector <int> arr)
{
    int ans=0;
    for(int i=0; i<arr.size(); i++)
        ans = ans ^ arr[i];
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    vector <int> arr(n);//arr vector of n size will be created
    cout<<"Enter the elements:";
    for(int i=0; i<arr.size(); i++)
        cin>>arr[i];

    int uniqueElement=findUnique(arr);
    
    cout<<"The unique element is "<<uniqueElement<<endl;

    return 0;
}