#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[]={5,15,22,1,-15,24};
    int size=6;

    int Greatest = INT_MIN;

    for(int i=0;i<size;i++)
    {
        //Greatest=max(nums[i],Greatest);
        if(nums[i]>Greatest)
        {
            Greatest=nums[i];
        }
    }
    cout<<"Greatest="<<Greatest;


    return 0;
}
