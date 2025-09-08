#include<iostream>
#include<vector>
#include<climits>
using namespace std;
/* int main()
{
    int arr[]={1,2,3,4,5};
    int sizea=5;
    int brr[]={6,7,8,9};
    int sizeb=4;

    vector <int> ans;

    //for inserting arr into ans
    for(int i=0; i<sizea; i++)
            ans.push_back(arr[i]);

    //for inserting brr into ans
    for(int i=0; i<sizeb; i++)
        ans.push_back(brr[i]);

    //printing ans array
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;
} */

//union without duplicates
int main()
{
    vector <int> arr={1,2,4,6,8,10};
    vector <int> brr={3,4,5,6};

    vector <int> ans;

    //for inserting arr into ans
    for(int i=0; i<arr.size(); i++)
        for(int j=0; j<brr.size(); j++)
            if(arr[i]==brr[j])
            {
                brr[j]=-1;
                if(brr[j]!=-1)
                    ans.push_back(arr[i]);
            }

    //for inserting brr into ans
    for(int i=0; i<brr.size(); i++)
        ans.push_back(brr[i]);

    //printing ans array
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;
}

