#include<iostream>
#include<climits>
using namespace std;

/* //this code is to print subarrays
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};

    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
} */


/* //brute force approach to calculate max subarray sum ( time complexity is O(n^2) )
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum=INT_MIN;

    for(int start=0;start<n;start++)
    {
        int currSum=0;
        for(int end=start;end<n;end++)
        {
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
        //maxSum=max(currSum,maxSum);
    }
    cout<<"Maximum Subarray sum is "<<maxSum;
    return 0;
} */


//this is optimum solution of Max subarray sum given by kadane's algorithm ( time complexity is O(n) )
int main()
{
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    int maxSum=INT_MIN,currSum=0;

    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
            currSum=0;
    } 
    cout<<"The maximum subarray sum is "<<maxSum;
    return 0;
}