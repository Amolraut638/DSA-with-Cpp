#include<iostream>
#include<vector>
using namespace std;

int FirstOccurance(vector<int> vec, int target)
{
    int start=0;
    int end=vec.size()-1;
    int mid;//
    int ans=-1;

    while(start<=end)
    {
        mid=start + (end - start)/2;
        if(target<vec[mid]) //left search
            end=mid-1;
        else if(target>vec[mid]) //right search
            start=mid+1;
        else{
            ans=mid;
            end=mid-1;
        }  
    }
    return ans;
}

int main()
{
    vector<int> vec{1,2,3,4,4,4,4,4,4,7,8,12,17};
    int target=4;

    int ans=FirstOccurance(vec,target);
    cout<<"the ans is: "<<ans<<endl;
    return 0;
} 

