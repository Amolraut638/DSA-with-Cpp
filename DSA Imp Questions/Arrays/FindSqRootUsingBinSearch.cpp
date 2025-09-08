#include<iostream>
#include<vector>
using namespace std;
int FindSqrt(int n)
{
    int ans=-1;
    int target=n;
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(mid*mid==target)
            return mid;
        if(mid*mid>target) //left search
            end=mid-1;
        else  //right search
        {
            ans=mid;
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}

//explaination of this code:https://chatgpt.com/share/677a4cf6-f2f0-800b-96cf-348194c8ed7c
int main()
{
    int n;
    char choice;
    do{
    cout<<"Enter the number :";
    cin>>n;
    int ans=FindSqrt(n);
    cout<<"the answer is : "<<ans<<endl;

    cout<<"Do you want to continue? (y/n) :";
    cin>>choice;
    }while(choice=='y' || choice=='Y');

    cout<<"Exiting the program !"<<endl;
    return 0;
}